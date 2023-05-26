ACLOCAL_AMFLAGS     = -I m4
AUTOMAKE_OPTIONS=foreign
AM_CPPFLAGS=\
    -I $(top_srcdir)/src/user/include/

sbin_PROGRAMS=eightTrigrams
eightTrigrams_SOURCES=\
     $(top_srcdir)/src/user/src/main.cpp
    

eightTrigrams_LDADD=\
    $(top_builddir)/src/taoism/libtaoism.la \
    $(FLIBS) 
EXTRA_DIST	 =  $(top_srcdir)/src/user/include/*
#需要引用的动态库文件
#   sudo apt-get install openssl libssl-dev
#   sudo apt-get install automake make libevent-dev openssl-devel
LIBS += -g -O2 -Wall -pedantic   -lm -levent -lssl -lcrypto -lpthread -levent_openssl
