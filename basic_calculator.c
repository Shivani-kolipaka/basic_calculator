#include <stdio.h>
void add();
void sub();
void mul();
void div();
int main()
{
    int a,b;
   while(1)
{
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n\n");
    printf("Enter your choice\n");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:add();
        break;
        
        case 2:sub();
        break;
        
        case 3:mul();
        break;
        
        case 4:div();
        break;
        
        case 5:
        printf("*****");
        return 0;
        
        default:
        printf("***\n");
        
    }
}
return 0;
}
void add()
{int n,m,p;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&m,&n);
    p=m+n;
    printf("Sum=%d\n\n",p);
}
void sub()
{
    int a,b,c;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("Sub=%d\n\n",c);
}
void div()
{
    int a,b,c;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("Division=%d\n\n",c);
}
void mul()
{
    int a,b,c;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("Multiplication=%d\n\n",c);
}

