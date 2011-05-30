#pragma once

#include <string>

#include "MessageItf.h"

namespace Message
{
   struct CMessageError : public IMessage
   {
      std::string m_strError;

   protected:

      virtual std::string toString() const
      {
         return std::string();
      }

   }; // struct CMessageError
} // namespace Message
