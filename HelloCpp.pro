TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    functions.cpp \
    classes/attack.cpp

HEADERS += \
    functions.h \
    classes/attack.h

DISTFILES += \
    README.md
