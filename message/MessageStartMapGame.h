#pragma once

#include <string>
#include <vector>

#include "MessageItf.h"

namespace Message
{
   struct CPlanetStartData
   {
      unsigned int m_countFleet;
      unsigned int m_planetID;
      unsigned int m_planetR;
      unsigned int m_planetX;
      unsigned int m_planetY;
      unsigned int m_playerID;
   }; // struct CPlanetStartData

   struct CPlayerStartData
   {
      unsigned int m_playerID;
      std::string m_playerName;
   }; // struct CPlayerStartData

   struct CMessageStartMapGame : public IMessage
   {
      unsigned int m_flyV;
      unsigned int m_growV;
      unsigned int m_mapX;
      unsigned int m_mapY;
      std::vector<CPlanetStartData> m_planetData;
      std::vector<CPlayerStartData> m_playerData;

   protected:

      virtual std::string toString() const
      {
         return std::string();
      }

   }; // struct CMessageStartMapGame

} // namespace Message
