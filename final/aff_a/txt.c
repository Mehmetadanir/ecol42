#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    i = 0;
    if(ac != 1)
    {
        while(av[1][i] != '\0')
        {
            if(av[1][i] == 'a')
            {
                write(1, "a", 1);
                break;
            }
            else if(av[1][i] != 'a')
            {
                if(av[1][i+1] == '\0')
                {
                    write(1,"a",1);
                    break;
                }
            }
            i++;
        }
        write(1, "\n", 1);
    }
    else
    {
        write(1, "a\n", 2);
    }
}