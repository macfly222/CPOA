
TARGET = vectorMatrix
TEMPLATE = lib
CONFIG += staticlib

#INCLUDEPATH +=

#SOURCES += *.cpp
SOURCES += vectCalc.cpp \
    matrix33f.cpp \
    v3f.cpp \
    v2f.cpp \
    image2grey.cpp \
    image2rgb.cpp \
    v3uc.cpp

#HEADERS += *.h *.hpp
HEADERS += vecttempl.h \
    array.hpp \
    array.h \
    vector.hpp \
    vector.h \
    vectCalc.h \
    v2f.h \
    v3f.h \
    matrix33f.h \
    image.h \
    image.hpp \
    image2d.h \
    image2d.hpp \
    image2grey.h \
    image2rgb.h \
    v3uc.h

DESTDIR = ../lib

QMAKE_CXXFLAGS += -Wall

