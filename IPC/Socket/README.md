## Socket Programming:

	shared physical memory, or message queues, but only processes running on a single machine can use them.

	You can use sockets in much the same way as pipes, but they include communication across a network of computers. 

	A process on one machine can use sockets to communicate with a process on another, which allows for client/server systems that are distributed across a network.

	Sockets may also be used between processes on the same machine.

	+client1.c - a simple local client program.
	+server1.c - a simple local server program.
	+client2.c - a simple network client program.
	+server2.c - a simple network server program.
	+getname.c - a program that gets netork information using gethostbyname.

	+serverudp.c & clientudp.c - udp server and client program.

### Lab Assignment:

server-chat.c & client-chat.c: simple command line Chat Application.


### sockaddr_un vs sockaddr_in:

	Network I/O is more complicated than the normal file I/O. The file I/O operations are on the same system, the file descriptor is sufficient for identifying a file.  
	
	The network I/O operations require both the host and the foreign process information.  Berkeley sockets supports the following communication protocols:

	1. Unix domain (on same Unix system) - useful for named socket
	2. Internet domain (TCP/IP) 	     - useful for unamed socket


## Socket Addresses:

### Named Socket

	header file path: /usr/include/linux/un.h , /usr/include/x86_64-linux-gnu/sys/un.h

	The socket address specifies the family of the communication facility and the communication media.  
	The Unix domain socket address structure sockaddr_un is defined in <sys/un.h>.
          struct sockaddr_un{
                        short                    sun_family;                /*AF_UNIX*/
                        char                     sun_PATH[108];        /*path name */
           };

### unnamed socket (Port Address)

	header file path: /usr/include/netinet/in.h

	The Internet socket address structure sockaddr_in is defined in <netinet/in.h>.
        struct in_addr {
                        u_long                  s_addr;                        /*32-bit net id */
           };

        struct sockaddr_in {
                        short                     sin_family;                   /* AF_INET */
                        u_short                 sin_port;                       /* 16-bit port number */
                        struct in_addr       sin_addr;
                        char                       sin_zero[8];                  /* unused */
           };
