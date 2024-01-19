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

	fp=fopen("F:\\C language Saurabh 5th October 2021\\chap 10 file handling\\tejas1.txt","a");

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
/*
strcat() is a predefined function in string.h header file. strcat() means string concatenation. strcat(str,"\n") will join or concatenate new line character "\n" to end of string value of str variable and store new string value into str variable. So because of the above statement we are writing every new string value on a new line in file. 

*/
		fputs(str,fp);

	}	
/*
fputs() is a predefined function in stdio.h header file. fputs(str,fp) will write string value of str into current location in the file which is pointed to by fp. After writing string value fp will automatically be moved forward to next location in the file where the next string value must be written.

*/
	fclose(fp);		

}



void read1()
{
	char str[500];

	fp=fopen("F:\\C language Saurabh 5th October 2021\\chap 10 file handling\\tejas1.txt","r");

	printf("\n The lines stored in the file are:");
	while(fgets(str,499,fp)!=NULL)
	{
/*
If fgets() reaches end of the file then it returns NULL value. If fgets() has not yet reached end of the file, it will not return NULL value and then the fgets() will read the string value from current location in the file into str variable and we are displaying value of str variable on screen.

*/	

		printf("\n %s",str);
	}	
/*
fgets() is a predefined function in stdio.h header file. fgets(str,499,fp) will read the entire string value from the current location in the file pointed to by the fp variable and the 2nd argument which we have passed to fgets() function, represents the maximum no. of characters which can be read at once from the current location in the file pointed to by fp. Because size of str variable was 500 characters, so we mentioned 2nd argument to fgets() as 499. After fgets() reads the string value from the current location in the file and stores it insode str variable, then the fp pointer variable will automatically move to the next location in the file where the next string value is to be read.

If fgets() function reaches the end of the file then NULL character is returned by fgets() function after all lines have been read from the file. 

*/
		
	fclose(fp);
}