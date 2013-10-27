#-------------------------------------------------
#
# Project created by QtCreator 2013-10-27T20:37:38
#
#-------------------------------------------------

QT       += core gui

TARGET = Triton
TEMPLATE = app


SOURCES += main.cpp\
        Triton.cpp \
    dom/Node.cpp \
    html/Parser.cpp

HEADERS  += Triton.h \
    dom/Node.h \
    html/Parser.h

FORMS    += triton.ui
