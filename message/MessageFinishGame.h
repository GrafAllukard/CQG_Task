#pragma once

#include "MessageItf.h"

namespace Message
{
   struct CMessageFinishGame : public IMessage
   {
      unsigned int m_playerID;

   protected:

      virtual std::string toString() const
      {
         return std::string();
      }

   }; // struct CMessageFinishGame
} // namespace Message
