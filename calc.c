#include <stdio.h>
int add(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
int dif(int a, int b);
int main(void)
{
	int a;
	int b;
	char o;
	printf("Enter +, /, -, *, %");
        scanf("%c", &o);
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
        scanf("%d", &b);
	switch(o) {
		case '+':
			printf("a + b = %d\n", add(a,b));
			break;
		case '-':
			printf("a - b = %d\n", dif(a,b));
                        break;
		case '*':
			printf("a * b = %d\n", mul(a,b));
                        break;
		case '/':
			if (b!=0){
			printf("a / b = %d\n", div(a,b));
			}
			else 
			{
			printf("the second number must be different from Zero\n");}
			break;
		case '%':
			if (b!=0){
			printf("a / b = %d\n", mod(a,b));
			}
                        else                                              {
                        printf("the second number must be different from Zero\n");}
			break;
		default:
			printf("Invalid operator used\n");
	}
	return (0);
}
int add(int a, int b)
{
return (a+b);
}

int mul(int a, int b)
{
return (a*b);
}
int dif(int a, int b)
{
return (a-b);
}
int div(int a, int b)
{
	if (b!=0)
	{
		return (a/b);
	}
}
int mod(int a, int b)
{
return (a%b);
}

