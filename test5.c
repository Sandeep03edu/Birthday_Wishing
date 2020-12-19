#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>



void reply_no();
void enter();
void reply_fine();
void birthday();
void delay();
void ChangeColor();

int main(){ 
    char reply,reply_2,r,reply_clg,DOB_confirm;
    int reply_DOB,year_DOB,month_DOB,date_DOB; 
    char* name[20];
 
    printf("Please Enter your name\n");
    scanf("%s",&name);
   
    
// Saying Hello
    printf("Hello %s :)\nNice to meet you\n",name);

//Asking to press enter
    printf("Press enter to continue\n");
    enter();
    //printf("Thank you for pressing enter\nYou have to press enter after reading my messages\n");
    enter();
// //Asking do you know me??
//     printf("\nDo you know, Who am i ???????\n");
//     printf("Please reply in y/n\n");
//     enter ();

//Giving intro
//    printf("\nWell I know you dont know me :(\nBut i know you:)\nSo it will be better if we get to know each other\n");
    printf("Hello :p\nMy name is RoboEm03Me\n");
    enter();

//Asking to start discussion or not.....
    // printf("\nDo you want to start discussion ????\nReply in y or n\n");
    // scanf("%c",&reply);
    // if(reply==89 || reply==121){
    //     printf("Nice to hear that\n");
    // }
    // else{
    //     printf("\n\nIts so sad no one wants to chat with me :((((\n");
    //     printf("Can you pls chat with me :/?\n\n");
    //     printf("Please press y to start discussion :/\n");
    //     reply_no();
    // }

//Getting started
    printf("\nSo whenever i will ask you some questions and you have to tell whether it is true(y) or false(n)\nNow please press enter.....\n");
    enter();  

//How are you?
    printf("\nOhh Sorry......\nI forget to ask this \nHow are you ???\nReply 'y' for Fine otherwise 'n'\n");
    reply_fine();
    enter();

//College life
    printf("\nHow is your studies going on ?\nReply 'y' for Fine otherwise 'n'\n");      
    scanf("%c",&reply_clg);  
  
    if (reply_clg=='y' || reply_clg=='Y')
    {
        printf("Ohho \nAmazing \n");
    }
    else if(reply_clg==78 || reply_clg==110){
        printf("Ohh Same \nAs Expected \nSabki lagi padi hai xd\n");
    }
    else{
        printf("Sorry you pressed the wrong key\n");
    }

//DOB
    printf("\nHey what is your Date of birth ??\nPlease Enter your date of birth in 'Date Month Year' format\n");
    scanf("%d %d %d",&date_DOB,&month_DOB,&year_DOB);
  //  DOB_asking(date_DOB,month_DOB,year_DOB);
    printf("\nSo your date of birth is %d/%d/%d \n",date_DOB,month_DOB,year_DOB);

//Current Date
    time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  //printf("Today's Date and time is : %d-%02d-%02d %02d:%02d:%02d\n\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

//Birthday Checker and Wishing
    if (date_DOB==tm.tm_mday && month_DOB==tm.tm_mon + 1)
    {
        printf("\n\nOhh it seems to be your Birthday\nHappy birthday %s \nWishing u a happiest %d Birthday\n\n\n", name,(tm.tm_year + 1900-year_DOB));
        FILE * fPointer;
		wint_t c;
        fPointer = fopen("aaaa.txt", "r");
        char singleLine[10000];
        while((c=fgetwc(fPointer))!=WEOF)
	{
		if(c!=' ')
		delay();
		putwchar(c);
	}
        
        fclose(fPointer);
		ChangeColor();
    }

    else{
        printf("\n\nOhh I am too late, Sorry :(\nHappy Belated Birthday %s :))\n",name);
    }
    
    getch();
    return 0;
}

void reply_no(){
    char reply;

    scanf("%c",&reply);
    if(reply==89 || reply==121){
        printf("Nice to hear that\n");
    }
    else
    {
        printf("Please press y to start discussion :/\n");
        reply_no();
    } 
}
void enter(){
    char enter;
    enter = 0;
    while (enter != '\r' && enter != '\n') { enter = getchar(); }
}

void reply_fine(){
    char a;
    //printf("Please reply in y or n\n");
    scanf("%c",&a);
    if(a==89 || a==121){
        printf("Wow, Sounds great\n");
    }
    else if(a==78 || a==110){
        printf("Feeling sad :((\n");
    }
    else{
        reply_fine();
    }
}
void delay()
{
	for(int i =0; i<1000; i++)
	for(int j =0; j<3000; j++)
	{
		
	}
}
void ChangeColor()
{
	for(int i=0; i<1000000000; i++){
		if(i%16==0 || i%16==1 || i%16==2 || i%16==3){
		system("COLOR 08"); 
		}
		else if(i%16==4 || i%16==5 || i%16==6 || i%16==7){
		system("COLOR 0D"); 
		}
		else if(i%16==8 || i%16==9 || i%16==10 || i%16==11){
		system("COLOR 01"); 
		}
		else{
		system("COLOR 0B"); 
		}
	}
}
