QT       += core gui
QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bdd.cpp \
    contact.cpp \
    dialog_ajout.cpp \
    dialog_ajout_modif.cpp \
    interaction.cpp \
    listcontact.cpp \
    listinteraction.cpp \
    listtodo.cpp \
    main.cpp \
    mainwindow.cpp \
    todo.cpp \
    dialog_interaction.cpp \
    dialogtodo.cpp

HEADERS += \
    bdd.h \
    chrono_io.h \
    contact.h \
    date.h \
    dialog_ajout.h \
    dialog_ajout_modif.h \
    interaction.h \
    listcontact.h \
    listinteraction.h \
    listtodo.h \
    mainwindow.h \
    todo.h \
    dialog_interaction.h \
    dialogtodo.h

FORMS += \
    dialog_ajout.ui \
    dialog_ajout_modif.ui \
    mainwindow.ui \
    dialog_interaction.ui \
    dialogtodo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
