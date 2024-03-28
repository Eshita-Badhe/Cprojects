#include <stdio.h>
#include <conio.h>
#include <string.h>

int quiz1();
int quiz2();
int quiz3();
int score1 = 0, score2 = 0, score3 = 0, score=0;
char answer[2];

struct User {
    char name[20];
    int age;
    int section;
    int m1;
    int m2;
    int m3;
    int total;
    char remark[10];
} user;

void main() {
    clrscr();
    int ch;
    printf("Hello and welcome to the quiz zone\n\n Get ready to test your presence of mind, knowledge and dive into the world of fun and learning \n");

    printf("Enter your Details: \n Name: ");
    scanf("%[^\n]%*c",user.name);
    printf("\n Age: ");
    scanf("%d",&user.age);

    printf("\nSelect the theme for your quiz\n \nBelow are the themes for the quiz \n1) Brain teasers galore a riddle field quiz adventure\n2) linguistic gymnastics the ABC's of brain teasers\n3) Crack the code a beginner C quiz \nType the number of the theme you want to choose!\n\n");

    printf("Enter your choice:\n");
    scanf("%d", &ch);
    switch(ch)
{
case 1:    quiz1();
break;
case 2:    quiz2();
break;
case 3:    quiz3();
break;
default:
{
printf("\nWrong Choice!");
}
}
printf("\n--------------------------------------------------------------------------------");
if(score>5)
{
    printf("\nCERTIFICATE\n------------\n");
    printf("\n \t\t\t\t QUIZ ZONE \n \t\t\t\t ---------\n");
    printf("\nSUCCESSFULLY COMPLETED ");
if(ch==1)
{
printf("\nBrain teasers galore a riddle field quiz adventure\n\n ");
}
else if(ch==2)
{
printf("\nlinguistic gymnastics the ABC's of brain teasers\n\n");
}
else
{
printf("\nCrack the code a beginner C quiz \n\n ");
}
    printf("\n \n Name: %s",user.name );
    printf("\n Age: %d",user.age);
    user.m1=score1;
    printf("\n\n Level1 Score: %d",user.m1);
    user.m2=score2;
    printf("\n Level2 Score: %d",user.m2);
    user.m3=score3;
    printf("\n Level3 Score: %d",user.m3);
    user.total=score;
    printf("\n Total Score: %d",user.total);
if(user.total<=7)
{
strcpy(user.remark,"GOOD");
}
else if(user.total==8)
{
strcpy(user.remark,"VERY GOOD");
}
else if(user.total==9)
{
strcpy(user.remark,"EXECELLENT");
}
else
{
strcpy(user.remark,"ERROR!");
}
printf("\n\n REMARK: %s",user.remark);
printf("\n\nVerified from Quiz Zone authorities...");
printf("\n-------------------------------------------------------------------------------");
}
    getch();
}

int quiz1() {
	    printf("\nWELCOME TO BRAINTEASERS GALORE ...!\n");
		level1: //label
	    // Level 1:
	    score1=0;
	    // Question 1
	    printf("\nLEVEL1:");
	    printf("\nQuestion 1: What has a head, a tail, is brown, and has no legs?\n");
	    printf("a) Snake\nb) Penny\nc) Tree\nd) Mushroom\n\nYour answer: ");
	    scanf(" %c", &answer[0]);

	    switch (answer[0]) {
		case 'b':
		case 'B':
		    printf("Correct!\n");
		    score1++;
		    break;
		default:
		    printf("Incorrect!\n");
		    break;
	    }

	    // Question 2
	    printf("\nQuestion 2: What gets wetter as it dries?\n");
	    printf("a) Towel\nb) Sponge\nc) Soap\nd) Raincoat\n\nYour answer: ");
	    scanf(" %c", &answer[0]);

	    switch (answer[0]) {
		case 'a':
		case 'A':
		    printf("Correct!\n");
		    score1++;
		    break;
		default:
		    printf("Incorrect!\n");
		    break;
	    }

	    // Question 3
	    printf("\nQuestion 3: What has keys but can't open locks?\n");
	    printf("a) Piano\nb) Door\nc) Computer\nd) Car\n\nYour answer: ");
	    scanf(" %c", &answer[0]);

	    switch (answer[0]) {
		case 'a':
		case 'A':
		    printf("Correct!\n");
		    score1++;
		    break;
		default:
		    printf("Incorrect!\n");
		    break;
	    }

	    if (score1 < 2) {
		printf("Opps! You are not able for level:2\n");
		goto level1;
	    } else {
		printf("\nCONGRATULATION! You've completed level 1\n");
		level2: //label
		score2=0;
	    printf("\n\nLEVEL:2");

	    // Level 2:
	    // Question 1
	    printf("\nQuestion 1: I'm tall when I'm young, and I'm short when I'm old. What am I?\n");
	    printf("a) Tree\nb) Candle\nc) Giraffe\nd) Pencil\nYour answer: ");
	    scanf(" %c", &answer[0]);

	    switch (answer[0]) {
		case 'b':
		case 'B':
		case 'd':
		case 'D':
		    printf("Correct!\n");
		    score2++;
		    break;
		default:
		    printf("Incorrect!\n");
		    break;
	    }

	    // Question 2
	    printf("\nQuestion 2: What has hands but cannot clap?\n");
	    printf("a) Clock\nb) Cat\nc) Horse\nd) Monkey\nYour answer: ");
	    scanf(" %c", &answer[0]);

	    switch (answer[0]) {
		case 'a':
		case 'A':
		    printf("Correct!\n");
		    score2++;
		    break;
		default:
		    printf("Incorrect!\n");
		    break;
	    }

	    // Question 3
	    printf("\nQuestion 3: What has eyes but can't see?\n");
	    printf("a) Potato\nb) Needle\nc) Storm\nd) Ghost\nYour answer: ");
	    scanf(" %c", &answer[0]);

	    switch (answer[0]) {
		case 'b':
		case 'B':
		    printf("Correct!\n");
		    score2++;
		    break;
		default:
		    printf("Incorrect!\n");
		    break;
	    }

	    if (score2 < 2) {
		printf("Opps! You are not able for level:3\n");
		goto level2;
	    } else {
		printf("\nCongrats You've completed Level 2!\n");
		level3:  //lebel
	    printf("\n\nLEVEL:3");

	    // Level 3:
	    score3=0;
	    // Question 1
	    printf("\nQuestion 1: What can travel around the world while staying in a corner?\n");
	    printf("a) Globe\nb) Aeroplane\nc) Stamp\nd) Postcard\nYour answer: ");
	    scanf(" %c", &answer[0]);

	    switch (answer[0]) {
		case 'a':
		case 'A':
		    printf("Correct!\n");
		    score3++;
		    break;
		default:
		    printf("Incorrect!\n");
		    break;
	    }

	    // Question 2
	    printf("\nQuestion 2: The more you take, the more you leave behind. What am I?\n");
	    printf("a) Footstep\nb) Wind\nc) Sun\nd) Rain\nYour answer: ");
	    scanf(" %c", &answer[0]);

	    switch (answer[0]) {
		case 'a':
		case 'A':
		    printf("Correct!\n");
		    score3++;
		    break;
		default:
		    printf("Incorrect!\n");
		    break;
	    }

	    // Question 3
	    printf("\nQuestion 3: What has a neck but no head?\n");
	    printf("a) Shirt\nb) Bottle\nc) Snake\nd) Scarf\nYour answer: ");
	    scanf(" %c", &answer[0]);

	    switch (answer[0]) {
		case 'b':
		case 'B':
		    printf("Correct!\n");
		    score3++;
		    break;
		default:
		    printf("Incorrect!\n");
		    break;
	    }

	    if (score3 < 2) {
		printf("Opps! You are not able for the Certificate Yet!\n");
		goto level3;
	    } else {
		printf("\nCongrats You've completed Level 3!\n");
		score=score1 + score2 + score3;
	     printf("\n\nYour Final Score is: %d\n",score );
	}
	}
	}


return 0;
}

int quiz2() {
    char ans;

    printf("\nWELCOME TO LINGUISTIC GYMNASTIC: THE ABCS ...!\n");

    // Level 1
    level1:
    score1=0;
    printf("\nLEVEL 1:\n");
    printf("Question 1: Which letter is an exclamation?\n");
    scanf(" %c", &ans);
    if (ans == 'o' || ans == 'O') {
	printf("Correct!\n");
	score1++;
    } else {
	printf("Incorrect!\n");
    }

    printf("Question 2: Which letter is a drink?\n");
    scanf(" %c", &ans);
    if (ans == 't' || ans == 'T') {
	printf("Correct!\n");
	score1++;
    } else {
	printf("Incorrect!\n");
    }

    if (score1 < 2) {
	printf("Oops! You are not able to proceed to Level 2.\n");
	goto level1;
    } else {
	printf("\nCONGRATULATIONS! You've completed Level 1.\n");

	// Level 2
	level2:
	score2=0;
	printf("\nLEVEL 2:\n");
	printf("Question 1: Which letter is a question mark?\n");
	scanf(" %c", &ans);
	if (ans == 'y' || ans == 'Y') {
	    printf("Correct!\n");
	    score2++;
	} else {
	    printf("Incorrect!\n");
	}

	printf("Question 2: Which letter is a tool?\n");
	scanf(" %c", &ans);
	if (ans == 'x' || ans == 'X') {
	    printf("Correct!\n");
	    score2++;
	} else {
	    printf("Incorrect!\n");
	}

	printf("Question 3: Which letter is a vegetable?\n");
	scanf(" %c", &ans);
	if (ans == 'p' || ans == 'P') {
	    printf("Correct!\n");
	    score2++;
	} else {
	    printf("Incorrect!\n");
	}

	if (score2 < 2) {
	    printf("Oops! You are not able to proceed to Level 3.\n");
	    goto level2;
	} else {
	    printf("\nCONGRATULATIONS! You've completed Level 2.\n");

	    // Level 3
	    level3:
	    score3=0;
	    printf("\nLEVEL 3:\n");
	    printf("Question 1: Which letter is part of your face?\n");
	    scanf(" %c", &ans);
	    if (ans == 'i' || ans == 'I') {
		printf("Correct!\n");
		score3++;
	    } else {
		printf("Incorrect!\n");
	    }

	    printf("Question 2: Which letter represents an insect?\n");
	    scanf(" %c", &ans);
	    if (ans == 'b' || ans == 'B') {
		printf("Correct!\n");
		score3++;
            } else {
                printf("Incorrect!\n");
            }

            printf("Question 3: Which letter represents a water body?\n");
            scanf(" %c", &ans);
            if (ans == 'c' || ans == 'C') {
                printf("Correct!\n");
                score3++;
            } else {
                printf("Incorrect!\n");
            }

            if (score3 < 2) {
                printf("Oops! You are not able to proceed to the Certificate.\n");
                goto level3;
            } else {
                printf("\nCONGRATULATIONS! You've completed Level 3.\n");
            }
        }
    }

    // Calculate and display final score
    score = score1 + score2 + score3;
    printf("\nYour Final Score is: %d\n", score);

    return 0;
}


int quiz3()
{
    int marks1, marks2, marks3, ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9;
    level1:
    marks1=0;
    printf("\nLevel 1 \n");
    printf("\nEnter the number of option you want to choose \n\n");

    printf("\nWhich of the following is not the type of loop function ?\n");
    printf("1. for loop\t 2. goto loop\t 3. do while loop\t 4. while loop\n");

    scanf("%d",&ans1);
    if (ans1 == 2)
    {
    printf("\nYou got the correct answer\n");
    marks1++;}
    else
    {
        printf("\nSorry but this is the incorrect answer\n");
    }
     printf("\nWhat is the correct way to declare an integer variable in C?\n");
    printf("1. int 1x; \t 2.integer x;\t 3.int x;\t 4. x int;\n");

    scanf("%d",&ans2);
    if (ans2 == 3)
    {
    printf("\nYou got the correct answer\n");
    marks1++;
    }
    else
    {
    printf("\nSorry but this is the incorrect answer\n");
    }

    printf("\nWhich operator is used to perform addition in C?\n");
    printf("1. +  \t 2. -;\t 3. % \t 4.& \n");

    scanf("%d",&ans3);
    if (ans3 == 1)
    {
    printf("\nYou got the correct answer\n");
    marks1++;
    }
    else
    {
    printf("\nSorry but this is the incorrect answer\n");
    }
    printf("\nScore for the level 1 is %d\n\n\n", marks1);
    if(marks1<2)
    {
    printf("\nYou are not eligible for level 2!");
    goto level1;
    }
    else
    {
    level2:
    marks2=0;
    printf("\nLevel 2\n");
    printf("\nWhich of the following is a logical operator in C?\n");
    printf("1. &\t 2. && \t 3. # \t 4. @\n");
    scanf("%d",&ans4);
    if (ans4 == 2)
    {
    printf("\nYou got the correct answer\n");
    marks2++;
    }
    else
    {
    printf("\nSorry but this is the incorrect answer\n");
    }
    printf("\nWhat does the printf() function do?\n");
    printf("1. reads input \t 2. writes output \t 3. perform mathematical problems \t 4. none of the above\n");
    scanf("%d",&ans5);
    if (ans5 == 1 )
    {
    printf("\nYou got the correct answer\n");
    marks2++;
    }
    else
    {
    printf("\nSorry but this is the incorrect answer\n");
    }
    printf("\nWhich keyword is used to return a value from a function?\n");
    printf("1. giveback \t 2. return  \t 3. output \t 4. send \n");
    scanf("%d",&ans6);
    if (ans6 ==2 )
    {
    printf("\nYou got the correct answer\n");
    marks2++;
    }
    else
    {
    printf("Sorry but this is the incorrect answer\n");
    }
    printf("Score for the level 2 is %d\n\n\n", marks2);
    if(marks2<2)
    {
    printf("\nYou are not eligible for level 3!");
    goto level2;
    }
    else
    {
    level3:
    marks3=0;
    printf("\nLevel 3\n");
    printf("\nWhich data type is used to store a single character in C?\n");
    printf("1. string \t 2.alpha  \t 3.text  \t 4. char \n");
    scanf("%d",&ans7);
    if (ans7 == 4 )
    {
    printf("\nYou got the correct answer\n");
    marks3++;
    }
    else
    {
    printf("\nSorry but this is the incorrect answer\n");
    }
    printf("\nWhich of the following is not a reserved keyword in C?\n");
    printf("1. if \t 2. for \t 3. main \t 4. return\n");
    scanf("%d",&ans8);
    if (ans8 == 3)
    {
    printf("\nYou got the correct answer\n");
    marks3++;
    }
    else{
    printf("\nSorry but this is the incorrect answer\n");}
    printf("\nWhat does the scanf() function do?\n");
    printf("1.reads input \t 2. writes output  \t 3. perform mathematical problems  \t 4. none of the above\n");
    scanf("%d",&ans3);
    if (ans9 == 1 )
    {
    printf("You got the correct answer\n");
    marks3++;
    }
    else
    {
    printf("Sorry but this is the incorrect answer\n");
    }
    printf("Score for the level 3 is %d \n\n\n", marks3);
    if(marks3<2)
    {
    printf("\nYou are not eligible for the certificate!");
    goto level3;
    }
    else
    {
    printf("\nCongratulations you have completed the quiz!\n");
    }
}
}


score1=marks1;
score2=marks2;
score3=marks3;
score=score1+score2+score3;
printf("\n\nFinal Score : %d",score);
return 0;
}


