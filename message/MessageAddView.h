#pragma once

#include "MessageItf.h"

namespace Message
{
   class ISceneUpdates;

   struct CMessageAddView : public IMessage
   {
      ISceneUpdates* m_view;

   protected:

      virtual std::string toString() const
      {
         return std::string();
      }

   }; // struct CMessageAddView

} // namespace Message
