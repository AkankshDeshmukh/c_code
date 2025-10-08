
#include<stdio.h>
int main()
{
	//arthmetic op + - * / %
	/*int n1,n2,n3;
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
	n3=n1+n2;
	printf("addition=%d",n3);
	printf("\n substraction:%d",n1-n1);
	printf("\n multipuation:%d",n1*n1);
    printf("\n divistion:%d",n1/n1);
	printf("\n remainder:%d",n1%n1);
				
	*/
	
	
	//assignment op =
	//int n1=2,n2=5,n3;
	//n3=n1*n2/2; //prayoreties right side slowe the experstion
	//printf("%d",n3);
	
	//short hand or compound assignment op
	//+=,-=,*=,/=,%=
	//int a=10,b=5;
	//a+=b; // a= a+b ==a=10+5 15
   //a-=b;  
	//a*=b;
	//a/=b;
	//a%=b;
	//printf("a=%d",a);
	
	
	
	//----relational op-----
	/*< <= > >= == !=
	non zero -true
	zero-false
	int a=20,b=10,c;
	printf("%d",a<b);
	printf("\n%d",a>b);
	printf("\n%d",a<=b);
	printf("\n%d",a>=b);
	printf("\n%d",a==b);
	printf("\n%d",a!=b);
	
	c=a<b+20; //pahile addtion hoil 20+10=30 a<b=true
	printf("c=%d",c);
	*/
	
	//---logical op---
	//&& || !
	
	/*int a=20,b=10,c;
	c=a<b && b<50;
	c=a<b || b<50;
	c=!(a<b && b<50);
	
	//c=a>b && b-20; // non zero 20>10 && 10-20(1) true && true =1
	c=a>b && b-10; //  zero-false 20>10 && 10-10(0) true && false =0
	printf("c=%d",c);
	
	int a=20,b=10,c;
	printf("%d",!a); //false
	*/
	int a=10,b=20,c;
	c=a>b &&  ++a;// a+=10; // aadhi to check karnar ki a>b aahe pan 10>20 he false ahhe so condition false honar to puthe janar nahi
	printf("c=%d\t a=%d",c,a);
	
}
