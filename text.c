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

// #include <stdio.h>

// int main(){
// 	int a,b,t,x,y,gcd,lcm;
// 	printf("Enter two integers\n");
// 	scanf("%d%d",&x,&y);
// 	a=x;
// 	b=y;
// 	while(b!=0){
// 		t=b;
// 		b=a%b;
// 		a=t;
// 	}
// 	gcd = a;
// 	lcm = (x*y)/gcd;
// 	printf("GCD of %d and %d = %d\n",x,y,gcd);
// 	printf("LCM of %d and %d = %d\n",x,y,lcm);
// 	return 0;
// }

//--------- Recursion Method of GCD & LCM ----------------

// #include <stdio.h>

// long gcd(long,long);

// int main(){
// 	int a,b,hcf,lcm;
// 	printf("Enter the integers\n");
// 	scanf("%d%d",&a,&b);
// 	hcf = gcd(a,b);
// 	lcm = (a*b)/hcf;
// 	printf("GCD of %d and %d = %d\n",a,b,hcf);
// 	printf("LCM of %d and %d = %d\n",a,b,lcm);
// 	return 0;
// }

// long gcd(long a, long b){
// 	if(b == 0){
// 		return a;
// 	}
// 	else{
// 		return gcd(b,a%b);
// 	}
// }
//----------------- using Function ---------------------------

#include <stdio.h>

long gcd(long,long);

int main(){
	int a,b,hcf,lcm;
	printf("Enter the integers\n");
	scanf("%d%d",&a,&b);
	hcf = gcd(a,b);
	lcm = (a*b)/hcf;
	printf("GCD of %d and %d = %d\n",a,b,hcf);
	printf("LCM of %d and %d = %d\n",a,b,lcm);
	return 0;
}

long gcd(long a, long b){
	if(a==0){
		return b;
	}
	while(b!=0){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	return a;
}























