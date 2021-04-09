#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void null();
void reseteverything();
void cortana();
void addmoney();
void rangers();
void rmanager();//1
void rwebdev();//2
void  rscientiest();//3
void rappdev();//4
void rprojectmanager();//5
void rhelper();//6
void rhacker();//7
void rcashier();//8
void  rcio();//9
void rengineer();//10
void rseparate();
void muchmoney();
void details();
void details1();
void password1();
void mgrdetail();
void attendance();
void loading();
void webdevdetail();
void appdevdetail();
void hackerdetail();
void engineerdetail();
void cashierdetail();
void helperdetail();
void scientiestdetail();
void renewpassword();
void ciodetail();
void projectmgrdetail();
void recruitment();
void functioncall();
void photoshop();
int mgrslry(){
	int at=0,a,b,k;              
	FILE *fptr;
	char nishan[50];
	fptr=fopen("everwing\\manager\\attend.exe", "r");//1manager
	while(!feof(fptr))
	{fgets(nishan,50,fptr);
		b=atoi(nishan);
		at=at+b;		
	}
	fclose(fptr);
	return (at);}
	
	int appdevslry(){
	int at=0,a,b,k;              
	FILE *fptr;
	char nishan[50];
	fptr=fopen("everwing\\appdev\\attend.exe", "r");//2app dev//
	while(!feof(fptr))
	{fgets(nishan,50,fptr);
		b=atoi(nishan);
		at=at+b;		
	}
	fclose(fptr);
	return (at);}
	
	int csslry(){
	int at=0,a,b,k;              
	FILE *fptr;
	char nishan[50];
	fptr=fopen("everwing\\cashier\\attend.exe", "r"); //3cashier
	while(!feof(fptr))
	{fgets(nishan,50,fptr);
		b=atoi(nishan);
		at=at+b;		
	}
	fclose(fptr);
	return (at);}
	int cioslry(){
	int at=0,a,b,k;              
	FILE *fptr;
	char nishan[50];
	fptr=fopen("everwing\\cio\\attend.exe", "r");  //4cio
	while(!feof(fptr))
	{fgets(nishan,50,fptr);
		b=atoi(nishan);
		at=at+b;		
	}
	fclose(fptr);
	return (at);}
	
	int erslry(){
	int at=0,a,b,k;              
	FILE *fptr;
	char nishan[50];
	fptr=fopen("everwing\\engineer\\attend.exe", "r");  //5engineer
	while(!feof(fptr))
	{fgets(nishan,50,fptr);
		b=atoi(nishan);
		at=at+b;		
	}
	fclose(fptr);
	return (at);}
	
	int hkslry(){
	int at=0,a,b,k;              
	FILE *fptr;
	char nishan[50];
	fptr=fopen("everwing\\hacker\\attend.exe", "r");  //6hacjker
	while(!feof(fptr))
	{fgets(nishan,50,fptr);
		b=atoi(nishan);
		at=at+b;		
	}
	fclose(fptr);
	return (at);}
	
	int hpslry(){
	int at=0,a,b,k;              
	FILE *fptr;
	char nishan[50];
	fptr=fopen("everwing\\helper\\attend.exe", "r");  //7helpe
	while(!feof(fptr))
	{fgets(nishan,50,fptr);
		b=atoi(nishan);
		at=at+b;		
	}
	fclose(fptr);
	return (at);}
	int pjmjslry(){
	int at=0,a,b,k;              
	FILE *fptr;
	char nishan[50];
	fptr=fopen("everwing\\projectmgr\\attend.exe", "r"); //8projectmgr
	while(!feof(fptr))
	{fgets(nishan,50,fptr);
		b=atoi(nishan);
		at=at+b;		
	}
	fclose(fptr);
	return (at);}
	int scslry(){
	int at=0,a,b,k;              
	FILE *fptr;
	char nishan[50];
	fptr=fopen("everwing\\scientiest\\attend.exe", "r"); //9scientiest
	while(!feof(fptr))
	{fgets(nishan,50,fptr);
		b=atoi(nishan);
		at=at+b;		
	}
	fclose(fptr);
	return (at);}
	int wdslry(){
	int at=0,a,b,k;              
	FILE *fptr;
	char nishan[50];
	fptr=fopen("everwing\\webdev\\attend.exe", "r"); //10web developer
	while(!feof(fptr))
	{fgets(nishan,50,fptr);
		b=atoi(nishan);
		at=at+b;		
	}
	fclose(fptr);
	return (at);}
char ozone;
char ozone1;
main(){  	rangers();
	HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, 4);
	struct tm *local;
	time_t t;
	t=time(NULL);
	local=localtime(&t);
	char datentime[20];
	FILE*fptr;
	fptr=fopen("everwing\\attt.exe", "w+");
	fprintf(fptr,"%d",local->tm_mday-1);
	fclose(fptr);
	start:
	printf("\t\t         ****MAIN MENU****\n\n");
	SetConsoleTextAttribute(hCon, 5);
	printf("\n\tPress The chronogical alphabet for their Respective Operations\n");
    SetConsoleTextAttribute(hCon, 3);
    printf("\n\tOperation 'a': Attendance of %2d/%d/%d\n\t\t       Time is in    d/m/y format",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
    SetConsoleTextAttribute(hCon, 6);
	printf("\n\n\tOperation 'b': View Details Of All Employee\n");
	 SetConsoleTextAttribute(hCon, 10);
	printf("\n\n\tOperation 'c': Recruitment Of All New Employee\n");
	SetConsoleTextAttribute(hCon, 9);
	printf("\n\n\tOperation 'd': View Details Of Separate Employee\n");
	SetConsoleTextAttribute(hCon, 7);
	printf("\n\n\tOperation 'e': Change Or Renew The Password\n\n");
		SetConsoleTextAttribute(hCon, 14);
	printf("\n\tOperation 'f': Change data of Employee Separately\n\n");
	     SetConsoleTextAttribute(hCon, 12);
	printf("\n\tOperation 'g': View Progress (attendance and salary)\n\n");  
	printf("\n\tOperation 'h': Individual Progress View And Salary Reset\n\n");     
    ozone=getch();
    switch(ozone){
    	case 'a': {
    		int convertor,cvvv,ress;
    		char atten1[10],checker[10];
    		FILE*fptr;
		fptr=fopen("everwing\\attt.exe", "r");
		fgets(atten1,10,fptr);
		convertor=atoi(atten1); //convertor=2
		fclose(fptr);
		cvvv=local->tm_mday;
		ress=cvvv-convertor;
		if(ress==1){
			attendance();
		}
		else{
			printf("\n\tAttendance is aleardy Done For Today :)\n");
		}
		char tauk[10];
			fptr=fopen("everwing\\attt.exe","w+");
			fprintf(fptr,"%d",local->tm_mday);
			fclose(fptr);
		
		
		printf("\n\tPress Any key to go back to Main Menu\n");
		getch();
		system("cls");
		goto start;
			break;
		}
  case 'b':{
  	system("cls");
  printf("1.Manager\n");
  mgrdetail();//10
  printf("\n");
  Sleep(100);
    printf("2.Web Developer\n");
  webdevdetail();//1
  printf("\n");
  Sleep(100);
      printf("3.App Developer\n");
  appdevdetail();//2
  printf("\n");
Sleep(100);
printf("4.Hacker\n");
  hackerdetail();//3
  printf("\n");
Sleep(100);
printf("5.Engineer\n");
  engineerdetail();//4
  printf("\n");
Sleep(100);
printf("6.Cashier\n");
  cashierdetail();//5
  printf("\n");
Sleep(100);
printf("7.Helper\n");
  helperdetail();//6
  printf("\n");
Sleep(100);
printf("8.Computer Scientiest\n");
  scientiestdetail();//7
  printf("\n");
Sleep(100);
printf("9.CIO\n");
  ciodetail();//8
  printf("\n");
Sleep(100);
printf("10.Project Manager\n");
  projectmgrdetail();//9
  printf("\n");
  printf("\t\tPress Any key to go back to Main Menu\n");
  getch();
  system("cls");
  goto start;
			break;
		}
    case 'c':{
    	system("cls");
    	recruitment();
		printf("\n");
        printf("\t\tPress Any key to go back to Main Menu\n");
        getch();
        system("cls");
        goto start;
		break;
	}	
    case 'd':{
    	details1();
          system("cls");
          goto start;
		break;
	}	
	case 'e':{	
	             renewpassword();
				  printf("\n\n\t\t\tPress Any key to go back to Main Menu\n");
                    getch();
                   system("cls");
                  goto start;
		break;
	}
    case 'f':{rseparate();
    		
				  printf("\n\n\t\tPress Any key to go back to Main Menu\n");
                    getch();
                   system("cls");
                  goto start;
		break;
	}
	case 'g':{
		system("cls");
			     functioncall();
				  printf("\n\n\tPress Any key to go back to Main Menu\n");
                    getch();
                   system("cls");
                  goto start;
		break;
	}
	case 'h':{
		          cortana();
				  printf("\n\t\tPress Any key to go back to Main Menu\n");
                    getch();
                   system("cls");
                  goto start;
		break;
	}
	case 'i':{
			printf("\n\n\t\tTesting Function i\n");
				  printf("\n\n\t\tPress Any key to go back to Main Menu\n");
                    getch();
                   system("cls");
                  goto start;
		break;
	}
	case 'j':{
			printf("\n\n\tTesting Function j\n");
				  printf("\n\n\t\tPress Any key to go back to Main Menu\n");
                    getch();
                   system("cls");
                  goto start;
		break;
	}
	default : {
		null(); 
		Sleep(1000);
		system("cls");
		goto start;	
			}  	
	}
		
	return 0;
}
void null(){
	printf("Error..\a");
	Sleep(100);
	printf("\nInvalid Input\n");
	printf("Please try again");
	
	system("color 1");
Sleep(200);
system("color 2");
Sleep(200);
system("color 3");
Sleep(200);
system("color 4");
Sleep(200);
system("color 5");
Sleep(200);
system("color 6");
}

void mgrdetail(){ //1read details or corretc details of manager
	{
		int a;
		char nameofmgr1[100];
	FILE*fptr;
   fptr = fopen("everwing\\manager\\details.exe", "r");
   for(a=1; a<=3; a++){
   fgets(nameofmgr1, 99, fptr);
   printf("%s",nameofmgr1);}
   fclose(fptr);}
}
void webdevdetail(){//2.read details or correct of web develop
	{
		int webdev;
		char nameofwebdev1        [100];
	FILE*fptr;
	fptr = fopen("everwing\\webdev\\details.exe", "r");
   for(webdev=1; webdev<=3; webdev++){
   fgets(nameofwebdev1, 99, fptr);
   printf("%s",nameofwebdev1);}
   fclose(fptr);}
}
void appdevdetail(){//3.read details or corretc of app developer
	{
		int appdev;
		char nameofappdev1 [150];
	FILE*fptr;
	fptr = fopen("everwing\\appdev\\details.exe", "r");
  for(appdev=1; appdev<=3; appdev++){
  fgets(nameofappdev1, 150, fptr);
  printf("%s",nameofappdev1);}
  fclose(fptr);}
}
void hackerdetail(){//4,read details or correct hacker
	{
		int hacker;
		char nameofhacker1 [100];
	FILE*fptr;
	fptr = fopen("everwing\\hacker\\details.exe", "r");
  for(hacker=1; hacker<=3; hacker++){
  fgets(nameofhacker1, 99, fptr);
  printf("%s",nameofhacker1);}
  fclose(fptr);}
}

void engineerdetail(){//5.read or corretc details of engineer
	{
		int engineer;
		char nameofengineer1 [100];
	FILE*fptr;
	fptr = fopen("everwing\\engineer\\details.exe", "r");
  for(engineer=1; engineer<=3; engineer++){
  fgets(nameofengineer1, 99, fptr);
  printf("%s",nameofengineer1);}
  fclose(fptr);}
}

void cashierdetail(){//6reaf deatisl or correct of cashier
	{
		int cashier;
		char nameofcashier1 [100];
	FILE*fptr;
	fptr = fopen("everwing\\cashier\\details.exe", "r");
  for(cashier=1; cashier<=3; cashier++){
  fgets(nameofcashier1, 99, fptr);
  printf("%s",nameofcashier1);}
  fclose(fptr);}
}
void helperdetail(){//7.read or corretc details of helper
	{
		int helper;
		char nameofhelper1 [100];
	FILE*fptr;
	fptr = fopen("everwing\\helper\\details.exe", "r");
  for(helper=1; helper<=3; helper++){
  fgets(nameofhelper1, 99, fptr);
  printf("%s",nameofhelper1);}
  fclose(fptr);}
}
void scientiestdetail(){//8read details r corretc dat of saroj poudecl
	{
		int scientiest;
		char nameofscientiest1 [100];
	FILE*fptr;
	fptr = fopen("everwing\\scientiest\\details.exe", "r");
  for(scientiest=1; scientiest<=3; scientiest++){
  fgets(nameofscientiest1, 99, fptr);
  printf("%s",nameofscientiest1);}
  fclose(fptr);}
}
void ciodetail(){//9,read or correc details of nabin sir chief inform officer
	{
		int cio;
		char nameofcio1 [100];
	FILE*fptr;
	fptr = fopen("everwing\\cio\\details.exe", "r");
  for(cio=1; cio<=3; cio++){
  fgets(nameofcio1, 99, fptr);
  printf("%s",nameofcio1);}
  fclose(fptr);}
}
void projectmgrdetail(){//10 rwad or corretc details of project mgr..
	{
		int projectmgr;
		char nameofprojectmgr1 [100];
	FILE*fptr;
	fptr = fopen("everwing\\projectmgr\\details.exe", "r");
  for(projectmgr=1; projectmgr<=3; projectmgr++){
  fgets(nameofprojectmgr1, 99, fptr);
  printf("%s",nameofprojectmgr1);}
  fclose(fptr);}
}
   void recruitment(){
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 9);
FILE *fptr;
 rmanager();//1
 rwebdev();//2
 rscientiest();//3
 rappdev();//4
 rprojectmanager();//5
 rhelper();//6
 rhacker();//7
 rcashier();//8
 rcio();//9
 rengineer();//10
}
void loading(){
	int pw1, pw2;
for(pw2=1; pw2<=2; pw2++){
	printf("\rPlease wait");
		for(pw1=1; pw1<=5; pw1++)
{	Sleep(100);
		printf(".");
	}
	printf("\r                         ");
}}
void attendance(){
		FILE *fptr;
int a,b,c,d,e,f;
int attendance;
int dateregg;
char attend[25];
char reason;
char flag;
char flag1;
char datereg[20];
struct tm *local;
	  time_t t;
    t=time(NULL);
    local=localtime(&t);
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 6);
    for(a=1; a<=5; a++)
	{printf("\nPlease wait while system loads file.");
   	for(b=1; b<=3; b++){
Sleep(200);
	printf(".");}
system("cls");}
    SetConsoleTextAttribute(hCon, 3);
    printf("           (^_^) ****Attendance_of_%2d/%d/%d****",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
printf("\n          Enter 'p'for present and 'a' for absent\n");
SetConsoleTextAttribute(hCon, 4);
printf("===========================+===================================\n");
printf("Name & Post----------------|------------------Attendance Status\n");
printf("===========================+===================================\n");
for(attendance=1; attendance<=10; attendance++){

	switch(attendance){

		case 1:{
			SetConsoleTextAttribute(hCon, 4);
			{	fptr=fopen("everwing\\manager\\details.exe", "r");
			   fscanf(fptr, "%[^\n]",attend);
		       printf("1.Manager:\n%s\t\t\t",attend);
			   fclose(fptr);}
		       flag = getche();
		       if(flag=='p'){
		       	printf("\t _/\n");
		       	fptr=fopen("everwing\\manager\\attend.exe", "a+");
		       	fprintf(fptr, "\n1", datereg);
			    fclose(fptr); }
			   if(flag=='a'){
			   		printf("\t  X\n");	 
		}
			  	break;
		}
	    case 2:{
		{SetConsoleTextAttribute(hCon, 5);
		fptr=fopen("everwing\\webdev\\details.exe", "r");
	   fscanf(fptr, "%[^\n]",attend);
	     printf("\n2.Web Developer:\n%s\t\t\t",attend);}
	    flag=getche();
	    if(flag=='p')
	    {printf("\t _/\n");
		fptr=fopen("everwing\\webdev\\attend.exe", "a+");
		 fprintf(fptr, "\n1",datereg);
		fclose(fptr);}
		  if(flag=='a'){
		  	printf("\t  X\n");	 
		}break;
		}
case 3:{SetConsoleTextAttribute(hCon, 6);
	{fptr=fopen("everwing\\scientiest\\details.exe", "r");
	fscanf(fptr, "%[^\n]",attend);
	 printf("\n3.Computer Scientiest:\n%s\t\t\t",attend);
	fclose(fptr);}
	flag=getche();
	if(flag=='p')
	{
	printf("\t _/\n");
	fptr=fopen("everwing\\scientiest\\attend.exe", "a+");
	fprintf(fptr,"\n1",datereg);
	fclose(fptr);
	}
	  if(flag=='a'){
	  		printf("\t  X\n");	 
		}	
	break;
}

	case 4:{SetConsoleTextAttribute(hCon, 7);
		{fptr=fopen("everwing\\appdev\\details.exe", "r");
		fscanf(fptr, "%[^\n]",attend);
		 printf("\n4.APP Developer:\n%s\t\t\t",attend);
		fclose(fptr);
		}
		flag=getche();
		if(flag=='p'){
			printf("\t _/\n");
			fptr=fopen("everwing\\appdev\\attend.exe", "a+");
			fprintf(fptr, "\n1",datereg);
			fclose(fptr);	}

		  if(flag=='a'){
		  		printf("\t  X\n");	 
		}
		break;
	}
	case 5:{SetConsoleTextAttribute(hCon, 5);
		{fptr=fopen("everwing\\engineer\\details.exe", "r");
		fscanf(fptr, "%[^\n]",attend);
		 printf("\n5.ECI engineer:\n%s\t\t\t",attend);
		fclose(fptr);
		}
		flag=getche();
		if(flag=='p'){
			printf("\t _/\n");
			fptr=fopen("everwing\\engineer\\attend.exe", "a+");
			fprintf(fptr, "\n1",datereg);
			fclose(fptr);	}

	  if(flag=='a'){
	  		printf("\t  X\n");	 
		}
		break;
	}
	case 6:{SetConsoleTextAttribute(hCon, 9);
		{fptr=fopen("everwing\\cio\\details.exe", "r");
		fscanf(fptr, "%[^\n]",attend);
	 printf("\n6.CIO:\n%s\t\t\t",attend);
		fclose(fptr);
		}
		flag=getche();
		if(flag=='p'){
			printf("\t _/\n");
			fptr=fopen("everwing\\cio\\attend.exe", "a+");
			fprintf(fptr, "\n1",datereg);
			fclose(fptr);	}
     if(flag=='a'){
     		printf("\t  X\n");	 
		}
		break;
	}
	case 7:{SetConsoleTextAttribute(hCon, 2);
		{fptr=fopen("everwing\\cashier\\details.exe", "r");
		fscanf(fptr, "%[^\n]",attend);
		 printf("\n7.Cashier:\n%s\t\t\t",attend);
		fclose(fptr);
		}
		flag=getche();
		if(flag=='p'){
			printf("\t _/\n");
			fptr=fopen("everwing\\cashier\\attend.exe", "a+");
			fprintf(fptr, "\n1",datereg);
			fclose(fptr);}

		  if(flag=='a'){
		  		printf("\t  X\n");	 
		  }	break;	}
	case 8:{SetConsoleTextAttribute(hCon, 6);
		{fptr=fopen("everwing\\hacker\\details.exe", "r");
		fscanf(fptr, "%[^\n]",attend);
	 printf("\n8.Hacker:\n%s\t\t\t\t",attend);
		fclose(fptr);
		}
		flag=getche();
		if(flag=='p'){
			printf("\t _/\n");
			fptr=fopen("everwing\\hacker\\attend.exe", "a+");
			fprintf(fptr, "\n1",datereg);
			fclose(fptr);	}
		  if(flag=='a'){
		  		printf("\t  X\n");	 
		}
		break;
	}
	case 9:{SetConsoleTextAttribute(hCon, 3);
		{fptr=fopen("everwing\\helper\\details.exe", "r");
		fscanf(fptr, "%[^\n]",attend);
		 printf("\n9.Helper:\n%s\t\t\t",attend);
		fclose(fptr);
		}
		flag=getche();
		if(flag=='p'){
			printf("\t _/\n");
			fptr=fopen("everwing\\helper\\attend.exe", "a+");
			fprintf(fptr, "\n1",datereg);
			fclose(fptr);	}

		  if(flag=='a'){
		  		printf("\t  X\n");	 
		}
		break;
	}
	case 10:{SetConsoleTextAttribute(hCon, 5);
		{fptr=fopen("everwing\\projectmgr\\details.exe", "r");
		fscanf(fptr, "%[^\n]",attend);
		 printf("\n10.Project Manager:\n%s\t\t\t",attend);
		fclose(fptr);
		}
		flag=getche();
		if(flag=='p'){
			printf("\t _/");
			fptr=fopen("everwing\\projectmgr\\attend.exe", "a");
			fprintf(fptr, "\n1",datereg);
			fclose(fptr);	}

		  if(flag=='a'){
			printf("\t  X");	 }
		break;
	}	}//switchcase ending	}//forloop ending
	SetConsoleTextAttribute(hCon, 2);
	}//for loop
}
	
void details(){
	char haha[20];
	printf("\nEnter The Post Name:\n");
	gets(haha);
switch(strcmp(strupr(haha), "MANAGER"))
{case 0: {
	mgrdetail();
	break;}}
	switch(strcmp(strupr(haha), "WEB DEVELOPER" ))//2
	{case 0:{webdevdetail();
			break;	}	}
	switch(strcmp(strupr(haha), "APP DEVELOPER") )//3
	{case 0:{appdevdetail();
			break;
		}
	}
	switch(strcmp(strupr(haha), "HACKER" ))//4
	{case 0:{hackerdetail();
			break;}	}
	switch(strcmp(strupr(haha), "CASHIER" ))//5
	{case 0:{cashierdetail();
			break;}	}
	switch(strcmp(strupr(haha), "COMPUTER SCIENTIEST" ))//6
	{case 0:{scientiestdetail();
			break;}	}
	switch(strcmp(strupr(haha), "CIO" ))//7
	{case 0:{ciodetail();
			break;}	}
	switch(strcmp(strupr(haha), "Project Manager" ))//8
	{	case 0:{projectmgrdetail();
			break;}	}	
	switch(strcmp(strupr(haha), "ENGINEER" ))//9
	{case 0:{engineerdetail();
			break;	}}
	switch(strcmp(strupr(haha), "HELPER" ))//10
	{case 0:{helperdetail();
			break;}}
			}
void details1(){
	char y;
	do{
		system("cls");
	details();
	printf("\nLook for Another detail too? y/n");
	}	
	while(getche()=='y');
	
		printf("\n\n\t\tPress Any key to go back to Main Menu\n");
        getch();
        system("cls");		
	}

    void renewpassword(){
	char newpassword[20];
	char newpassword1[20];
	char kiss[50];
		FILE*fptr;
		char liscencekey[50];
		system("cls");
		{fptr=fopen("everwing\\mmm.exe", "r");
		fgets(kiss, 30, fptr);
		fclose(fptr);}
		printf("Enter The Liscence Key\n>>");
		liscencekey:
		gets(liscencekey);
	if(strcmp(liscencekey, kiss)==0){
	printf("Liscece Key is Valid(^-^)");
	Sleep(1000);
	fptr=fopen("everwing\\password\\password.exe", "w+");
	kissy:
		system("cls");
	printf("\n\tEnter Your new Password\n>>>>>>>");
	gets(newpassword);
	
	printf("\n\tEnter the password again\n>>>>>>");
	gets(newpassword1);
	if(strcmp(newpassword, newpassword1)==0){
		printf("\n\t\t\t\tPassword matched!!!\n\t\t\t\tPassword Sucessfully Changed\n");
		Sleep(1000);
		system("cls");
		fprintf(fptr,"%s",newpassword);
		fclose(fptr);	
	}
	else{
		printf("\nPasswords dont match");
printf("\nPlease enter again");
getch();
goto kissy;	}
}
else{
	printf("\nInvalid Liscence Key\nPlease Enter The Key Again\n>>");
	goto liscencekey;
}
}
void rmanager(){
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 9);
    {{
char phnoofmgr [ 30];
char nameofmgr         [20];
char adressofmgr       [ 30];
//1starting of  manager

FILE*fptr;
correct:
	system("cls");
fptr = fopen("everwing\\manager\\details.exe", "w+");
printf("\nEnter the name of new manager\n");
  gets(nameofmgr);
  fprintf(fptr, "Name:%s\n", nameofmgr);
  SetConsoleTextAttribute(hCon, 8);
  printf("Enter his/her Adress\n");
  gets(adressofmgr);
  fprintf(fptr, "Adress:%s\n", adressofmgr);
   SetConsoleTextAttribute(hCon, 4);
  printf("Enter his/her phone number:\n");
  gets(phnoofmgr);
 
  fprintf(fptr, "Phone no:%s\n", phnoofmgr);
 fclose(fptr);}
 
 printf("The entered data is:\n");
  
 SetConsoleTextAttribute(hCon, 2);
  {
  mgrdetail();}
printf("\nIs the data above correct?\nPress 'y' to continue\npress 'e' to edit");
  if(getche()=='e'){
  goto correct;
}}//end of manager	
}

void rwebdev(){
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 8);
{{
char nameofwebdev      [20];	
char adressofwebdev    [ 30];	
char phnoofwebdev      [ 30];
	FILE*fptr;
t://22starting of web dev
	system("cls");
fptr = fopen("everwing\\webdev\\details.exe", "w+");
printf("\n\nEnter the name of new Web Developer\n");
  gets(nameofwebdev);
  fprintf(fptr, "Name:%s\n", nameofwebdev);
  SetConsoleTextAttribute(hCon, 8);
  printf("Enter his/her Adress\n");
  gets(adressofwebdev);
  fprintf(fptr, "Adress:%s\n", adressofwebdev);
   SetConsoleTextAttribute(hCon, 4);
  printf("Enter his/her phone number:\n");
  gets(phnoofwebdev);
  fprintf(fptr, "Phone no:%s\n", phnoofwebdev);
 fclose(fptr);}
 printf("The entered data is:\n");
 webdevdetail(); 
 SetConsoleTextAttribute(hCon, 1);
 webdevdetail();
printf("\nIs the data above correct?\nPress 'y' to continue ||press 'e' to edit\n");
  if(getche()=='e'){
  goto t;
}}//end of web dev
}
void rscientiest(){
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 8);
{{char nameofscientiest  [20];
char phnoofscientiest  [ 30];
char adressofscientiest[ 30];
	FILE*fptr;
cs://33starting of computer scientiest
	system("cls");
fptr = fopen("everwing\\scientiest\\details.exe", "w+");
printf("\n\nEnter the name of new Computer Scientiest\n");
  gets(nameofscientiest);
  fprintf(fptr, "Name:%s\n", nameofscientiest);
  SetConsoleTextAttribute(hCon, 8);
  printf("Enter his/her Adress\n");
  gets(adressofscientiest);
  fprintf(fptr, "Adress:%s\n", adressofscientiest);
   SetConsoleTextAttribute(hCon, 4);
  printf("Enter his/her phone number:\n");
  gets(phnoofscientiest);
 
  fprintf(fptr, "Phone no:%s\n", phnoofscientiest);
 fclose(fptr);}
 
 printf("The entered data is:\n");
  
 SetConsoleTextAttribute(hCon, 1);
  scientiestdetail();
printf("\nIs the data above correct?\n\tPress 'y' to continue\npress 'e' to edit");
  if(getche()=='e'){
  goto cs;
}}//end of computer scientiest
}
void rengineer(){
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 8);
{{char nameofengineer    [20];
char adressofengineer  [ 30];
char phnoofengineer    [ 30];
	FILE*fptr;
eg://55.engineer
	system("cls");
fptr = fopen("everwing\\engineer\\details.exe", "w+");
printf("\n\nEnter the name of new Electronics Engineer\n");
  gets(nameofengineer);
  fprintf(fptr, "Name:%s\n", nameofengineer);
  SetConsoleTextAttribute(hCon, 8);
  printf("Enter his/her Adress\n");
  gets(adressofengineer);
  fprintf(fptr, "Adress:%s\n", adressofengineer);
   SetConsoleTextAttribute(hCon, 4);
  printf("Enter his/her phone number:\n");
  gets(phnoofengineer);
  fprintf(fptr, "Phone no:%s\n", phnoofengineer);
 fclose(fptr);}
printf("The entered data is:\n");
 engineerdetail(); 
 SetConsoleTextAttribute(hCon, 1);
printf("\nIs the data above correct?\nPress 'y' to continue ||press 'e' to edit\n");
  if(getche()=='e'){
  goto eg;
}}//end of engineer
}
void rcio(){
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 8);
{{char nameofcio         [20];
 char phnoofcio         [ 30]; 
char adressofcio       [ 30];
	FILE*fptr;
cio://66.cio
	system("cls");
fptr = fopen("everwing\\cio\\details.exe", "w+");
printf("\n\nEnter the name of new Chief Information Officer\n");
  gets(nameofcio);
  fprintf(fptr, "Name:%s\n", nameofcio);
  SetConsoleTextAttribute(hCon, 8);
  printf("Enter his/her Adress\n");
  gets(adressofcio);
  fprintf(fptr, "Adress:%s\n", adressofcio);
   SetConsoleTextAttribute(hCon, 4);
  printf("Enter his/her phone number:\n");
  gets(phnoofcio);

  fprintf(fptr, "Phone no:%s\n", phnoofcio);
 fclose(fptr);}

 printf("The entered data is:\n");
 ciodetail(); 
 SetConsoleTextAttribute(hCon, 1);

printf("\nIs the data above correct?\nPress 'y' to continue ||press 'e' to edit\n");
  if(getche()=='e'){
  goto cio;
}}//end of chief info officer
}
void rcashier(){	
 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 8);
{{char nameofcashier     [20];
char adressofcashier   [ 30];
char phnoofcashier     [ 30];
	FILE*fptr;
cas://77..cashier
	system("cls");
fptr = fopen("everwing\\cashier\\details.exe", "w+");
printf("\n\nEnter the name of new Cashier\n");
  gets(nameofcashier);
  fprintf(fptr, "Name:%s\n", nameofcashier);
  SetConsoleTextAttribute(hCon, 8);
  printf("Enter his/her Adress\n");
  gets(adressofcashier);
  fprintf(fptr, "Adress:%s\n", adressofcashier);
   SetConsoleTextAttribute(hCon, 4);
  printf("Enter his/her phone number:\n");
  gets(phnoofcashier);

  fprintf(fptr, "Phone no:%s\n", phnoofcashier);
 fclose(fptr);}

 printf("The entered data is:\n");
 cashierdetail(); 
 SetConsoleTextAttribute(hCon, 1);

printf("\nIs the data above correct?\nPress 'y' to continue ||press 'e' to edit\n");
  if(getche()=='e'){
  goto cas;
}}//end of cashier
}
void rhacker(){
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 8);
	{{char nameofhacker      [20];
char adressofhacker    [ 30];
char phnoofhacker      [ 30];
	FILE*fptr;
hak://88..Hacker
	system("cls");
fptr = fopen("everwing\\hacker\\details.exe", "w+");
printf("\n\nEnter the name of new Ethical hacker\n");
  gets(nameofhacker);
  fprintf(fptr, "Name:%s\n", nameofhacker);
  SetConsoleTextAttribute(hCon, 8);
  printf("Enter his/her Adress\n");
  gets(adressofhacker);
  fprintf(fptr, "Adress:%s\n", adressofhacker);
   SetConsoleTextAttribute(hCon, 4);
  printf("Enter his/her phone number:\n");
  gets(phnoofhacker);

  fprintf(fptr, "Phone no:%s\n", phnoofhacker);
 fclose(fptr);}

 printf("The entered data is:\n");
 hackerdetail(); 
 SetConsoleTextAttribute(hCon, 1);

printf("\nIs the data above correct?\nPress 'y' to continue ||press 'e' to edit\n");
  if(getche()=='e'){
  goto hak;
}}//end of hacker
}
void rhelper(){
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 8);
{{char nameofhelper      [20];
char adressofhelper    [ 30];
char phnoofhelper      [ 30];
	FILE*fptr;
hell://99..helper
	system("cls");
fptr = fopen("everwing\\helper\\details.exe", "w+");
printf("\n\nEnter the name of new Technical Helper\n");
  gets(nameofhelper);
  fprintf(fptr, "Name:%s\n", nameofhelper);
  SetConsoleTextAttribute(hCon, 8);
  printf("Enter his/her Adress\n");
  gets(adressofhelper);
  fprintf(fptr, "Adress:%s\n", adressofhelper);
   SetConsoleTextAttribute(hCon, 4);
  printf("Enter his/her phone number:\n");
  gets(phnoofhelper);

  fprintf(fptr, "Phone no:%s\n", phnoofhelper);
 fclose(fptr);}

 printf("The entered data is:\n");
 helperdetail(); 
 SetConsoleTextAttribute(hCon, 1);

printf("\nIs the data above correct?\nPress 'y' to continue ||press 'e' to edit\n");
  if(getche()=='e'){
  goto hell;
}}//end of helper
}
void rprojectmanager(){
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 8);
{{char nameofprojectmgr  [20];
char adressofprojectmgr[ 30];
char phnoofprojectmgr  [ 30];
	FILE*fptr;
prmgr://10..10..projectmgr
	system("cls");
fptr = fopen("everwing\\projectmgr\\details.exe", "w+");
printf("\n\nEnter the name of new Projectmgr\n");
  gets(nameofprojectmgr);
  fprintf(fptr, "Name:%s\n", nameofprojectmgr);
  SetConsoleTextAttribute(hCon, 8);
  printf("Enter his/her Adress\n");
  gets(adressofprojectmgr);
  fprintf(fptr, "Adress:%s\n", adressofprojectmgr);
   SetConsoleTextAttribute(hCon, 4);
  printf("Enter his/her phone number:\n");
  gets(phnoofprojectmgr);

  fprintf(fptr, "Phone no:%s\n", phnoofprojectmgr);
 fclose(fptr);}
SetConsoleTextAttribute(hCon, 1);
 printf("The entered data is:\n");
 projectmgrdetail(); 
 

printf("\nIs the data above correct?\nPress 'y' to continue ||press 'e' to edit\n");
  if(getche()=='e'){
  goto prmgr;
}}//end of projectmgr	
}
void rappdev(){
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, 8);
{{
char nameofappdev      [20];	
char adressofappdev    [ 30];	
char phnoofappdev      [ 30];
	FILE*fptr;
t://22starting of web dev
fptr = fopen("everwing\\appdev\\details.exe", "w+");
printf("\n\nEnter the name of new App Developer\n");
  gets(nameofappdev);
  fprintf(fptr, "Name:%s\n", nameofappdev);
  SetConsoleTextAttribute(hCon, 8);
  printf("Enter his/her Adress\n");
  gets(adressofappdev);
  fprintf(fptr, "Adress:%s\n", adressofappdev);
   SetConsoleTextAttribute(hCon, 4);
  printf("Enter his/her phone number:\n");
  gets(phnoofappdev);
  fprintf(fptr, "Phone no:%s\n", phnoofappdev);
 fclose(fptr);}
 printf("The entered data is:\n");
 appdevdetail(); 
 SetConsoleTextAttribute(hCon, 1);
printf("\nIs the data above correct?\nPress 'y' to continue ||press 'e' to edit\n");
  if(getche()=='e'){
  goto t;
}}//end of web dev
}

void rseparate(){
	system("cls");
	char rrseparate[30];
printf("\n\tWhose data is to be changed?\n>>>");
gets(rrseparate);

{
	switch(strcmp(strupr(rrseparate), "MANAGER"))
{
case 0: {
	rmanager();
	break;
}
}
	switch(strcmp(strupr(rrseparate), "WEB DEVELOPER" ))//2
	{
		case 0:{rwebdev();
			break;
		}
		
	}
	switch(strcmp(strupr(rrseparate), "APP DEVELOPER") )//3
	{
		case 0:{rappdev();
			break;
		}
	}
	switch(strcmp(strupr(rrseparate), "HACKER" ))//4
	{case 0:{rhacker();
			break;}	}
	switch(strcmp(strupr(rrseparate), "CASHIER" ))//5
	{case 0:{rcashier();
			break;}	}
	switch(strcmp(strupr(rrseparate), "COMPUTER SCIENTIEST" ))//6
	{case 0:{rscientiest();
			break;}	}
	switch(strcmp(strupr(rrseparate), "CIO" ))//7
	{case 0:{rcio();
			break;}	}
	switch(strcmp(strupr(rrseparate), "Project Manager" ))//8
	{	case 0:{rprojectmanager();
			break;}	}	
	switch(strcmp(strupr(rrseparate), "ENGINEER" ))//9
	{case 0:{rengineer();
			break;	}}
	switch(strcmp(strupr(rrseparate), "HACKER" ))//10
	{case 0:{rhacker();
			break;}
	}
}//ending of switch case


}

void functioncall(){
		HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
		int ap,ca,ci,en,hk,hp,mg,pjmg,cs,wd;
  mg  =	mgrslry();//1
  ap=  appdevslry();//2
  ca=  csslry();//3
  ci=cioslry();//4
  en=erslry();//5
  hk=hkslry();//6
  hp=hpslry();//7
  pjmg=pjmjslry();//8
  wd=wdslry();//9
  cs=scslry();//10
  SetConsoleTextAttribute(hCon, 1);
  printf("  ******************************************************\n");
	printf("  ======================================================\n");
	printf( "  Post of employee\tTotal Attendance\tSalary");
	printf("\n");
	SetConsoleTextAttribute(hCon, 4);
	printf("\n =>CIO  \t\t\t%d\t\tRs.%d",ci,ci*1500);
	printf("\n =>Manager  \t\t\t%d\t\tRs.%d",mg,mg*1333);
	printf("\n =>Computer Scientiest  \t%d\t\tRs.%d",cs,cs*1200);
	printf("\n =>App dev  \t\t\t%d\t\tRs.%d",ap,ap*1000);
	printf("\n =>Web dev  \t\t\t%d\t\tRs.%d",wd,wd*1000);
	printf("\n =>Proj.Mgr  \t\t\t%d\t\tRs.%d",pjmg,pjmg*1000);
	printf("\n =>Engineer  \t\t\t%d\t\tRs.%d",en,en*1000);
	printf("\n =>Hacker  \t\t\t%d\t\tRs.%d",hk,hk*1000);
	printf("\n =>Cashier   \t\t\t%d\t\tRs.%d",ca,ca*714);	
	printf("\n =>Helper   \t\t\t%d\t\tRs.%d",hp,hp*714);
	SetConsoleTextAttribute(hCon, 15);
	char suraj;
	printf("\n\nNOTE:If All The Employees Have Received Their Salary\nBetter Reset The details");
	printf("\n Press any other kry to go to main Menu\n");
	printf("If The Attendance Detail And salary should be Totally Reset\nPress r\n=>");
	suraj=getche();
	if(suraj=='r'){
		printf("\n\t=>DO you really wish To Proceed?\n\t=>Note:The Action cannot be Undone\n");
		printf("\n\tPress y to continue\n->");
		char laptop;
		laptop=getch();
		if(laptop=='y'){
			reseteverything();
			printf("\n\n\tSucess...");
			
		}
	}
}
void rangers(){
	char chh;
	HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hCon, 2);
		char rssss;
	char crooked[20];
	int opa,i;
	printf("*****************************\n");
printf("|Welcome To The Login Screen|\n");
	printf("*****************************\n");
	passworrrr:
			SetConsoleTextAttribute(hCon, 5);
	printf("\nPassword:");
	SetConsoleTextAttribute(hCon, 6);
gets(crooked);
FILE*fptr;
char getlskey[30];
fptr=fopen("everwing\\password\\password.exe","r");
fgets(getlskey,30,fptr);
fclose(fptr);

if(strcmp(crooked,getlskey)==0){
	printf("\n\tYou Are Welcome");
	system("cls");
}
else{
	system("cls");
		SetConsoleTextAttribute(hCon, 7);
	printf("\n Please Enter A Valid Password\n\t||**OR**||");
	Sleep(1000);
	system("cls");
	printf("\nPress Any key To Login again");
	printf("\nPress r to reset Password\n");
	rssss=getch();
	switch(rssss){
		case 'r':{
			system("cls");
			renewpassword();
			break;
		}
		default:{system("cls");
	goto 	passworrrr;
			break;
		}
	}
}	
}

void addmoney(){
printf("\nWhy is S/he absent?\n");
		printf("Call Him/her And find whats the problem(^_^)\n");
printf("Whats the reason?\n*Press the number for operation\n1.Sickness\n2.Leave for family function or else\n3.Other\n");	
	
}
void muchmoney(){
	printf("\nRs.500 is going to be added in his/her salary\n");
		printf("Please wait..");
}

// addmoney();

void photoshop(){

  printf("  ******************************************************\n");
	printf("  ======================================================\n");
	printf( "  Post of employee\tTotal Attendance\tSalary");
}


void cortana(){
		FILE*fptr;
char werewolve[25];
char psd;
titanium:
	system("cls");
printf("Whose Database is to be looked at?\n =>");
gets(werewolve);
switch(strcmp(strupr(werewolve),"MANAGER")){
	case 0:photoshop();
	int mg;
	    mg =mgrslry();
		printf("\n =>Manager  \t\t\t%d\t\tRs.%d",mg,mg*1333);//done
		printf("\n\nPress r to instantly Reset The Details\n=>");
		char mg1;
		mg1=getche();
		if(mg1=='r'){
	fptr=fopen("everwing\\manager\\attend.exe","w+");
    fprintf(fptr,"0");
    fclose(fptr);
				}
		break;
}
switch(strcmp(strupr(werewolve),"CIO")){
	case 0:photoshop();
	int ci;
	ci=cioslry();
	printf("\n =>CIO  \t\t\t%d\t\tRs.%d",ci,ci*1500);
	printf("\n\nPress r to instantly Reset The Details\n=>");
		char ci1;
		ci1=getche();
		if(ci1=='r'){
	fptr=fopen("everwing\\manager\\attend.exe","w+");
    fprintf(fptr,"0");
    fclose(fptr);}
	break;}
switch(strcmp(strupr(werewolve),"COMPUTER SCIENTIEST")){
	case 0:photoshop();
	int cs;
	  cs=scslry();//10
			printf("\n =>Computer Scientiest  \t%d\t\tRs.%d",cs,cs*1200);
			printf("\n\nPress r to instantly Reset The Details\n=>");
		char cs1;
		cs1=getche();
		if(cs1=='r'){
	fptr=fopen("everwing\\manager\\attend.exe","w+");
    fprintf(fptr,"0");
    fclose(fptr);}
			break;
	
}
switch(strcmp(strupr(werewolve),"APP DEVELOPER")){
	case 0: photoshop();
	int ap;
	  ap =  appdevslry();//2
	printf("\n =>App dev  \t\t\t%d\t\tRs.%d",ap,ap*1000);
	printf("\n\nPress r to instantly Reset The Details\n=>");
		char ap1;
		ap1=getche();
		if(ap1=='r'){
	fptr=fopen("everwing\\manager\\attend.exe","w+");
    fprintf(fptr,"0");
    fclose(fptr);}
	break;
}
switch(strcmp(strupr(werewolve),"WEB DEVELOPER")){
	case 0: photoshop();
	int wd;
	wd=wdslry();
	printf("\n =>Web dev  \t\t\t%d\t\tRs.%d",wd,wd*1000);
	printf("\n\nPress r to instantly Reset The Details\n=>");
		char wd1;
		wd1=getche();
		if(wd1=='r'){
	fptr=fopen("everwing\\manager\\attend.exe","w+");
    fprintf(fptr,"0");
    fclose(fptr);}
		break;
	
}
switch(strcmp(strupr(werewolve),"PROJECT MANAGER")){
	case 0:photoshop();
	int pjmg=pjmjslry();
	 	printf("\n =>Proj.Mgr  \t\t\t%d\t\tRs.%d",pjmg,pjmg*1000);
	 	printf("\n\nPress r to instantly Reset The Details\n=>");
		char pjmg1;
		pjmg1=getche();
		if(pjmg1=='r'){
	fptr=fopen("everwing\\manager\\attend.exe","w+");
    fprintf(fptr,"0");
    fclose(fptr);}
		break;
}
switch(strcmp(strupr(werewolve),"ENGINEER")){
	case 0:photoshop();
	int en;
	  en=erslry();//5
	printf("\n =>Engineer  \t\t\t%d\t\tRs.%d",en,en*1000);
	printf("\n\nPress r to instantly Reset The Details\n=>");
		char er1;
		er1=getche();
		if(er1=='r'){
	fptr=fopen("everwing\\manager\\attend.exe","w+");
    fprintf(fptr,"0");
    fclose(fptr);}
	break;}
switch(strcmp(strupr(werewolve),"HACKER")){
	case 0:photoshop();
	int   hk=hkslry();//6
	printf("\n =>Hacker  \t\t\t%d\t\tRs.%d",hk,hk*1000);
	printf("\n\nPress r to instantly Reset The Details\n=>");
		char hk1;
		hk1=getche();
		if(hk1=='r'){
	fptr=fopen("everwing\\manager\\attend.exe","w+");
    fprintf(fptr,"0");
    fclose(fptr);}
	break;}
switch(strcmp(strupr(werewolve),"CASHIER")){
	case 0:photoshop();
	int  ca=  csslry();//3
			printf("\n =>Cashier   \t\t\t%d\t\tRs.%d",ca,ca*714);	
			printf("\n\nPress r to instantly Reset The Details\n=>");
		char cs1;
		cs1=getche();
		if(cs1=='r'){
	fptr=fopen("everwing\\manager\\attend.exe","w+");
    fprintf(fptr,"0");
    fclose(fptr);}
			break;	}
switch(strcmp(strupr(werewolve),"HELPER")){
	case 0:photoshop();
	int   hp=hpslry();//7
		printf("\n =>Helper   \t\t\t%d\t\tRs.%d",hp,hp*714);
		printf("\n\nPress r to instantly Reset The Details\n=>");
		char hp1;
		hp1=getche();
		if(hp1=='r'){
	fptr=fopen("everwing\\manager\\attend.exe","w+");
    fprintf(fptr,"0");
    fclose(fptr);}
break;	
}

printf("\n\nWanna look\edit more?\nPress y to look more\n");
psd=getch();
if(psd=='y'){
	system("cls");
	goto titanium;
}
}
void reseteverything(){
FILE*fptr;
fptr=fopen("everwing\\manager\\attend.exe","w+");
fprintf(fptr,"0");
fclose(fptr);
fptr=fopen("everwing\\webdev\\attend.exe","w+");
fprintf(fptr,"0");
fclose(fptr);
fptr=fopen("everwing\\appdev\\attend.exe","w+");
fprintf(fptr,"0");
fclose(fptr);
fptr=fopen("everwing\\hacker\\attend.exe","w+");
fprintf(fptr,"0");
fclose(fptr);
fptr=fopen("everwing\\engineer\\attend.exe","w+");
fprintf(fptr,"0");
fclose(fptr);
fptr=fopen("everwing\\cashier\\attend.exe","w+");
fprintf(fptr,"0");
fclose(fptr);
fptr=fopen("everwing\\helper\\attend.exe","w+");
fprintf(fptr,"0");
fclose(fptr);
fptr=fopen("everwing\\scientiest\\attend.exe","w+");
fprintf(fptr,"0");
fclose(fptr);
fptr=fopen("everwing\\cio\\attend.exe","w+");
fprintf(fptr,"0");
fclose(fptr);
fptr=fopen("everwing\\projectmgr\\attend.exe","w+");
fprintf(fptr,"0");
fclose(fptr);
}





