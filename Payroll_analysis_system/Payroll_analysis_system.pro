#-------------------------------------------------
#
# Project created by QtCreator 2019-03-10T15:59:19
#
#-------------------------------------------------

QT       += core gui
QT       += network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Payroll_analysis_system
TEMPLATE = app

include (./protocol/protocol.pri)
include (./dealMsg/dealMsg.pri)

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui
CONFIG += C++11
