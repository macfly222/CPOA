#-------------------------------------------------
#
# Project created by QtCreator 2013-07-24T14:27:30
#
#-------------------------------------------------

QT       += core gui opengl widgets

#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = InterfaceCSG
TEMPLATE = app

QMAKE_CXXFLAGS += -Wall

INCLUDEPATH += ../vectorMatrix ../image ../csg ../particle

LIBS +=  -L ../lib \
#	-lcsg   \
#	-limage \
        -lvectorMatrix \
#   -lparticle \
	-lboost_thread

PRE_TARGETDEPS += ../lib/*.a


DESTDIR = ../bin

SOURCES += main.cpp\
		   mainwindow.cpp \
		   renderImg.cpp

HEADERS  += mainwindow.h \
			renderImg.h

FORMS    += mainwindow.ui
