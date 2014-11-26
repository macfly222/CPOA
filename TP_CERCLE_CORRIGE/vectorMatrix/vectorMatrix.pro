
TARGET = vectorMatrix
TEMPLATE = lib
CONFIG += staticlib

#INCLUDEPATH +=

#SOURCES += *.cpp
SOURCES += vectCalc.cpp

#HEADERS += *.h *.hpp
HEADERS += vecttempl.h \
    array.hpp \
    array.h \
    vector.hpp \
    vector.h \
    vectCalc.h \
    v2f.h \
    v2f.hpp \
    v3f.h \
    v3f.hpp

DESTDIR = ../lib

QMAKE_CXXFLAGS += -Wall

