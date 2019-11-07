#include "fillit.h"

int     is_block(char *buff)
{
    FILLIT_MACRO;

    x = 0;
    while (buff[x])
    {
        while (i++ < 21)
        {
            if (buff[x] == '#' && buff[x + 5] == '#')
                count++;
            if (buff[x] == '#' && buff[x - 5] == '#')
                count++;
            if (buff[x] == '#' && buff[x + 1] == '#')
                count++;
            if (buff[x] == '#' && buff[x - 1] == '#')
                count++;
            x++;
        }
        if (count != 6 && count != 8)
            return (1);
        i = 0;
        count = 0;
    }
    return (0);
}

int     valid(char *buff)
{
    FILLIT_MACRO;

    x = 0;
    y = 1;
    while (buff[x])
    {
        i = 0;
        count = 0;
        while (++i < 19)
        {
            if (buff[x] != '\n' && buff[x] != '.' && buff[x] != '#')
                return (1);
            if (buff[x] == '#')
                count++;
            if (buff[x] == '\n' && ((x + y) % 5 != 0))
                return (2);
            x++;
        }
        if (count != 4)
            return (3);
        x += 3;
        y--;
    }
    if (is_block(buff) != 0)
        return (5);
    return (0);
}

t_list     *checker(char *file)
{
    int     fd;
    char    buff[BUFF_SIZE];
    FILLIT_MACRO;

    fd = open(file, O_RDONLY);
    i = read(fd, buff, BUFF_SIZE);
    close(fd);
    if (i > 544 || i < 19 || (i + 2) % 21 != 0)
        return (0);
    if (valid(buff) != 0)
        return (0);
    return (make_list(buff));
}