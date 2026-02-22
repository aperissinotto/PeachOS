#include "peachos.h"
#include "stdlib.h"
#include "stdio.h"

int main(int argc, char** argv)
{
    print("Hello how are you!\n");
    printf("My age is %i\n", 98);    

    void* ptr = malloc(512);
    if (ptr)
    {
        print("Malloc is OK!\n");    
    }

    free(ptr);

    char buf[1024];
    peachos_terminal_readline(buf, sizeof(buf), true);

    print(buf);

    while(1) {}
    
    return 0;
}