#if !defined(MEETOS_EPOLL_HPP)
#define MEETOS_EPOLL_HPP
#include <iostream>
#include <sys/epoll.h>
#define EVENT_SIZE 10

class epoll {
public:

    static bool
    epoll_add(int epfd, int conn, uint32_t events);

    static bool
    epoll_delete(int epfd, int conn);
};

#endif