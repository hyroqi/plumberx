#include "../includes/pipex.h"

void    dupnclose(int in, int out)
{
    dup2(in, out);
    close(in);
}