ACLOCAL_AMFLAGS     = -I m4
AUTOMAKE_OPTIONS=foreign
AM_CPPFLAGS=\
    -I $(top_srcdir)/src/user/include/

sbin_PROGRAMS=meet
meet_SOURCES=\
     $(top_srcdir)/src/user/src/main.cpp
    

meet_LDADD=\
    $(top_builddir)/src/meetos/libmeetos.la \
    $(FLIBS) 
EXTRA_DIST	 =  $(top_srcdir)/src/user/include/*
#需要引用的动态库文件
LIBS += -g -O2 -Wall -pedantic   -lm -levent -lssl -lcrypto -lpthread -levent_openssl -lcurl
