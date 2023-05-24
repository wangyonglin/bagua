AUTOMAKE_OPTIONS=foreign
lib_LTLIBRARIES=libmeetos.la
AM_CPPFLAGS=-I $(top_srcdir)/src/meetos/include/

libmeetos_la_SOURCES=   \
     $(top_srcdir)/src/meetos/src/core.cpp   \
     $(top_srcdir)/src/meetos/src/epoll.cpp  \
     $(top_srcdir)/src/meetos/src/socket.cpp
#需要引用的动态库文件
EXTRA_DIST =  $(top_srcdir)/src/meetos/include/*
LIBS +=  -g -O0 -lm
