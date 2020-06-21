#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
	int hrs,min,sec;
	printf("Enter hours mins sec\n");
	scanf("%d %d %d\n",&hrs,&min,&sec);
	printf("\t\t\t\tCOUNTDOWN TIMER\n");
	printf("***********************************\n");
	while(1)
	{
		clrsc();
		printf("%d : %d : %d",hrs,min,sec);
		sleep(1);
		sce--;
		if(sec==0 && min!=0)
		{
			sec=59;
			min--;
		}
		if(sec==0 && min==0)
		{
			hrs--;
			min=59;
			sec=59;
			
		}
		if(hrs==0 && min==0 && sec==0)
		{
			return 0;
		}
	}
}
