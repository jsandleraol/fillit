#include "fillit.h"

int    boundaries(t_list tetrilist, int x, int y, int len)
{
    t_etris tetri;
    
    i = 0;
    tetri = (t_etri)(tetrilist->content);
    while (i < 4) 
    {
        if (x + tetri->x_coord[i] < len && y + tetri->y_coord[i] < len)
            return (0);
        if (x + tetri->x_coord[i] == len && y + tetri->y_coord[i] == len)
            return (2);
    }
    return (1);
}

int    solve_fillit(t_list tetrislist, char **grid)
{
    if ((boundaries(tetrilist, x, y, ft_strlen(*grid)))!= 1)
        return (solve_fillit(tetrilist, grid));
    if ((boundaries(tetrilist, x, y, ft_strlen(*grid)))== 2)
        return (0);
    grid[x][y] = '.';
}

char        **grid_size(tetrilist, i);
{
    FILLIT_MACRO;
    char    **grid;
    
    y = -1;
    count = ft_countlist(tetrilist);
    if (!(grid = (char*)ft_memalloc(sizeof(char*) * (((count + i) + 1))))
        return (1);
    while (++y < (count + i))
        if (!(grid[y] = (char**)ft_memalloc(sizeof(char**) * ((count + i)))))
            return (1);
    x = -1;
    while (grid[++x] && x < (count + i))
    {
        grid[x] = '.';
        y = -1;
        while (grid[x][++y])
            grid[x][y] = '.';
    }
    return (grid);
}

ft_solver(t_list tetrilist)
{
    i = 0;
    grid_size(tetrilist, 0);
    while (solve_fillit(tetrislist, grid) != 0)
        grid = grid_size(tetrilist, ++i)
}