#include<stdio.h>
main()
{
    int x,c=0,i;

    printf("Enter a number: ");
    scanf("%d",&x);

    if(x>0){
        if(x==2 || x==3){
            printf("Prime Number");
          }
        else{
          for(i=2; i<=9; i++){
             if(x%i==0){
               c=1;
               printf("Not Prime Number\n");
               break;
               }

             }
          }

       if(c==0){
        printf("\nprime Number");
       }
    }
}
