// #include <stdio.h>

// long double factorial(double n){
// 	long double ans=1;
// 	int i;
// 	for ( i = 1; i <= n; i++){
// 		ans *= i;
// 	}
// 	return ans;
// }

// double main(){
// 	int t;
// 	for (t = 1; t <= 100;t++){
// 		printf("%Lf\n", factorial(t));
// 	}
// 	return 0;
// }
//-------------------------------------------------------------------------------------------

#include <stdio.h>
#define MAX 1000000
void factorial_of(int);
void multiply(int);
int length = 0;
int fact[MAX];

int main(){
	int num;

	printf("Enter the integer : ");
	scanf("%d",&num);

	fact[0]=1;

	factorial_of(num);

	printf("Factorial is : ");
	for (int i=length; i>=0; i--){
		printf("%d",fact[i]);
	}
	return 0;
}
void factorial_of(int num){
	for(int i=2; i<=num; i++){
		multiply(i);
	}
}
void multiply(int num){
	long i, r=0;
	int arr[MAX];
	for(i=0; i<=length; i++){
		printf("lenght%d\n",length );
		arr[i]=fact[i];
	}
	for (i = 0; i <=length; i++){
		fact[i]=(arr[i]*num+r)%10;
		printf("fact %d\n",fact[i] );
		r=(arr[i]*num+r)/10;
		printf("r_Value%ld\n", r);
	}
	if(r!=0){
		while(r!=0){
			fact[i]=r%10;
			r=r/10;
			i++;
		}
	}
	length = i-1;
}

//----------------------------------------------------------------------------------------------






