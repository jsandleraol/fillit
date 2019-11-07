#include "fillit.h"

t_list     *make_list(char *buff)
{
    FILLIT_MACRO;
    t_list *list;

    x = 0;
    list = NULL;
    if (!(coord = (t_etris *)ft_memalloc(sizeof(*coord))))
        return (NULL);
    while (buff[x])
    {
        i = 0;
        y = 0;
        count = 0;
        while (i++ < 21)
        {
            if (buff[x] == '#')
            {
                coord->x_coord[count] = x % 5;
                coord->y_coord[count++] = y;
            }
            if (i % 5 == 0)
                y++;
            x++;
        }
        ft_lstadd(&list, ft_lstnew(coord, sizeof(t_etris)));
    }
    return (list);
}