#pragma once

#include <QObject>
#include <QTcpSocket>
#include <QMessageBox>

#include "message/MessageItf.h"

namespace ServerManagerDecl
{
   class CServerManager : public QObject
   {
      Q_OBJECT

   public:
      CServerManager();
      ~CServerManager();

      void StartServerManager();

   public slots:

      //void TakeServerConnect(Message::IMessage* i_pcMessage);
      //void TakeStepPlayer(Message::IMessage* i_pcMessage);

   signals:

      //void SendConfirmConnect(Message::IMessage* i_pcMessage);
      //void SendError(Message::IMessage* i_pcMessage);
      //void SendFinishGame(Message::IMessage* i_pcMessage);
      //void SendStateMap(Message::IMessage* i_pcMessage);
      //void SendStartGame(Message::IMessage* i_pcMessage);
      //void SendTimeToStart(Message::IMessage* i_pcMessage);

   private slots:
      void slotConnected();
      void slotReadyRead();
      void slotError(QAbstractSocket::SocketError);

   private:

      QTcpSocket * m_tcpSocket;

   }; // class CServerManager
} // namespace ServerManagerDecl
