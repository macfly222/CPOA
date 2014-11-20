
TARGET = vectorMatrix
TEMPLATE = lib
CONFIG += staticlib

#INCLUDEPATH +=

#SOURCES += *.cpp
SOURCES += vectCalc.cpp

#HEADERS += *.h *.hpp
HEADERS += vecttempl.h vectCalc.h \
    array.hpp \
    array.h

DESTDIR = ../lib

QMAKE_CXXFLAGS += -Wall

