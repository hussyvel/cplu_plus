QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    dominio_caixadedialogo.cpp \
    dominio_teste.cpp \
    dominio_testesqt.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    dialog.h \
    dominio_caixadedialogo.h \
    dominio_teste.h \
    dominio_testesqt.h \
    mainwindow.h

FORMS += \
    dialog.ui \
    dominio_caixadedialogo.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
