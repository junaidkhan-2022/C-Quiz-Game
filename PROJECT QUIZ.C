#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void questions();
void ptable();
void help();
int  score=0;
int total=50;

int main()
{
	int option;
	
	printf("\t\t\t\t\t\t\tTULA'S INSTITUTE DEHRADUN\n\n");
	printf("\t\t\t\t\t\t\t   C PROGRAM QUIZ GAME\n");
	printf("\n\t\t\t\t\t\t  ___________________________________");
	printf("\n\t\t\t\t\t\t\t        WELCOME");
	printf("\n\t\t\t\t\t\t\t          TO");
	printf("\n\t\t\t\t\t\t\t        THE GAME");
	printf("\n\t\t\t\t\t\t  ___________________________________");
	printf("\n\t\t\t\t\t\t  ___________________________________");
	printf("\n\t\t\t\t\t\t\t   TEST  YOUR  IQ !!!!!");
	printf("\n\t\t\t\t\t\t  ___________________________________");
	printf("\n\t\t\t\t\t\t  ___________________________________\n\n\n\n");
	
	while(1)
	{
		
		printf("\n\t\t\t\t\t\t\t1 >> Let's start the quiz ");
		printf("\n\t\t\t\t\t\t\t2 >> Help");
		printf("\n\t\t\t\t\t\t\t3 >> Quit");
		printf("\n\n\t\t\t\t\t\t\tEnter your choice [1/2/3] = ");
		scanf("%d",&option);
		system("cls");
		
		switch(option)
		{
			case 1:
				questions();
				break;
				
			case 2:
				help();
				break;
				
			case 3:
				return 0;
				
			default:
				printf("\n\n\t\t\t\tYou enter the wrong choice :: Choose the right choice!!!\n");
		}
	}
}

void help()
{
	printf("\n\t\t\t\t\t\t  ___________________________________");
	printf("\n\t\t\t\t\t\t\t\tHELP BOX \n");
	printf("\t\t\t\t\t\t  ___________________________________");
	printf("\n\t\t\t\tYOU WILL GAIN  '5' POINTS IF THE ANSWER OF ONE QUESTION IS CORRECT:::\n");
	printf("\n\t\t\t\tYOU WILL LOOSE '2'  POINTS IF THE ANSWER OF ONE QUESTION IS WRONG:::\n");
	printf("\n\t\t\t\tTHE GAME CONTAINS TOTAL 10 QUESTIONS:::\n");
	printf("\n\t\t\t\tEACH QUESTION CONTAINS 4 OPTION IN IT:::\n");
	printf("\n\t\t\t\tTHERE ARE TOTAL '50' POINTS IN ALL QUIZES:::\n\n\n\n\n");
}

void questions()
{
	int ans;
	char first_name[20];
	char last_name[20];
    system("cls");
    printf("\t\t\t\t\t\t\t___________________________________\n");
	printf("\t\t\t\t\t\t\t\tREGISTER YOUR NAME : \n");
	printf("\t\t\t\t\t\t\t___________________________________\n");
	printf("\n\n\tEnter your first name = ");
	scanf("%s",&first_name);
	printf("\tEnter your last name = ");
	scanf("%s",&last_name);
	system("cls");
	printf("\n\t\t\t\t\t\t  Welcome %s %s to C Program Quiz Game",first_name,last_name);
	printf("\n\n\t\t\t\t\t\t\t  ALL THE BEST !!!");
	printf("\n\n\t\t\t\t\t\t     THERE ARE YOUR QUESTIONS :\n\n\n\n\n");
	
	printf("(i).Who is the developer of 'C' language ?\n");
	printf(" 1.Dennis Ritchie \t 2.Issac Newton \n 3.Van Rossum \t\t 4.Robert Hook");
	printf("\n\n >>Choose the correct option [1/2/3/4] = ");
	scanf("%d",&ans);
	
	if(ans==1)
	{
		printf("\n Congratulation correct answer\n");
		score=score+5;
		printf(">> 5 Point will be increased");
		printf("\n Current point is = %d\n",score);
		printf("\n__________________________________________________________________\n");
	}
	else
	{
	    printf("\n\t\t WRONG ANSWER\n");
		printf("\n Correct Answer is :- Dennis Ritchie\n");
		score=score-2;
		printf(">>2 point will be decreased");
		printf("\n Current point is = %d",score);
	    printf("\n__________________________________________________________________\n");
	}
    
    printf("\n\n(ii).When was 'C' language invented ?\n");
	printf(" 1.1970 \t 2.1972 \n 3.1975 \t 4.1968");
	printf("\n\n >>Choose the correct option [1/2/3/4] = ");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("\n Congratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\n Current point is = %d\n",score);
	    printf("\n__________________________________________________________________\n");	
	}
	else
	{
		printf("\n\t\t WRONG ANSWER\n");
		printf("\n Correct Answer is :- 1972\n");
		score=score-2;
		printf(">> 2 point will be decreased");
		printf("\n Current point is = %d",score);
		printf("\n__________________________________________________________________\n");
	}
    
    printf("\n\n(iii).The C-preprocessors are specified with________symbol ? \n");
	printf(" 1.* \t 2.$ \n 3.# \t 4.&");
	printf("\n\n >>Choose the correct option [1/2/3/4] = ");
	scanf("%d",&ans);
	
	if(ans==3)
	{
		printf("\n Congratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\n Current point is = %d\n",score);
		printf("\n__________________________________________________________________\n");
	}
	else
	{
		printf("\n\t\t WRONG ANSWER\n");
		printf("\n Correct Answer is :- #\n");
		score=score-2;
		printf(">> 2 point will be decreased");
		printf("\n Current point is = %d",score);
		printf("\n__________________________________________________________________\n");
	}
    
	printf("\n\n(iv).Which keyword can be used for coming out of recursion ? \n");
	printf(" 1.exit \t 2.break \n 3.return \t 4.all of these");
	printf("\n\n >>Choose the correct option [1/2/3/4] = ");
	scanf("%d",&ans);
	
	if(ans==3)
	{
		printf("\n Congratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\n Current point is = %d\n",score);
		printf("\n__________________________________________________________________\n");
	}
	else
	{
		printf("\n\t\t WRONG ANSWER\n");
		printf("\n Correct Answer is :- return\n");
		score=score-2;
		printf(">> 2 point will be decreased");
		printf("\n Current point is = %d",score);
		printf("\n__________________________________________________________________\n");
	}		
	
	printf("\n\n(v).What is the value of an array element which is not initialized ? \n");
	printf(" 1.1 \t\t\t 2.Depends on storage classes \n 3.by Default 0 \t 4.Predefined by the compiler");
	printf("\n\n >>Choose the correct option [1/2/3/4] = ");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\n Current point is = %d\n",score);
		printf("\n__________________________________________________________________\n");
	}
	else
	{
		printf("\n\t\t WRONG ANSWER\n");
		printf("\n Correct Answer is :- Depends on storage classes\n");
		score=score-2;
		printf(">> 2 point will be decreased");
	    printf("\n Current point is = %d",score);
	    printf("\n__________________________________________________________________\n");
	}
	printf("\n\n(vi).An uninitialized pointer in C is called ? \n");
	printf(" 1.Empty pointer \t 2.Void pointer \n 3.Wild pointer \t 4.Invalid pointer");
	printf("\n\n >>Choose the correct  option [1/2/3/4] = ");
	scanf("%d",&ans);
	
	if(ans==3)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\n Current point is = %d\n",score);
		printf("\n__________________________________________________________________\n");
	}
	else
	{
		printf("\n\t\t WRONG ANSWER\n");
		printf("\n Correct Answer is :- Wild pointer\n");
		score=score-2;
		printf(">> 2 point will be decreased");
		printf("\n Current point is = %d",score);
		printf("\n__________________________________________________________________\n");
	}
    printf("\n\n(vii).Library function pow() belongs to which header file ? \n");
	printf(" 1.calcus.h\t 2.square.h \n 3.arithmetic.h\t 4.math.h");
	printf("\n\n >>Choose the correct option [1/2/3/4] = ");
	scanf("%d",&ans);
	
	if(ans==4)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\n Current point is = %d\n",score);
		printf("\n__________________________________________________________________\n");
	}
	else
	{
		printf("\n\t\t WRONG ANSWER\n");
		printf("\n Correct Answer is :- math.h\n");
		score=score-2;
		printf(">> 2 point will be decreased");
		printf("\n Current point is = %d",score);
		printf("\n__________________________________________________________________\n");
	}
    printf("\n\n(viii).The scope of a function is limited to ? \n");
	printf(" 1.Whole file\t\t 2.Directory \n 3.Only function\t 4.Current block");
	printf("\n\n >>Choose the correct option [1/2/3/4] = ");
	scanf("%d",&ans);
	
	if(ans==1)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\n Current point is = %d\n",score);
		printf("\n__________________________________________________________________\n");
	}
	else
	{
		printf("\n\t\t WRONG ANSWER\n");
		printf("\n Correct Answer is :- Whole file\n");
		score=score-2;
		printf(">> 2 point will be decreased");
		printf("\n Current point is = %d",score);
		printf("\n__________________________________________________________________\n");
	}
 printf("\n\n(ix).Point out the wrong statement about malloc() ? \n");
	printf(" 1.Allocated memory has undefined value\t\t\t 2.It returns pointer to allocated space \n 3.Pointer is NULL if memory is not allocated\t\t 4.It does not lead to memory leak if memory is not deallocated");
	printf("\n\n >>Choose the correct option [1/2/3/4] = ");
	scanf("%d",&ans);
	
	if(ans==4)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\n Current point is = %d\n",score);
		printf("\n__________________________________________________________________\n");
	}
	else
	{
		printf("\n\t\t WRONG ANSWER\n");
		printf("\n Correct Answer is :- It does not lead to memory leak if memory is not deallocated\n");
		score=score-2;
		printf(">> 2 point will be decreased");
		printf("\n Current point is = %d",score);
		printf("\n__________________________________________________________________\n");
	}
 printf("\n\n(x).The size of union is _______ ? \n");
	printf(" 1.Predefined by the compiler\t 2.Equal to size of largest datatype \n 3.Sum of sizes of all member\t 4.None of these");
	printf("\n\n >>Choose the correct option [1/2/3/4] = ");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("\nCongratulation correct answer\n");
		score=score+5;
		printf(">> 5 point will be increased");
		printf("\n Current point is = %d\n",score);
		printf("\n__________________________________________________________________\n");
	}
	else
	{
	    printf("\n\t\t WRONG ANSWER\n");
     	printf("\n Correct Answer is :- Equal to the size of largest datatype\n");
		score=score-2;
		printf(">> 2 point will be decreased");
		printf("\n Current point is = %d\n",score);
		printf("\n__________________________________________________________________\n");
	}
	
	ptable();
}
	void ptable()
	{
		printf("\n\t\t\t\t\t\t\t\tPOINTS TABLE\t\n");
		printf(" \t\t\t\t\t\t\t  ________________________\n");
		printf(" \t\t\t\t\t\t\t  You got %d  point in 50 \n ",score);
		printf(" \t\t\t\t\t\t\t  _________________________\n\n");
		printf("\n\n\t\t\t\t\t\t\t\tPLAY AGAIN!!!\n");
	}
