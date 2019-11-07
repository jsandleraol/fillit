#include "fillit.h"
#include <stdio.h>

int main(int ac, char **av)   
{
    t_list *tetrilist;

    if (ac != 2)
    {
        ft_putstr("Usage: ./fillit source_file\n");
        return (1);
    }
    if ((tetrilist = checker(av[1])) == NULL)
    {
        ft_putstr("error\n");
        return (1);
    }
    while (tetrilist)
        {
            printf("%d", tetrilist->content);
            tetrilist = tetrilist->next;
        }
    //make_map()
    //solver(tetrilist);
    return (0);
}