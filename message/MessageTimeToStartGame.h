#pragma once

#include "MessageItf.h"

namespace Message
{
   struct CMessaheTimeToStartGame : public IMessage
   {
      unsigned int m_second;

   protected:

      virtual std::string toString() const
      {
         return std::string();
      }

   }; // struct CMessaheTimeToStartGame

}; // namespace Message
