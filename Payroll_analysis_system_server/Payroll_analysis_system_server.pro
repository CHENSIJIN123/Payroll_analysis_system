#-------------------------------------------------
#
# Project created by QtCreator 2019-03-10T15:59:55
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Payroll_analysis_system_server
TEMPLATE = app
include (./protocol/protocol.pri)
include (./dealMsg/dealMsg.pri)
include (./database/database.pri)

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui
CONFIG += C++11
