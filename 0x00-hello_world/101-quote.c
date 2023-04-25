#include <unistd.h>

int main() {
    const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(message) - 1;
    ssize_t ret = write(2, message, len);
    if (ret != len) {
        return 1;
    }
    return 1;
}

