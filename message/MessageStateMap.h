#pragma once

#include <vector>

#include "MessageItf.h"

namespace Message
{
   struct CStatePlanet
   {
      unsigned int m_countFleet;
      unsigned int m_planetID;
      unsigned int m_playerID;
   }; // struct CStatePlanet

   struct CStateFleet
   {
      unsigned int m_countFleet;
      unsigned int m_fleetID;
      unsigned int m_percentRoute;
      unsigned int m_planetFinishID;
      unsigned int m_planetStartID;
      unsigned int m_playerID;

   }; // struct CStateFleet

   struct CMessageStateMap : public IMessage
   {
      std::vector<CStateFleet> m_fleetState;
      std::vector<CStatePlanet> m_planetState;

   protected:

      virtual std::string toString() const
      {
         return std::string();
      }

   }; // struct CMessageStateMap

}; // namespace Message
