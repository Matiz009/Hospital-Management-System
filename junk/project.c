#include<stdio.h>

#include<stdlib.h>

#include<ctype.h>

#include<string.h>

#include<Windows.h>

#include"patient.h"





void style();

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


int main(){
	
	
    read();
    
    int c,i,q;
    
    printf(" \n\n\n\n \t       **********************Hospital Management System During Panademic*********************\n");
    
    style ();
    
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

void style(){
	
	

	int i;
	int j;
	int k;
	int l;
    for ( i = 5; i > 0; i--)
    {
        printf("*");
        for ( j = i; j < 5; j++)
        {
            printf(" ");    
        }
        printf("*");
        for ( k = i; k > 0; k--)
        {
            printf(" ");
        }
        for ( l = i; l > 1; l--)
        {
            printf(" ");
        }
        printf("*");
        
        for ( k = i; k < 5; k++)
        {
            printf(" ");
        }
        printf("*\n");
        
     
	  }
	  
	  
}

void user()  {
	

    char savedUser[20]="SP20-BSE-042";
    
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
    int pass;

    printf(" Enter Password:\n");
    scanf("%d",&pass);

    if(pass!=458)
    {
        printf("\n You have entered wrong password!\n");
        printf("\n Enter it again!");
        printf("\n Enter Password:\n");
        scanf("%d",&pass);
    }

    if(pass!=458)
    {

        printf("\n You have entered wrong password!\n");
        printf("\n Last Try!");
        printf("\n Enter Password:\n");
        scanf("%d",&pass);
    }

    if(pass!=458)
    {
        printf("\nSorry!!!\n");
        exit(0);
    }

     if(pass==458)
    {
        printf("\n Login Successfully!");
        printf("\n\t\t\t\t\t\t Press Enter to continue!");
        getch();
        system("cls");
    }


}


