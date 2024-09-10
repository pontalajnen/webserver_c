#include <sys/socket.h>

void main() {
    int socket_fd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in addr = {
        AF_INET, 
        0x901f, 
        0 
    };

    int bind_int = bind(socket_fd, &addr, sizeof(addr));

    listen(socket_fd, 10);

    accept(socket_fd, 0, 0);

}