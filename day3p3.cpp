#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b \n");
	scanf("%d %d",&a,&b);
	printf("\nBitwise AND operator: a&b=%d",a&b);
	printf("\nBitwise OR operator : a|b=%d",a|b);
	printf("\nBitwise XOR operator: a^b=%d",a^b);
	printf("\nLeft shift operator : a<<1=%d",a<<1);    //left shift by 1 gives the number multiplied by 2
	printf("\nRight shift operator: b>>1=%d",b>>1);   //right shift by 1 gives the number multiplied by 2
	
}
