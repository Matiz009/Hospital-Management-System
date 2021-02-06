#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include "patient.h"



//Doctor's Records Department functions prototypes
int loadDoctor();
void addDoctor();
void searchDoctor();
void viewDoctor();
FILE *fptr;
struct doctor
{
    char dId[10];
    char dName[50];
};
 struct doctor d;

 //Employee's Records Department functions prototypes
int loadEmployee_Menu();
void addEmployee();
void searchEmployee();
void viewEmployee();

FILE *fptrE;

struct employee
{
    char eId[10];
    char eDname[50];
};
 struct employee e;

// Parking Management Department functions definitions
int noCy=0,noB=0,noR=0,noC=0,amount=0,countP=0; //count basically counts the total number of vehicles

void frontScreen()
{
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t*********************************");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Welcome To");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t HMSDP");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t*********************************");
    printf("\n\n\n\n\n\n\n Press any key to continue:\n");
    getch();
    system("cls");
}

void titlePage()
{
    printf("\n\n\t\t\t\t\t\t\t\t\t\t----------------------------------------------------------");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t        Hospital Management System      ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t----------------------------------------------------------");

}


int protectionbyUsername()
{
    char savedUser[20]="matiz";
    char user[20];

    printf(" Enter Username:\n");
    scanf("%s",&user);

    if(strcmp(user,savedUser)!=0)
    {
        printf("\n You have entered wrong username!\n");
        printf("\n Enter it again!");
        printf("\n Enter Username:\n");
        scanf("%s",&user);
    }

    if(strcmp(user,savedUser)!=0)
    {

        printf("\n You have entered wrong username!\n");
        printf("\n Last Try!");
        printf("\n Enter Username:\n");
        scanf("%s",&user);
    }

    if(strcmp(user,savedUser)!=0)
    {
        printf("\nSorry!!!\n");
        exit(0);
    }

     if(strcmp(user,savedUser)==0)
    {
        printf("\n\t\t\t\t\t\t Press Enter to continue!");
        getch();
    }


}

int protectionby



()
{
    int pass;

    printf(" Enter Password:\n");
    scanf("%d",&pass);

    if(pass!=123)
    {
        printf("\n You have entered wrong password!\n");
        printf("\n Enter it again!");
        printf("\n Enter Password:\n");
        scanf("%d",&pass);
    }

    if(pass!=123)
    {

        printf("\n You have entered wrong password!\n");
        printf("\n Last Try!");
        printf("\n Enter Password:\n");
        scanf("%d",&pass);
    }

    if(pass!=123)
    {
        printf("\nSorry!!!\n");
        exit(0);
    }

     if(pass==123)
    {
        printf("\n Login Successfully!");
        printf("\n\t\t\t\t\t\t Press Enter to continue!");
        getch();
        system("cls");
    }


}


int menuP()
{
    int optionP;

    printf("\nPress 1 for enter Cycle (10Rs):");
    printf("\nPress 2 for enter Bike (30Rs):");
    printf("\nPress 3 for enter Rickshaw (50Rs):");
    printf("\nPress 4 for enter Car (100Rs):");
    printf("\nPress 5 for showing status:");
    printf("\nPress 6 for deleting data:");
    printf("\nPress 7 for exit:");
    printf("\n\n\n Enter any option to continue:");
    scanf("%d",&optionP);

    return optionP;
}

void deleteData()
{
    noCy=0;
    noB=0;
    noR=0;
    noC=0;
    amount=0;
    countP=0;

    printf("\n Total number of cycles: %d\n",noCy);
    printf("\n Total number of bikes: %d\n",noB);
    printf("\n Total number of rickshaws: %d\n",noR);
    printf("\n Total number of cars: %d\n",noC);
    printf("\n Total number of vehicles: %d\n",noCy+noB+noR+noC);
    printf("\n Total amount earned: %d\n",amount);
    printf("\n \t \t \tEnd of Day!\n\n");
}

void status()
{
    printf("\n Total number of cycles: %d\n",noCy);
    printf("\n Total number of bikes: %d\n",noB);
    printf("\n Total number of rickshaws: %d\n",noR);
    printf("\n Total number of cars: %d\n",noC);
    printf("\n Total number of vehicles: %d\n",noCy+noB+noR+noC);
    printf("\n Total amount earned: %d\n",amount);
}

void cycle()
{
  printf("\nEntry Successful!!!\n");
  noCy++;
  amount=amount+10;
  countP++;
}

void bike()
{
  printf("\nEntry Successful!!!\n");
  noB++;
  amount=amount+30;
  countP++;
}

void rickshaw()
{
  printf("\nEntry Successful!!!\n");
  noR++;
  amount=amount+50;
  countP++;
}

void car()
{
  printf("\nEntry Successful!!!\n");
  noC++;
  amount=amount+100;
  countP++;
}


//Patient's Entry Department functions prototypes

void add();

void view();

void search();

void edit();

void delet();

void show();

void write();

void read();

void user();

void protection();



//Pharmaceutical Department functions prototypes
struct Medicine{

int id,price,quantity;

char medicneName[100],Company[100],Mfg_Date[11],Exp_Date[11],info[5000];

}m[100];

void PurchaseMedicine(int number);

void EnterInfoAboutMedicine(int number);

void StockOfMedicine(int number);

void KnowInfoAboutMedicine(int number);

void AddMedicineinStore(int number,struct Medicine m[]);

void DeleteMedicineStore(int number);

void ChangeMedicineDetails(int number);


int protectionbyUsername_H();

int protectionbyPassword_H();


//Project Functions
int projectMenu()
{
    int projectChoice;

    printf("\n Press 1 for Patient's Entry Department!!!");
    printf("\n Press 2 for Doctor's Records Department!!!");
    printf("\n Press 3 for Pharmaceutical Department!!!");
    printf("\n Press 4 for Employee's Records Department!!!");
    printf("\n Press 5 for Parking Management Department!!!");
    printf("\n Press 6 for exiting!!!");

    printf("\n Where you like to go :):):):\n");
    scanf("%d",&projectChoice);

    return projectChoice;

}


int main()
{
    frontScreen();
    titlePage();

    printf("\n\n");

    getch();
    while(1)

    {
        switch(projectMenu())

        {

         //switch Project
        case 1:

            {
                system("cls");

                    read();

    int c,i,q;

    printf(" \n\n\n\n \t       ********************** Welcome to Patient's Entry System *********************\n");



    Sleep(2000);


    system("cls");


	user();

    Sleep(200);


    system("cls");

 	 protection();

     Sleep(200);


    system("cls");


    while(c!=6)
    {

        printf("**Choose your option**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. Exit\n\nChoose your Option=");

        scanf("%d",&c);// it is because that we need to give choices for selection

        fflush(stdin);//to clear the output buffer and move the data to console

        if(c==1)//add

        {
        	 printf(" \n\n\n\n \t    \t\t\t\t   *******************************W	O R K I N G  *********************\n");

             Sleep(1000);

             system("cls");

             add();
        }
        else if(c==2)//view
        {
        	 printf(" \n\n\n\n \t    \t\t\t\t   *******************************W	O R K I N G  *********************\n");


        	 Sleep(1000);

             system("cls");

             view();
        }
        else if(c==3)//search

        {
        	 printf(" \n\n\n\n \t    \t\t\t\t   *******************************W	O R K I N G  *********************\n");

        	 Sleep(1000);

             system("cls");

             search();
        }
        else if(c==4)//edit
        {
        	 printf(" \n\n\n\n \t    \t\t\t\t   *******************************W	O R K I N G  *********************\n");

        	 Sleep(1000);

             system("cls");

             edit();
        }
        else if(c==5)//delete
        {
        	 printf(" \n\n\n\n \t    \t\t\t\t   *******************************W	O R K I N G  *********************\n");

        	 Sleep(1000);

             system("cls");

             delet();

        }

        else if(c==6)

        {

            write();

            return 0;
        }
        else
        {

            system("cls");

            printf("\n\nInvalid input , try again ");
        }

        printf("\n\n");
    }



            }

        //switch Project
        case 2:

            {
                system("cls");

                printf("\t\t\t\t\t\t**Encrypted by Masterminds**\n");

                printf("\n\n");

                protectionbyUsername();
                getch();
                printf("\n\n");
                protectionbyPassword();

                printf("\n\n\t\t\t\t\t\t\t\t******************* Welcome to Doctor's Record System *******************");

                printf("\n\n\n\n\n");

                printf("Press any key to continue :)\n\n");
                getch();

                system("cls");

                printf("\n\n\t\t\t\t\t\t\t\t******************* Welcome to Doctor's Record System *******************");

                printf("\n\n\n\n\n");

                while(1)
    {
        switch(loadDoctor())
        {
        case 1:
            {
                addDoctor();
                break;
            }
        case 2:
            {
                viewDoctor();
                break;
            }
        case 3:
            {
                searchDoctor();
                break;
            }
        case 4:
            {
                printf("\n Exiting...");
                exit(0);
            }
        default:
            {
                printf("\n Invalid key :(:(:(\n");
            }
    }
}


            }
           //switch Project
        case 3:
            {
                system("cls");

                printf(" \n\t\t\t\t\t\t\t\t********************** Welcome to Pharmaceutical Department *********************\n");

                int i,j,choice,number=0,c;

for(i=0;i<100;i++)

{

m[i].id=0;

m[i].price=0;

m[i].quantity=0;

strcpy(m[i].Mfg_Date,"");

strcpy(m[i].Exp_Date,"");

strcpy(m[i].medicneName,"");

strcpy(m[i].Company,"");

strcpy(m[i].info,"");

}

m[0].id=1;

m[0].price=120;

m[0].quantity=30;

strcpy(m[0].Mfg_Date,"23-04-2016");

strcpy(m[0].Exp_Date,"24-04-2020");

strcpy(m[0].medicneName,"Paracetmol");

strcpy(m[0].Company,"ABCD");

strcpy(m[0].info,"Good Medicine for Fever");

do{

printf("Enter\n1 - Purchase Medicine\n2 - Enter Information about a Medicine\n3 - Stock of Medicine in Store\n4 - Medicine Information\n5 - Add Medicine\n6 - Delete a Medicine\n7 - Change Quantity of Medicine\n");

scanf("%d",&choice);

switch(choice)

{

case 1:

{

PurchaseMedicine(number+1);

break;

}

case 2:

{

EnterInfoAboutMedicine(number+1);

break;

}

case 3:

{

StockOfMedicine(number+1);

break;

}

case 4:

{

KnowInfoAboutMedicine(number+1);

break;

}

case 5:

{

++number;

AddMedicineinStore(number,m);

break;

}

case 6:

{

DeleteMedicineStore(number+1);

break;

}

case 7:

{

ChangeMedicineDetails(number+1);

break;

}

}

printf("To Continue with different Options Enter 1 Else some other number\n");

scanf("%d",&c);

}while(c==1);



            }




            //switch Project
        case 4:
            {
                system("cls");

                printf("\t\t\t\t\t\t**Encrypted by Masterminds**\n");

                printf("\n\n");

                protectionbyUsername();
                getch();
                printf("\n\n");
                protectionbyPassword();

                printf("\n\n\t\t\t\t\t\t\t\t******************* Welcome to Employee's Record System *******************");

                printf("\n\n\n\n\n");

                printf("Press any key to continue :)\n\n");
                getch();

                system("cls");

                printf("\n\n\t\t\t\t\t\t\t\t******************* Welcome to Employee's System *******************");

                printf("\n\n\n\n\n");


                while(1)
    {
        switch(loadEmployee_Menu())
        {
        case 1:
            {
                addEmployee();
                break;
            }
        case 2:
            {
                viewEmployee();
                break;
            }
        case 3:
            {
                searchEmployee();
                break;
            }
        case 4:
            {
                printf("\n Exiting...");
                exit(0);
            }
        default:
            {
                printf("\n Invalid key :(:(:(\n");
            }
    }
}


            }
         // switch Project
        case 5:
            {
                system("cls");

                printf("\t\t\t\t\t\t**Encrypted by Masterminds**\n");

    printf("\n\n");

    protectionbyUsername();

    printf("\n\n");

    protectionbyPassword();

 printf("\n\n\t\t\t\t\t\t\t\t******************* Welcome to Parking Management System *******************");

 printf("\n\n\n\n\n");

 printf("Press any key to continue :)\n\n");
 getch();

 system("cls");

 printf("\n\n\t\t\t\t\t\t\t\t******************* Welcome to Parking Management System *******************");

 printf("\n\n\n\n\n");

 while(1)
 {

 switch(menuP())
 {
 case 1:
     {
         cycle();
         break;

     }
 case 2:
    {
        bike();
        break;

    }
 case 3:
    {
        rickshaw();
        break;
    }
 case 4:
    {
        car();
        break;
    }
 case 5:
    {
        status();
        break;
    }
 case 6:
    {
        deleteData();
        break;
    }
 case 7:
    {
        main();
    }
 default:
    {
        printf("You have entered invalid option!!!");

    }

    getch();

    }
 }

            }



            //switch Project
            case 6:
                {
                    printf("\n Exiting :(:(:(");
                    exit(0);
                }


        }
    }
}




// Doctor's Records Department functions definitions
int loadDoctor()
{
    int dChoice;

    printf("\n --Doctor's Records-- \n");

    printf("Press 1 for adding record :)\n");
    printf("Press 2 for viewing records :)\n");
    printf("Press 3 for searching records :)\n");
    printf("Press 4 for exiting :(\n");

    printf("Press the desired key :):):)\n");
    scanf("%d",&dChoice);

    return dChoice;

}



void addDoctor()
{
    system("cls");

    fptr=fopen("Doctor Record.txt","a");

    if(fptr==NULL)
    {
        printf("\n File path is not found!!!");
        printf("\n\n Sorry we cannot continue...");
        printf("\n\n Try again by a right path :)");
    }
    else
    {
        printf("\n\n\n\t\t\t --Add Doctor's Records--");

        printf("\n Enter Doctor's ID:");
        fflush(stdin);
        gets(d.dId);

        printf("\n Enter Department's Name:");
        fflush(stdin);
        gets(d.dName);

        fscanf(fptr,"%s %s\n\n",d.dId,d.dName);
        fprintf(fptr,"%s %s\n\n",d.dId,d.dName);

        fclose(fptr);

        getch();

        main();
    }

}


void searchDoctor()
{
    char searchId[10];

    system("cls");

   fptr=fopen("Doctor Record.txt","r");

    if(fptr==NULL)
    {
        printf("\n File path is not found!!!");
        printf("\n\n Sorry we cannot continue...");
        printf("\n\n Try again by a right path :)");
    }
    else
    {
        printf("\n\n\n\t\t\t --Search Doctor's Records--");

        printf("\n Enter Doctor's ID:");
        fflush(stdin);
        gets(searchId);

        printf("\nID        Department's Name");

        while(!feof(fptr))
        {
            fscanf(fptr,"%s %s",&d.dId,&d.dName);

            if(strcmp(d.dId,searchId)==0)
            {
                printf("\n%s      %s",d.dId,d.dName);
            }
        }

        printf("\n\n");

        fclose(fptr);

        getch();

        main();

    }

}

void viewDoctor()
{
    system("cls");

    fptr=fopen("Doctor Record.txt","r");

    if(fptr==NULL)
    {
        printf("\n File path is not found!!!");
        printf("\n\n Sorry we cannot continue...");
        printf("\n\n Try again by a right path :)");
    }
    else
    {
         printf("\n\n\n\t\t\t --View Doctor's Records--");

         printf("\nID        Department's Name");

         while(fscanf(fptr,"%s %s",d.dId,d.dName)!=EOF)
         {
             printf("\n%s      %s",d.dId,d.dName);
         }

         printf("\n\n");

         fclose(fptr);

         getch();

         main();

    }

}




// Employee's Records Department functions definitions
int loadEmployee_Menu()
{
    int eChoice;

    printf("\n --Employee's Records-- \n");

    printf("Press 1 for adding record :)\n");
    printf("Press 2 for viewing records :)\n");
    printf("Press 3 for searching records :)\n");
    printf("Press 4 for exiting :(\n");

    printf("Press the desired key :):):)\n");
    scanf("%d",&eChoice);

    return eChoice;

}



void addEmployee()
{
    system("cls");

    fptrE=fopen("Employee Record.txt","a");

    if(fptrE==NULL)
    {
        printf("\n File path is not found!!!");
        printf("\n\n Sorry we cannot continue...");
        printf("\n\n Try again by a right path :)");
    }
    else
    {
        printf("\n\n\n\t\t\t --Add Employee's Records--");

        printf("\n Enter Employee's ID:");
        fflush(stdin);
        gets(e.eId);

        printf("\n Enter Department's Name:");
        fflush(stdin);
        gets(e.eDname);

        fscanf(fptrE,"%s %s\n\n",e.eId,e.eDname);
        fprintf(fptrE,"%s %s\n\n",e.eId,e.eDname);

        fclose(fptrE);

        getch();

        main();
    }

}



void searchEmployee()
{
    char searchEid[10];

    system("cls");

   fptrE=fopen("Employee Record.txt","r");

    if(fptrE==NULL)
    {
        printf("\n File path is not found!!!");
        printf("\n\n Sorry we cannot continue...");
        printf("\n\n Try again by a right path :)");
    }
    else
    {
        printf("\n\n\n\t\t\t --Search Employee's Records--");

        printf("\n Enter Employee's ID:");
        fflush(stdin);
        gets(searchEid);

        printf("\nID        Department's Name");

        while(!feof(fptrE))
        {
            fscanf(fptrE,"%s %s",&e.eId,&e.eDname);

            if(strcmp(e.eId,searchEid)==0)
            {
                printf("\n%s      %s",e.eId,e.eDname);
            }
        }

        printf("\n\n");

        fclose(fptrE);

        getch();

        main();

    }

}

void viewEmployee()
{
    system("cls");

    fptrE=fopen("Employee Record.txt","r");

    if(fptrE==NULL)
    {
        printf("\n File path is not found!!!");
        printf("\n\n Sorry we cannot continue...");
        printf("\n\n Try again by a right path :)");
    }
    else
    {
         printf("\n\n\n\t\t\t --View Employee's Records--");

         printf("\nID        Department's Name");

         while(fscanf(fptrE,"%s %s",e.eId,e.eDname)!=EOF)
         {
             printf("\n%s      %s",e.eId,e.eDname);
         }

         printf("\n\n");

         fclose(fptrE);

         getch();

         main();

    }

}













//Patient's Entry Department functions definitions

void add()

{
    printf("\n\n");

    printf("Already data inputed  =%d\n\n",num);//how many inputs

    printf("How many entries  you want to add=\n");

    scanf("%d",&n);

    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {

        printf("\n");

        fflush(stdin);

        printf("Enter patient's Name = ");

        gets(x[i].name);

        fflush(stdin);

        printf("Enter disease = ");

        gets(x[i].disease);

        fflush(stdin);

        printf("Enter the age = ");

        scanf("%d",&x[i].age);

        fflush(stdin);

        printf("Enter room no = ");

        scanf("%d",&x[i].room);

        fflush(stdin);

        fflush(stdin);

        printf("\n");

       j++;

       a++;

       num++;
    }
}

	void view()
{
    for(i=0; i<num; i++)

    {
        printf("\n");

        printf("Serial Number=%d\n",i);

        printf("Name = ");

        puts(x[i].name);

        printf("Disease = ");

        puts(x[i].disease);

        printf("Room no = %d\nAge=%d",x[i].room,x[i].age);

        printf("\n\n");
    }
}

	void edit()
{
    int q,p;

    fflush(stdin);

    printf("What do you want to edit ?\n");

    printf("Choose your option\n");

    printf("1.Name\n2.Disease\n3.Age\n4.Room\n");

    printf("Option=");

    scanf("%d",&q);//option

    if(q<=5)

    {
        printf("Enter the serial no of that patient= (0 - %d)=",num-1);

        scanf("%d",&p);//serial number

        if(p<num)

        {

            if(q==1)

            {

                fflush(stdin);

                printf("Enter the new name=");

                gets(x[p].name);

            }

            else if(q==2)

            {

                fflush(stdin);

                printf("Enter the new Disease=");

                gets(x[p].disease);
            }

            else if(q==3)

            {
                fflush(stdin);

                printf("Enter the new Age=");

                scanf("%d",&x[p].age);
            }

            else if(q==4)

            {

                fflush(stdin);

                printf("Enter the new Room no=");

                scanf("%d",&x[p].room);
            }


        }

        else

        {

            printf("\n\nInvalid Serial \nTry Again !!\n\n");

        }
    }

    else

    {

        printf("\n\nInvalid option\nTry Again!!\n\n");

    }
}

void search()

{

    int s,h,f;

    char u[100];

    printf(" What do you want to search ?\n");

    printf("1.Serial no.\n2.Name\n3.Disease\n4.Room no.\n5.Age\n\nOption = ");

    scanf("%d",&h);

    if(h==1)

    {


        printf("Enter Serial number of the patient=");

        scanf("%d",&s);

        if(s<num)

        {

            printf("\n");

            printf("Serial Number=%d\n",s);

            printf("Name = ");

            puts(x[s].name);

            printf("Disease = ");

            puts(x[s].disease);

            printf("Room no = %d\nAge = %d",x[s].room,x[s].age);

            printf("\n\n");
        }

        else

            printf("\n\nNot Found\n\n");

    }

    else if(h==2)

    {

        int f=1;

        fflush(stdin);

        printf("Enter your name=");

        gets(u);

        fflush(stdin);

        for(g=0; g<num; g++)

        {

            if(strcmp(u,x[g].name)==0)

            {
                printf("\n");

                printf("Serial Number=%d\n",g);

                printf("Name = ");

                puts(x[g].name);

                printf("Disease = ");

                puts(x[g].disease);

                printf("Room no = %d\nAge = %d",x[g].room,x[g].age);

                printf("\n\n");

                f=0;

            }
        }

        if(f==1)

            printf("\nNot Found\n");



    }

    else if(h==3)

    {
        int f=1;

        fflush(stdin);

        printf("Enter Disease = ");

        gets(u);

        fflush(stdin);

        for(g=0; g<num; g++)

        {

            if(strcmp(u,x[g].disease)==0)

            {
                printf("\n");

                printf("Serial Number=%d\n",g);

                printf("Name = ");

                puts(x[g].name);

                printf("Disease = ");

                puts(x[g].disease);

                printf("Room no = %d\nAge = %d",x[g].room,x[g].age);

                printf("\n\n");

                f=0;
            }


        }

        if(f==1)

            printf("\nNot Found\n");


    }

    else if(h==4)

    {
        int f=1;

        printf("Enter Room number = ");

        scanf("%d",&f);

        for(g=0; g<num; g++)
        {
            if(f==x[g].room)
            {
                printf("\n");

                printf("Serial Number=%d\n",g);

                printf("Name = ");

                puts(x[g].name);

                printf("Disease = ");

                puts(x[g].disease);

                printf("Room no = %d\nAge = %d",x[g].room,x[g].age);//usage of dot operator

                printf("\n\n");

                f=0;
            }

        }

        if(f==1)

            printf("Not Found\n\n");


    }

    else if(h==5)

    {

        int f=1;

        printf("Enter Phone number = ");

        scanf("%d",&f);

        for(g=0; g<num; g++)

        {


        }

        if(f==1)

            printf("Not Found");

    }

    else if(h==6)

    {

        int f=1;

        printf("Enter Age = ");

        scanf("%d",&f);

        for(g=0; g<num; g++)

        {

            if(f==x[g].age)

            {
                printf("\n");

                printf("Serial Number=%d\n",g);

                printf("Name = ");

                puts(x[g].name);

                printf("Disease = ");

                puts(x[g].disease);

                printf("Room no = %d\nAge = %d",x[g].room,x[g].age);

                printf("\n\n");

                f=0;
            }

        }

        if(f==1)

            printf("Not Found\n\n");


    }

    else

        printf("\n\nInvalid input\n\n");





}
void delet()
{
    int f,h;//integers used in this function

    printf("Enter the serial number of the patient that you want to delete=");

    scanf("%d",&f);

    if(f<num)

    {

        printf("What do you want to do ?\n");

        printf("1.Remove the whole record\n2.Remove Name only\n3.Remove Disease only\n4.Remove age only\n5.Remove room only\nOption = ");

        scanf("%d",&h);

        if(h==1)

        {

            while(f<num)

            {
                strcpy(x[f].name,x[f+1].name);

                strcpy(x[f].disease,x[f+1].disease);

                x[f].age=x[f+1].age;

                x[f].room=x[f+1].room;



                f++;

            }

            num--;

        }

        else if(h==2)

        {
            strcpy(x[f].name,"Cleared");

        }

        else if(h==3)
        {
            strcpy(x[f].disease,"Cleared");
        }

        else if(h==4)

        {
            x[f].age=0;

        }
        else if(h==5)
        {
            x[f].room=0;

        }


    }

    else
        printf("\n\nInvalid Serial number\n");

}


void write()

{

    FILE *fproject = fopen("patient.txt","w");

    if(fproject == NULL)

    {

        printf("Error");

        exit(1);
    }

    fwrite(x, sizeof(struct ad),num, fproject);


    fclose(fproject);
}

void read()


{

    FILE *fproject = fopen("patient.txt","r");

    if(fproject == NULL)

    {

        //create empty file, so that we can open it
        //in the next execution of this program

        fproject = fopen("patient.txt","w");

        fclose(fproject);

        printf("File does not exist exiting...\n\n\n");



    }

    num = fread(x, sizeof(struct ad),100, fproject);

    fclose(fproject);

}



void user()  {


    char savedUser[20]="matiz";

    char user[20];


    printf(" Enter Username:\n");

    scanf("%s",&user);


    if(strcmp(user,savedUser)!=0)

    {
        printf("\n You have entered wrong username!\n");

        printf("\n Enter it again!");

        printf("\n Enter Username:\n");

        scanf("%s",&user);
    }

    if(strcmp(user,savedUser)!=0)

    {

        printf("\n You have entered wrong username!\n");

        printf("\n Last Try!");

        printf("\n Enter Username:\n");

        scanf("%s",&user);
    }

    if(strcmp(user,savedUser)!=0)

    {

        printf("\nSorry!!!\n");

        exit(0);
    }

     if(strcmp(user,savedUser)==0)
    {
        printf("\n\t\t\t\t\t\t Press Enter to continue!");

        getch();
    }



}


void protection()

{
    char pass[20]="123";

    char pass2[20];


    printf(" Enter Password:\n");
    fflush(stdin);
    gets(pass2);



    if(strcmp(pass2,pass)!=0)

    {

        printf("\nSorry!!!\n");

        exit(0);
    }

     if(strcmp(pass2,pass)==0)
    {
        printf("\n\t\t\t\t\t\t Press Enter to continue!");

        getch();
    }



}

// Pharmaceutical Department functions definitions





int protectionbyUsername_H()
{
    char savedUser[20]="matiz";
    char user[20];

    printf(" Enter Username:\n");
    scanf("%s",&user);

    if(strcmp(user,savedUser)!=0)
    {
        printf("\n You have entered wrong username!\n");
        printf("\n Enter it again!");
        printf("\n Enter Username:\n");
        scanf("%s",&user);
    }

    if(strcmp(user,savedUser)!=0)
    {

        printf("\n You have entered wrong username!\n");
        printf("\n Last Try!");
        printf("\n Enter Username:\n");
        scanf("%s",&user);
    }

    if(strcmp(user,savedUser)!=0)
    {
        printf("\nSorry!!!\n");
        exit(0);
    }

     if(strcmp(user,savedUser)==0)
    {
        printf("\n\t\t\t\t\t\t Press Enter to continue!");
        getch();
    }


}

int protectionbyPassword_H()
{
    int pass;

    printf(" Enter Password:\n");
    scanf("%d",&pass);

    if(pass!=123)
    {
        printf("\n You have entered wrong password!\n");
        printf("\n Enter it again!");
        printf("\n Enter Password:\n");
        scanf("%d",&pass);
    }

    if(pass!=123)
    {

        printf("\n You have entered wrong password!\n");
        printf("\n Last Try!");
        printf("\n Enter Password:\n");
        scanf("%d",&pass);
    }

    if(pass!=123)
    {
        printf("\nSorry!!!\n");
        exit(0);
    }

     if(pass==123)
    {
        printf("\n Login Successfully!");
        printf("\n\t\t\t\t\t\t Press Enter to continue!");
        getch();
        system("cls");
    }


}

void PurchaseMedicine(int number)

{

int id,check,i,quantity,flag=0;

char name[100];

printf("Enter 1 if you know ID else some other number to enter Name of Medicine\n");

fflush(stdin);

scanf("%d",&check);

if(check==1)

{

printf("Enter Id to buy Medicine\n");

fflush(stdin);

scanf("%d",&id);

for(i=0;i<number;i++)

{

if(m[i].id==id)

{

flag=1;

int c;

printf("These are the details of Medicine\n");

printf("Name%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);

if(strcmp(m[i].info,"")==0)

{

printf("Medicine Review/Info=Not Available\n");

}

else

{

printf("Medicine Review/Info=%s\n",m[i].info);

}

printf("Do you need to buy %s \nIf Yes Enter 1 else some other number\n",m[i].medicneName);

fflush(stdin);

scanf("%d",&c);

if(c==1)

{

printf("Enter Quantity to Purchase\n");

scanf("%d",&quantity);

if(m[i].quantity>quantity)

{

printf("Total Price to be paid=%d\n",quantity*m[i].price);

}

else{

printf("Please Enter amount less then Available Quantity\n");

}

}

break;

}

}

if(flag==0)

{

printf("Entered Id Not Found\n");

}

}

else

{

printf("Enter Name to look and Purchase\n");

fflush(stdin);

gets(name);

for(i=0;i<number;i++)

{

if(strcmp(m[i].medicneName,name)==0)

{

flag=1;

int c;

printf("These are the details of Medicine\n");

printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);

if(strcmp(m[i].info,"")==0)

{

printf("Medicine Review/Info=Not Available\n");

}

else

{

printf("Medicine Review/Info=%s\n",m[i].info);

}

printf("Do you need to buy %s \nIf Yes Enter 1 else some other number\n",m[i].medicneName);

fflush(stdin);

scanf("%d",&c);

if(c==1)

{

printf("Enter Quantity to Purchase\n");

scanf("%d",&quantity);

if(m[i].quantity>quantity)

{

printf("Total Price to be paid=%d\n",quantity*m[i].price);

}

else{

printf("Please Enter amount less then Available Quantity\n");

}

}

break;

}

}

if(flag==0)

{

printf("Entered Name Not Found\n");

}

}

}

void EnterInfoAboutMedicine(int number)

{

int i,flag=0,c;

char name[100],info[100];

printf("Enter Name of the medication you need to Review or incorporate Info\n");

fflush(stdin);

gets(name);

for(i=0;i<number;i++)

{

if(strcmp(m[i].medicneName,name)==0)

{

flag=1;

printf("These are the details of Medicine\n");

printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);

if(strcmp(m[i].info,"")!=0)

{

printf("Review Already Available!\nIf you need to Add a Review Enter 1 else Any other number\n");

fflush(stdin);

scanf("%d",&c);

}

else

{

printf("Enter review(less than 100 Characters)\n");

fflush(stdin);

gets(m[i].info);

}

if(c==1)

{

printf("Enter review(less than 100 Characters)\n");

fflush(stdin);

gets(info);

strcat(m[i].info,"; ");

strcat(m[i].info,info);

}

}

}

if(flag==0)

{

printf("Entered Name Not Found\n");

}

}

void KnowInfoAboutMedicine(int number){

int i,flag=0;

char name[100];

printf("Enter Name of the medication you need to see Review and Info\n");

fflush(stdin);

gets(name);

for(i=0;i<number;i++)

{

if(strcmp(m[i].medicneName,name)==0)

{

flag=1;

printf("These are the details of Medicine\n");

printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);

if(strcmp(m[i].info,"")!=0)

{

printf("Review or Info=%s\n",m[i].info);

}

else

{

printf("Review or Info=Not Available\n");

}

}

}

if(flag==0)

{

printf("Entered Name Not Found\n");

}

}

void StockOfMedicine(int number){

int i;

if(number!=0)

{

printf("All Available Items are\n");

for(i=0;i<number;i++)

{

if(m[i].id!=0){

printf("Id=%d\nName=%s\t\tPrice=%d\tAvailable Quantity=%d\nCompany=%s\t\tMfg Date=%s\tExp Date=%s\n",m[i].id,m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);

if(strcmp(m[i].info,"")!=0)

{

printf("Review or Info=%s\n",m[i].info);

}

else

{

printf("Review or Info=Not Available\n");

}

}

}

}

else{

printf("No Items or Medicines Available\n");

}

}

void AddMedicineinStore(int number,struct Medicine m[])

{

char name[100];

printf("Enter Medicine Id\n");

scanf("%d",&(m[number].id));

fflush(stdin);

printf("Enter Medicine Name\n");

fflush(stdin);

gets(name);

strcpy(m[number].medicneName,name);

printf("Enter Company Name\n");

fflush(stdin);

gets(m[number].Company);

printf("Enter Manufactured Date\n");

fflush(stdin);

gets(m[number].Mfg_Date);

printf("Enter Expiry Date\n");

fflush(stdin);

gets(m[number].Exp_Date);

printf("Enter Quantity\n");

fflush(stdin);

scanf("%d",&(m[number].quantity));

printf("Enter Price\n");

fflush(stdin);

scanf("%d",&(m[number].price));

strcpy(m[number].info,"");

printf("Medicine with id %d Added Successfully\n",m[number].id);

}

void DeleteMedicineStore(int number)

{

int id,i,flag=0,num;

printf("Enter Id to be deleted\n");

fflush(stdin);

scanf("%d",&id);

for(i=0;i<number;i++)

{

if(m[i].id==id)

{

flag=1;

m[i].id=0;

m[i].price=0;

m[i].quantity=0;

strcpy(m[i].medicneName,"");

strcpy(m[i].Company,"");

strcpy(m[i].Mfg_Date,"");

strcpy(m[i].Exp_Date,"");

strcpy(m[i].info,"");

num=i;

break;

}

}

if(flag==1)

{

printf("Medicine with %d is Deleted Successfully\n",id);

}

}

void ChangeMedicineDetails(int number)

{

int id,quantity,choice,c,i;

printf("Enter id to change Details\n");

scanf("%d",&id);

for(i=0;i<number;i++)

{

if(m[i].id==id && m[i].id!=0)

{

do

{

printf("Enter\n1 - Change Quantity\n2 - Change Price\n3 - Change Name\n4 - Change Company\n5 - Change Manufaturing Date\n6 - Change Expiry Date\n7 - Change Info\nAny other number to exit");

scanf("%d",&choice);

if(choice==1)

{

int amount;

printf("Enter Quantity to be changed\n");

fflush(stdin);

scanf("%d",&quantity);

m[i].quantity=quantity;

printf("Quantity changed Successfully\n");

}

if(choice==2)

{

int price;

printf("Enter Price to be changed\n");

fflush(stdin);

scanf("%d",&price);

m[i].price=price;

printf("Price changed Successfully\n");

}

if(choice==3)

{

char name[100];

printf("Enter Name to be changed\n");

fflush(stdin);

gets(name);

strcpy(m[i].medicneName,name);

printf("Medicine Name changed Successfully\n");

}

if(choice==4)

{

char company[100];

printf("Enter organization to be changed\n");

fflush(stdin);

gets(company);

strcpy(m[i].Company,company);

printf("Company changed Successfully\n");
}
if(choice==5)

{

char mfg[11];

printf("Enter Manufacturing date to be changed\n");

fflush(stdin);

gets(mfg);

strcpy(m[i].Mfg_Date,mfg);

printf("Manufacturing Date changed Successfully\n");

}

if(choice==6)

{

char exp[11];

printf("Enter Expiry date to be changed\n");

fflush(stdin);

gets(exp);

strcpy(m[i].Exp_Date,exp);

printf("Expiry Date changed Successfully\n");

}

if(choice==7)

{

char info[100];

printf("Enter Info to be changed(Less than 100 Characters)\n");

fflush(stdin);

gets(info);

strcpy(m[i].info,info);

printf("Info changed Successfully\n");

}

if(choice<=0 && choice>7)

{

printf("Enter Choice between 0 to 7\n");

}

printf("Enter 1 to Change different Details Else some other number\n");

fflush(stdin);

scanf("%d",&c);

}while(c==1);

break;

}

}

}
