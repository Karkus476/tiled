include(../plugin.pri)

DEFINES += SUPERTUX_LIBRARY

SOURCES += supertuxplugin.cpp \
    sexp/io.cpp \
    sexp/value.cpp \
    sexp/lexer.cpp \
    sexp/parser.cpp \
    sexp/util.cpp
HEADERS += supertuxplugin.h \
    sexp/io.hpp \
    sexp/error.hpp \
    sexp/value.hpp \
    sexp/lexer.hpp \
    sexp/parser.hpp \
    sexp/util.hpp
