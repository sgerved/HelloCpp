TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    functions.cpp \
    classes/attack.cpp \
    classes/person.cpp

HEADERS += \
    functions.h \
    classes/attack.h \
    classes/person.h

DISTFILES += \
    README.md
