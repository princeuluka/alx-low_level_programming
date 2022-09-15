#include<stdio.h>
 
int largestprimefactor(unsigned long a)
{
    int i =2 ,largeprimefactor = 2;
     
    while(a!=1)
    {
        if(a%i==0)
        {
            while(a%i==0)
            {
                a = a/i;
                 
                printf("%d ",i);
                 
                if(i>largeprimefactor)
                {
                    largeprimefactor = i;
                }
            }
        } 
         
        i++;
    }
     
    return largeprimefactor;
}
 
main()
{
    unsigned long inputnumber;
     
    printf("Enter a number : ");
    scanf("%d",&inputnumber);
     
    printf("\nThe largest prime factor of %d is %d",inputnumber,largestprimefactor(inputnumber));
}
