// #include <stdio.h>

// int main(void)
// {
// 	printf("Hello World\n");
// 	return 0;
// }

// -----------------------------------------

// #include <stdio.h>

// int main()
// {
// 	int a;
// 	printf("Enter an int number\n");
// 	scanf("%d",&a);

// 	printf("Int that you entered is %d\n", a);
// 	return 0;
// }

// -------------------------------------------------

// #include <stdio.h>

// int main()
// {
// 	char n[100];

// 	printf("Input an integer\n");
// 	scanf("%s",n);

// 	printf("%s",n);
// 	return 0;
// }
//-----------------------------------------------------

#include <stdio.h>

int main(){
	int a,b,t,x,y,gcd,lcm;
	printf("Enter two integers\n");
	scanf("%d%d",&x,&y);
	a=x;
	b=y;
	while(b!=0){
		t=b;
		b=a%b;
		a=t;
	}
	gcd = a;
	lcm = (x*y)/gcd;
	printf("GCD of %d and %d = %d\n",x,y,gcd);
	printf("LCM of %d and %d = %d\n",x,y,lcm);
	return 0;
}



























