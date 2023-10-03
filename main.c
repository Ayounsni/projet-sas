#include <stdio.h>
#include <stdlib.h>





int main()
{

    int tmp;
    int taille=10;
    int T[] ={3,2,1,8,0,7,9,6,2};
    int i,j;
    for (i=0;i<taille-1;i++){
        for (j=i+1;i<taille;j++){
            if(T[i]<T[j])
                tmp = T[i];
               T[i]= T[j];
               T[j]= tmp;
        }
    }
    for (i=0;i<taille;i++)
    printf("%d ",T[i]);



    return 0;
}
