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
            int ans=func2(mat);
            if (ans == 0)
        {
            printf("False");
            printf("\n");
        }
    else
        {
            printf("True");
            printf("\n");
        }
            scanf("%c", &user);
        }
        else if (user == 'C')
        {
           int ans= func3(mat);
           if (ans == 0)
    {
        printf("-1");
        printf("\n");
    }
    else
    {
        printf("%d", ans);
        printf("\n");
    }
            scanf("%c", &user);
        }
   for(int i=0;i<10;i++){
   for(int b=0;b<10;b++){
      printf(mat[i][b]);
   }
        return 0;
    }
}
