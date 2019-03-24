#include "myprotocol.h"
#include <QDataStream>

MyProtocol::MyProtocol()
{
    initMsgPackage();
}

void MyProtocol::initMsgPackage(void)
{
    clearMsgPackage();
}

void MyProtocol::clearMsgPackage(void)
{
    name.clear();
    status = STATU_NONE;
    operate = OPERATE_NONE;
    command = COMMAND_NONE;
    m_content.clear();
    m_length = LENGTH_NONE;
}


QByteArray MyProtocol::getMsgName(void) const
{
    return name;
}
void MyProtocol::setMsgName(const QByteArray msgname)
{
    name = msgname;
}

qint16 MyProtocol::getMsgStatus(void) const
{
    return status;
}

void MyProtocol::setMsgStatus(const qint16 status)
{
    this->status = status;
}

qint16 MyProtocol::getMsgOperate(void) const
{
    return operate;
}

void MyProtocol::setMsgOperate(const qint16 operate)
{
    this->operate = operate;
}

qint16 MyProtocol::getMsgCommand(void) const
{
    return command;
}

void MyProtocol::setMsgCommand(const qint16 command)
{
    this->command = command;
}
QString MyProtocol::getMsgContent(void) const
{
    return m_content;
}
void MyProtocol::setMsgContent(const QString content)
{
    this->m_content = content;
}
qint16 MyProtocol::getMsgLength(void) const
{
    return m_length;
}
void MyProtocol::setMsgLength(const qint16 length)
{
    this->m_length = length;
}

void MyProtocol::updataMsg(MyProtocol *protocol)
{
    name = protocol->getMsgName();
    status = protocol->getMsgStatus();
    operate = protocol->getMsgOperate();
    command = protocol->getMsgCommand();
    m_content = protocol->getMsgContent();
    m_length = protocol->getMsgLength();
}

QByteArray *MyProtocol::updataMsg(const QByteArray msgName,
                      const qint16 msgstatus,
                      const qint16 msgoperate,
                      const qint16 msgcommand,
                      const QString content,
                      const qint16 msglength)
{
    this->name = msgName;
    this->status = msgstatus;
    this->operate = msgoperate;
    this->command = msgcommand;
    this->m_content = content;
    this->m_length = msglength;
}

QByteArray *MyProtocol::packageMsg(void)
{
    QByteArray *buffer = new QByteArray;
    QDataStream out(buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    out << name;
    out << status;
    out << operate;
    out << command;
    out << m_content;
    out << m_length;

    return buffer;
}
void MyProtocol::unpackageMsg(QDataStream &in)
{
    in >> name;
    in >> status;
    in >> operate;
    in >> command;
    in >> m_content;
    in >> m_length;
}
