#include "ServerManager.h"


namespace ServerManagerDecl
{
/// constructor
   CServerManager::CServerManager()
   {

   }

   CServerManager::~CServerManager()
   {

   }
/// public function
   void CServerManager::StartServerManager()
   {
      m_tcpSocket = new QTcpSocket(this);

      m_tcpSocket->connectToHost("127.0.0.1",12345);
      //m_tcpSocket->connected();
      connect(m_tcpSocket, SIGNAL(connected()), this, SLOT(slotConnected()));
      connect(m_tcpSocket, SIGNAL(readyRead()), this, SLOT(slotReadyRead()));
      connect(m_tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(slotError(QAbstractSocket::SocketError)));

   }
/// slots connect to server
   void CServerManager::slotConnected()
   {
   }

   void CServerManager::slotReadyRead()
   {
   }

   void CServerManager::slotError(QAbstractSocket::SocketError)
   {
   }

} // namespace ServerManagerDecl
