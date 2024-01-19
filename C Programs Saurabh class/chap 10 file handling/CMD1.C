/*
Command line arguments

*/

#include<stdio.h>

main(int argc,char *argv[])
{
	
   int i;

   printf("\n THE COMMAND LINE INPUTS ARE:");

   for(i=0;i<=argc-1;i++)
   {
	printf("\n%s",argv[i]);
   }

}


/*
When we define the main() function in the C pgm we can mention 2 formal parameters in the title of main() function definition. The 1st formal parameter of main() function definition is an int variable and 2nd parameter is a 1d array variable of type char *. So we can use any variable names instead of argc and argv but their types must be same as what we have mentioned above.

So we can pass multiple string values into argv parameter.  So each element of argv will be a string value.

Here we will pass inputs into the main() function of this pgm before pgm begins execution. These inputs are called command line arguments. 

To pass command line arguments, click on Run-> arguments-> type command line inputs and 1 space between 2 consecutive inputs and if a single input contains space then we place it inside double quotes. The name of the .exe file of the pgm is automatically stored by C compiler as 1st element in argv parameter. Whichever command line inputs w epass are stored from index 1 i.e. 2nd element onwards in argv array.

The compiler will automatically store no. of command line input arguments apssed to the function into argc including name of the .exe file of the pgm.


*/

