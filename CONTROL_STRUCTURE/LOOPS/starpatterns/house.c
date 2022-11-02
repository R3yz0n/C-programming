#include <stdio.h>
void main(){
    int n=15;
   for (int i=1 ; i<=n  ; i++)
   {
       for (int k=n ; k>=i ; k--)
       {
           printf(" ");
           
           
       }
       for (int j=1 ; j<=i; j++)
       {
           printf("* ");
           
           
       }
       printf("\n");
       
       if(i==n)
       {
           for(int j=0;j<2;j++)
   {
   for(int i=0;i<=n*2+1;i++)
   {
       printf("=");
       
   }
   printf("\n");
   
   }
      
       }
   }
       
       
   
   
   for (int p=13;p>1;p--)
    {
        
        for (int j=0 ; j<2 ; j++)
        {
            printf("#");
             for (int k=0 ; k<n*2 ; k++)
                  {
                        printf(" ");
            
            
                 }
            
       
            
        }
        printf("\n");
       
     
      
     
       
       
        
     if(p==2)
     for(int i=0;i<=n*2+1;i++)
     {
         
         
             printf("*");
         
         
         
         
         
         
     }   
    }
    }






