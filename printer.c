#include "fillit.h"

void    print_grid(char **grid)
{
    FILLIT_MACRO;
    
    count = ft_strlen(*grid);
    x = 0;
    y = 0;
    while (grid[x][y++] && x < count)
    {
        ft_putchar(grid[x]);
        while (grid[x][y] && x < count)
            ft_putchar(grid[x++][y]);
        if (x == count))
            ft_putchar('\n');
        x = 0;
    }
}