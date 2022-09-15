#include <stdio.h>
#include <math.h>

void add ();
void sub ();
void mul ();
void div ();
void nsqr ();
void factorial ();
void nroot();
void root();
void isPrime();
void square();

int main (void)
{
        int s;
        int run = 1;
        while(run)
        {
            printf("\nChoose any option from below : \n");
            printf("Press 1 : Addition                  Press 2 : Subtraction\n");
            printf("Press 3 : Multiplication            Press 4 : Division\n");
            printf("Press 5 : Root of a Number          Press 6 : Nth root of a Number\n");
            printf("Press 7 : Square of a Number        Press 8 : Check Prime\n");
            printf("Press 9 : Factorial of a Number\n");
            printf("\nPress any other number to exit\n");

            printf("\nChoose a number : ");
            scanf("%d", &s);

            switch (s){
        case 1:
                add();
                break;
        case 2:
                sub();
                break;
        case 3:
                mul();
                break;
        case 4:
                div();
                break;
        case 5:
                root();
                break;
        case 6:
                nroot();
                break;
        case 7:
                square();
                break;
        case 8:
                isPrime();
                break;
        case 9:
                factorial();
                break;

        default:
            run = 0;
        }

        }
        printf("Thanks for using my calculator 😕)\n");
}

void add ()
{
        int a, b;

        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a + b);
}

void sub ()
{
        int a, b;

        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n" , a - b);
}

void mul ()
{
        int a, b;

        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a * b);
}

void div ()
{
        float a, b;

        printf("Input two numbers : ");
        scanf("%f %f", &a,&b);

        while(b==0)
        {
            printf("As the second number is 0, the division is not possible.\n");
            printf("Give another second number : ");
            scanf("%d",&b);

        }

        printf("Result = %f\n", a / b);
}

void nsqr (){
        int exp, base, i;
        int result = 1;

        printf("Input base : ");
        scanf("%d",&base);
        printf("Input exp : ");
        scanf("%d",&exp);

        for (i = 0; i < exp; ++i)
                result *= base;

        printf("%d^%d = %d\n",
                    base,exp,result);
        printf("\n");
}

void factorial ()
{
        int a, b;
        int sum = 1;

        printf("Input a number : ");
        scanf("%d", &b);

        for (a = 1; a <= b; ++a)
                    sum *= a;

        printf("%d!=%d\n",b,sum);
        printf("\n");
}

void isPrime()
{
    int is = 1;
    int data;
    printf("\nGive the number : ");
    scanf("%d",&data);

    for(int i=2;i*i<data;i++){
        if(data % i == 0){
            is = 0;
            break;
        }
    }
    if(is)
        printf("The number is PRIME !!");
    else
        printf("The number is NOT PRIME !!");
    printf("\n");
}

void square()
{
    int data;
    printf("\nGive the number : ");
    scanf("%d",&data);
    long result = data*data;
    printf("The square of the number %d is %ld" ,data, result);
    printf("\n");
}

void nroot()
{
    int data,n;
    printf("\nGive the BASE number : ");
    scanf("%d",&data);

    printf("\nGive the POWER number : ");
    scanf("%d",&n);

    float result = pow(data, 1.0/n);
    printf("The %dth root of number %d is %f",n, data, result);
    printf("\n");
}
void root()
{
    int data;
    printf("\nGive the number : ");
    scanf("%d",&data);

    float result = sqrt(data);
    printf("The square root of the number %d is %f",data, result);
    printf("\n");
}
