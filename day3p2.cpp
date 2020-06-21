#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name1[20],name2[20],c;
	printf("Enter file name for reading");
	scanf("%s",name1);
	FILE *f1,*f2;
	f1=fopen(name1,"r");
	if(f1==NULL)
	{
		printf("Cannot open file %s",name1);
		return 0;
	}
	printf("Enter filename for writing\n");
	scanf("%s",name2);
	f2=fopen(name2,"w");
	if(f2==NULL)
	{
		printf("Cannot open file %s",name2);
		return 0;
	}
	while((c=fgetc(f1))!=EOF)
	{
		fputc(c,f2);
	}
	printf("Contents copied");
	fclose(f1);
	fclose(f2);
}
