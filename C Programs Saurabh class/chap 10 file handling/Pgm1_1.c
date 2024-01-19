//pgm to read and write data character by character into file

#include<stdio.h>

FILE *fp;

void write1();
void read1();

main()
{
	write1();	
	read1();
}

void write1()
{
	char ch;

	fp=fopen("saurabh1.txt","a");


	printf("\n Please enter characters to be stored in the file. Type  $ symbol to exit:");

	while(1)
	{
		printf("\n Enter character:");
		fflush(stdin);
		scanf("%c",&ch);

		if(ch=='$')
		{
			break;
		}

		fputc(ch,fp);

	}
	fclose(fp);

}

void read1()
{
	char ch;

	fp=fopen("saurabh1.txt","r");

	if(fp==NULL)
	{
		printf("\n The file couldnot be opened successfully in read mode");

	}

	else
	{
		printf("\n The characters currently stored in the file are:");
		while(1)
		{
			ch=fgetc(fp);

			if(ch==EOF)
			{
				break;

			}

			printf("%c",ch);

		}
		fclose(fp);
	}
}









