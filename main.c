#include <stdio.h>
#include <stdio.h>
#include "my_mat.h"

int main()
{
   int mat[10][10];
   
    char user;
    scanf("%c", &user);
    while (user != 'D')
    {
        if (user == 'A')
        {
            func1(mat);
            scanf("%c", &user);
        }
        else if (user == 'B')
        {
            func2(mat);
            scanf("%c", &user);
        }
        else if (user == 'C')
        {
            func3(mat);
            scanf("%c", &user);
        }

        return 0;
    }
}