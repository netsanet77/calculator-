#include <stdio.h>
int main(void)
{
	int a;
	int b;
	char o;
	printf("Enter a and b");
	scanf("%d%d", &a);
	printf("Enter the operation");
	scanf("%c", &o);
	switch(o) {
		case '+':
			printf("a + b = %d", a+b);
			break;
		case '-':
			printf("a - b = %d", a-b);
                        break;
		case '*':
			printf("a * b = %d", a*b);
                        break;
		case '/':
			printf("a / b = %d", a/b);
			break;
		case '%':
			printf("a / b = %d", a%b);
			break;
		default:
			printf("
	}

}

