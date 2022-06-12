/*twenty five number are entered from the keyboard into a array.write a program to find out 
how many of them are positive,how man are negative ,how many are even and how many are odd*/ 

#include<stdio.h>
int main(){
    int arr[25],pos=0,neg=0,even=0,odd=0;
    for (int i = 0; i < 25; i++)
    {
    printf(" enter the number you want");
    scanf("%d",&arr[i]);}

    for (int i = 0; i <25; i++)
    {
       if (arr[i]>0)
       {
        pos++;
       }
        if (arr[i<0])
        {
         neg++;   /* code */
        }
        if (arr[i]%2==0)
        {
            even++;/* code */
        }
        else
        {
           odd++;
        }
        
    }
    printf("\n Data cintain %d postive,%d negative,%d even and %d odd",pos,neg,even,odd);
    return 0;
}
