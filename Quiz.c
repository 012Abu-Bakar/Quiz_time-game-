
//system("color 0G");       //     For shoing all color attributes


#include <stdio.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int x, int y )
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main()
{
    int ans=0,score=0,deduct=0,scorepos=0;
    //system("color 0G");
    system("color fc");
    printf("Press Enter key deep dying in a QuizWorld......\n\n");
    _getch();
    system("cls");
    system("color 0B");
    printf("Press Enter to read instructions......\n\n");
   _getch();
   system("cls");
    printf("\t\t______________\n");
    printf("\t\t|INSTRUCTIONS|\n");
    printf("\t\t--------------\n\n");
    
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("(i) All questions are compulsory to Attempt.\n(ii) On every correct answer you will get 5 points.\n(iii) Every wrong answer will deduct -1 from your score.\n\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("Press Enter to start the game~~~~~~~\n\n");
    _getch();
    system("cls");
    printf("<<<<<<<<<-----WELCOME TO QUIZ WORLD----->>>>>>>>\n\n\n");
    printf("Press Enter key to start a Quiz.....\n\n\n");
    _getch();
    system("cls");
    printf("\n\n");
    system("color 70");
    printf("\t--------------QUESTIONS-------------\n\n");
	printf("------------------------------------------------------------------------------------------------------\n");
	printf("(i). Who invented C Language ?\n(1) Charles Babbage\n(2) Grahambel\n(3) Dennis Ritchie\n(4) Steve Jobs\n");
	printf("-------------------------------------------------------------------------------------------------------\n");
    printf("\nWrite your option (1/2/3/4)\n");
    scanf("%d",&ans);
    if(ans==3){
    printf("CORRECT ANSWER :-) \n\n");
    score+=5;
    scorepos+=1;    
    }
    else{
    printf("WRONG ANSWER   :-( ???\n\n");
    score-=1;
    deduct+=1;    
    }
    printf("\n");
    printf("\t\t\t\t------------------\n");
    printf("\t\t\t\tPRESS ENTER ......\n\n");
    printf("\t\t\t\t__________________\n");
    _getch();
    system("cls");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("(ii) C is a which level language.?\n(1) Low Level\n(2) High Level\n(3) Low + High\n(4) None\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("\nWrite your option (1/2/3/4)\n");
    scanf("%d",&ans);
    if(ans==2){
    printf("CORRECT ANSWER :-) \n\n");
    score+=5;
    scorepos+=1;
    }
    else{
    printf("WRONG ANSWER  :-( ???\n\n");
    score-=1;
    deduct+=1;
    }
    printf("\n");
    printf("\t\t\t\t------------------\n");
    printf("\t\t\t\tPRESS ENTER ......\n\n");
    printf("\t\t\t\t__________________\n");
    _getch();
    system("cls");
    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("(iii) C Language is a successor to which language.?\n(1) FORTRAN\n(2) D Language\n(3) BASIC\n(4) B Language\n");
    printf("------------------------------------------------------------------------------------------------------------\n");
    printf("\nWrite your option (1/2/3/4)\n");
    scanf("%d",&ans);
    if(ans==4){
    printf("CORRECT ANSWER :-) \n");
    score+=5;
    scorepos+=1;
    }
    else{
    printf("WRONG ANSWER   :-( ???\n");
    score-=1;
    deduct+=1;
    }
    printf("\n");
    printf("\t\t\t\t------------------\n");
    printf("\t\t\t\tPRESS ENTER ......\n\n");
    printf("\t\t\t\t__________________\n");
    _getch();
    system("cls");
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
    printf("(iv) C is _______ type of programming language.?\n(1) Object Oriented\n(2) Procedural\n(3) Bit level language\n(4) Functional\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
    printf("\nWrite your option (1/2/3/4)\n");
    scanf("%d",&ans);
    if(ans==2){
    printf("CORRECT ANSWER :-) \n");
    score+=5;
    scorepos+=1;
    }
    else{
    printf("WRONG ANSWER  :-( ???\n");
    score-=1;
    deduct+=1;
    }
    printf("\n");
    printf("\t\t\t\t------------------\n");
    printf("\t\t\t\tPRESS ENTER ......\n\n");
    printf("\t\t\t\t__________________\n");
    _getch();
    system("cls");
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("(v) Which program outputs ""Hello World.."" .?\n(1) main(){{scanF(""Hello World.."");}}\n(2) Main(){Printf(""Hello World.."");}\n(3) main(){print(""Hello World.."");}\n(4) main(){scan(""Hello World.."");}\n");
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nWrite your option (1/2/3/4)\n");
    scanf("%d",&ans);
    if(ans==2){
    printf("CORRECT ANSWER :-) \n");
    score+=5;
    scorepos+=1;
    }
    else{
    printf("WRONG ANSWER   :-( ???\n");
    score-=1;
    deduct+=1;
    }
    printf("\n\n");
    printf("PRESS ENTER TO SEE YOUR RESULT: ");
    _getch();
    system("cls");
    system("color 06");
    printf("\n\n\n");
    printf("______________________________________\n");
    printf("Your total score out of 25 is: %d\n",score);
    printf("Total correct answers attemp by you: %d\n",scorepos);
    printf("Total wrong answers attempt by you: %d\n",deduct);
    printf("_______________________________________\n");
    //getch();
    printf("\n");
    printf("\t\t\t\t------------------\n");
    printf("\t\t\t\tPRESS ENTER TO EXIT......\n\n");
    printf("\t\t\t\t__________________\n");
    _getch();
    system("cls");
    printf("\n");
    gotoxy(30,15);
    printf("\t----------------------------------------\n");
    system("color 0A");
    printf("\t\t\t\tTHANK YOU FOR PARTICIPATING IN THIS QUIZ\n\n");
    printf("\t\t\t\t_________________________________________\n");
    _getch();
    system("cls");
	return 0;
}
