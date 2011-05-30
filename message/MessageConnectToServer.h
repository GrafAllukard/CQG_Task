#pragma once

#include <string>

#include "MessageItf.h"

namespace Message
{
   struct CMessageConnectToServer : public IMessage
   {
      std::string m_namePlayer;
      std::string m_serverIP;
      unsigned int m_serverPort;

   protected:

      virtual std::string toString() const
      {
         return std::string();
      }

   }; // struct CMessageConnectToServer


   struct CMessageConfirmationConnectToServer : public IMessage
   {
      unsigned int m_playerID;

   protected:

      virtual std::string toString() const
      {
         return std::string();
      }

   }; // struct CMessageConfirmationConnectToServer
} // namespace Message
