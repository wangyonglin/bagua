AUTOMAKE_OPTIONS=foreign
lib_LTLIBRARIES=libtaoism.la
AM_CPPFLAGS=-I $(top_srcdir)/src/taoism/include/

libtaoism_la_SOURCES=   \
     $(top_srcdir)/src/taoism/src/core.cpp   \
     $(top_srcdir)/src/taoism/src/epoll.cpp  \
     $(top_srcdir)/src/taoism/src/socket.cpp
#需要引用的动态库文件
EXTRA_DIST =  $(top_srcdir)/src/taoism/include/*
LIBS +=  -g -O0 -lm
