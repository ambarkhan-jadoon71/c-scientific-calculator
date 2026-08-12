#include<stdio.h>
#include<math.h>
void addition();
void subtraction();
void multiplication();
void division();
void powerfunction();
void squareroot();
void logfunction();
void exponential();
void sine();
void cosine();
void tangent();
void factorial();
int main(){
    int choice;
    do{
        printf("\n==========Scientific Calculator==========\n");
        printf("\n1.Addition\n");
        printf("\n2.Subtraction\n");
        printf("\n3.Multiplication\n");
        printf("\n4.Division\n");
        printf("\n5.Power Function\n");
        printf("\n6.Square Root\n");
        printf("\n7.Log Function\n");
        printf("\n8.Exponential\n");
        printf("\n9.Sine Function\n");
        printf("\n10.Cosine Function\n");
        printf("\n11.Tangent Function\n");
        printf("\n12.Factorial\n");
        printf("\n0.Exit");
        printf("\nChoose an Operation :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            addition();
            break;
            case 2:
            subtraction();
            break;
            case 3:
            multiplication();
            break;
            case 4:
            division();
            break;
            case 5:
            powerfunction();
            break;
            case 6:
            squareroot();
            break;
            case 7:
            logfunction();
            break;
            case 8:
            exponential();
            break;
            case 9:
            sine();
            break;
            case 10: 
            cosine();
            break;
            case 11:
            tangent();
            break;
            case 12: 
            factorial();
            break;
            case 0:
            printf("Exiting...\n");
            break;
            default:
            printf("Invalid choice.\n");
        }
    }while(choice!=0);
    return 0;
}
void addition()
{
    double a,b;
    printf("Enter 2 numbers:");
    scanf("%lf\n",&a);
    scanf("%lf",&b);
    printf("Result = %.2lf",a+b);
}
void subtraction()
{
     double a,b;
    printf("Enter 2 numbers:");
    scanf("%lf%lf",&a,&b);
    printf("Result = %.2lf\n",a-b);
}
void multiplication()
{
     double a,b;
    printf("Enter 2 numbers:");
    scanf("%lf%lf",&a,&b);
    printf("Result = %.2lf\n",a*b);
}
void division()
{
     double a,b;
    printf("Enter 2 numbers:");
    scanf("%lf%lf",&a,&b);
    if(b!=0){
         printf("Result = %.2lf\n",a/b);
    }
    else{
        printf("Error\n");
    }
     
}
void powerfunction()
{
    double a,b;
    printf("Enter 2 numbers:");
    scanf("%lf%lf",&a,&b);
    printf("Result = %.2lf\n",pow(a,b));
}
void squareroot()
{
    double a;
    printf("Enter number:");
    scanf("%lf",&a);
    if(a>0){
        printf("Result = %.2lf\n",sqrt(a));
    }
    else{
        printf("Error! You entered negative value.\n");
    }
}
void logfunction()
{
    double a;
    printf("Enter number:");
    scanf("%lf",&a);
    if(a>0){
        printf("Result = %.2lf\n",log(a));
    }
    else{
        printf("Error: Log undfined!\n");
    }
}
void exponential()
{
     double a;
    printf("Enter number:");
    scanf("%lf",&a);
    printf("Result = %.2lf\n",exp(a));
}
void sine()
{
    double a;
    printf("Enter angle(in radians):");
    scanf("%lf",&a);
    printf("Result = %.2lf\n",sin(a));
}
void cosine()
{
    double a;
    printf("Enter angle(in radians):");
    scanf("%lf",&a);
    printf("Result = %.2lf\n",cos(a));
}
void tangent()
{
    double a;
    printf("Enter angle(iun radians):");
    scanf("%lf",&a);
    printf("Result = %.2lf\n",tan(a));
}
void factorial()
{
    int i,n;
    long long fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0){
        printf("Error!");
    }
    else{
        for(i=1;i<n;i++){
            fact=fact*i;
            printf("Result = %lld\n",fact);
        }
    }
}
