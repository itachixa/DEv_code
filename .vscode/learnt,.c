#include <stdio.h>
int  main(){
    int x,n,solu;
    solu=0;
    printf("la dmension du tableau:");
    scanf("%d",&n);
    printf("le nombre a cherher:");
    scanf("%d",&x);
    for (int i = 1; i < n; i++)
    {
        for (int y = 1; y < n; y++)
        {
            if ((i*y)==x){
                solu=solu+1;
            }
        }
        
    }
    printf("%d\n",solu);

    

}