
TARGET = csg
TEMPLATE = lib
CONFIG += staticlib

QMAKE_CXXFLAGS += -Wall

INCLUDEPATH += ../vectorMatrix ../image

SOURCES += *.cpp

HEADERS += *.h

DESTDIR = ../lib

