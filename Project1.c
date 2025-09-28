#include<stdio.h>
#include<math.h>
int main()
{
    while(1){
    int choice;
    printf("---Simple Calculator---\n");
    printf("1)Add\n2)Subtract\n3)Multiply\n4)Divide\n5)Power(a^b)\n6)Modulus\n7)Exit\n");
    printf("\nChoose Between 1 to 7: ");
    scanf("%d",&choice);

    if(choice < 1 || choice >7)
    {
        printf("Invalid, Please input something valid 1 to 7.\n");
        continue;

    }
    if(choice == 7)
    {
        printf("GoodBye.\n");
        break;
    }


    if(choice == 6)
    {
        int a,b;
        printf("Enter Two Numbers: ");
        scanf("%d%d",&a,&b);
        if(b == 0)
           {
               printf("Modulus by zero is not allowed");
           }
    else
           {
               printf(" Result is = %d\n",a%b);

           }
           continue;
    }

    double x,y;
        printf("Enter Two Numbers: ");
        scanf("%lf%lf",&x,&y);

    switch(choice){
      case  1:

        printf(" Result is = %.2lf\n",x+y);
        break;

     case  2:

        printf(" Result is = %.2lf\n",x-y);
        break;

     case  3:

        printf(" Result is = %.2lf\n",x*y);
        break;

      case  4:

        if(y == 0)
        {
            printf("Not Possible.");
        }
        else
        {
        printf(" Result is = %.2lf\n",x/y);
        }
        break;

     case  5:

        printf("Result is = %.2lf\n",pow(x,y));
        break;

    default:

        printf("Please choose 1 to 7.\n");
    }
    }
    return 0;
}
