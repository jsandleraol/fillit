#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFF_SIZE 545 
# define FILLIT_MACRO int x; int y; int i; int count; t_etris *coord; t_list *list; char letter;


typedef struct      te_list
{
    int             x_coord[4];
    int             y_coord[4];
    char            value;
    struct te_list  *next;
}                   t_etris;

int                 is_block(char *buff);
int                 valid(char *buff);
t_list              *checker(char *file);
t_list              *make_list(char *buff);
t_etris             *find_coord(t_etris *coord, char *buff);

#endif