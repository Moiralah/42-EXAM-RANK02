#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;

    if (ac == 2)
    {
        i = 0;
        while(av[1][i])
        {
            if(av[1][i] == '_' && 'a' <= av[1][i+1] && av[1][i+1] <= 'z')
            {
                i++;
                av[1][i] =  av[1][i] - 32;
                ft_putchar(av[1][i]);
            }

            else
                ft_putchar(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return(0);
}