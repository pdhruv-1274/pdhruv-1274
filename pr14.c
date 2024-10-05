#include <stdio.h>

int main()
{
    int num[5];
    int i,a,d,h;
    int totalp=0,totaln=0,totale=0,totalo=0;
    
    for(i=1; i<=5; i++)
    {
        printf("Enter any %d number :",i);
        scanf("%d", &num[i]);
    }
    
    printf("\n");
   
   for(a=1; a<=5; a++)
   {
    printf("%d\t",num[a]);
   }
   
   for(d=1; d<=5; d++)
   {
       if(num[d]>0)
       {
           printf("%d is +ve no.\n",num[d]);
           totalp++;
       }
       
       else if(num[d]<0)
       {
           printf("%d is -ve no.\n",num[d]);
           totaln++;
       }
   }
       
       
   for(h=1; h<=5; h++)
   {
       if(num[h]%2==0)
       {
           printf("%d is even no.\n",num[h]);
           totale++;
       }
       
       else if(num[h]%2!=0)
       {
           printf("%d is odd no.\n",num[h]);
           totalo++;
       }
   }
     
     printf("There are Total %d +ve no.\n",totalp);
     printf("There are Total %d -ve no.\n",totaln);
     printf("There are Total %d even no.\n",totale);
     printf("There are Total %d odd no.\n",totalo);
  
}