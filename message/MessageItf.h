
#pragma once

#include <string>

namespace Message
{
   struct IMessage
   {
      virtual std::string toString() const = 0;

   }; // struct IMessage

} // namespace Message
