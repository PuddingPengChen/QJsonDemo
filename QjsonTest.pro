#-------------------------------------------------
#
# Project created by QtCreator 2015-06-09T10:44:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QjsonTest
TEMPLATE = app


SOURCES += main.cpp\
        qjsontest.cpp \
    QJson/json_parser.cc \
    QJson/json_scanner.cc \
    QJson/json_scanner.cpp \
    QJson/parser.cpp \
    QJson/parserrunnable.cpp \
    QJson/qobjecthelper.cpp \
    QJson/serializer.cpp \
    QJson/serializerrunnable.cpp

HEADERS  += qjsontest.h \
    QJson/FlexLexer.h \
    QJson/json_parser.hh \
    QJson/json_scanner.h \
    QJson/location.hh \
    QJson/parser.h \
    QJson/parser_p.h \
    QJson/parserrunnable.h \
    QJson/position.hh \
    QJson/qjson_debug.h \
    QJson/qjson_export.h \
    QJson/qobjecthelper.h \
    QJson/serializer.h \
    QJson/serializerrunnable.h \
    QJson/stack.hh

FORMS    += qjsontest.ui
