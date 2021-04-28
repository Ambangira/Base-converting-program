
//program to convert from base x to base 10
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int count, temp,base;
	int _numb,numb,deci;
	char num1[500];//saving the initial number as a string to help with looping through...you could also use an array of integers but not yet sure how its done
	
	
	printf("enter a number:");
	scanf("%s",num1);//the number is recorded as a string and therefore the use of %s
	
	printf("enter the base:");
	scanf("%d",&base);//the base as an int
	printf("\n\n");
	
	count = strlen(num1);//obtaining the length of the string to help with the looping
	
	_numb=0;//this is a temporal storage
	
	for(temp=0;temp<count;temp++)
	{
			numb= (num1[(count-1)-temp]) - '0';//converting a charater to its integer equivalent.the purpose of ((count-1)-temp) is to start the loop from the right most value of the number entered
			
			printf("%dx(%d^%d)+",numb,base,temp);
			deci= (numb*pow(base, temp))+_numb;
			//here we do the succesive multiplication to the appropriate powers as well as the addition
			
			_numb= deci;//the value is stored to be added during the next loop
	}
	
	printf("0\n=%d base 10",deci);//print the answer
	
	//the program doesnt work for the numbers with decimal places
	return 0;
}
