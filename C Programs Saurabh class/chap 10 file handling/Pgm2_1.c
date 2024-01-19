/*
pgm to read and write data line by line in file

*/

#include<stdio.h>
#include<string.h>

void write1();
void read1();

FILE *fp;

int main()
{
	write1();
	read1();

	return 0;
}

void write1()
{
	char str[500];

	fp=fopen("tejas1.txt","a");

	printf("\n Enter the lines to be stored in the file. Each line can contain atmost 499 characters. Type exit to quit:");
	while(1)
	{
		fflush(stdin);
		gets(str);
	
		if(strcmp(str,"exit")==0)
		{
			break;

		}
		strcat(str,"\n");		

		fputs(str,fp);

	}	

	fclose(fp);		

}



void read1()
{
	char str[500];

	fp=fopen("tejas1.txt","r");

	printf("\n The lines stored in the file are:");
	while(fgets(str,499,fp)!=NULL)
	{
		printf("\n %s",str);
	}	

		
	fclose(fp);
}