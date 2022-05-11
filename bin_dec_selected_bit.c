#include <stdio.h>

int main()
{
   int i,n=7,c=0,r=1,j,r1=0;
    for(i=1;i<3;i++)
    { 
        if(n&(1<<i))
        {
            for(j=0;j<c;j++)
            r=r*2;
            
            c++;
            r1+=1*r;
            r=1;
        }
        else
        c++;
        
    }
    printf("result is %d\n",r1);


    return 0;
}

