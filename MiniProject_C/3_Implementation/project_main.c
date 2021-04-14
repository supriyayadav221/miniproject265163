//#include "covid_vaccination_centre.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number,n_record,sum=0,i,j,a=0;
struct person
{
    int age;
    char first_name[20];
    char last_name[20];
    long int aadhar_no,mobile_no;
    
}people[150];



void edit();
void add();
void search();
void del();
void search();
void read();
void writ();
void show();
void view();


int main()
{
    read();

    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("*---------------------------------------------COVID-19 VACCIINE CENTER----------------------------------------\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    int selection;
    while(selection!=6)
    {
        printf("**Welcome to the portal**\n\n1. Add information about the person \n2. View information about the person.\n3. Search .\n4. Edit the information.\n6. Exit.\n\n Enter your option in the form of numbers(1-6)= ");
        scanf("%d",&selection);
        fflush(stdin);
        if(selection==1)
        {
            system("cls");
            add();
        }
        else if(selection==2)
        {
            system("cls");
            view();
        }
        else if(selection==3)
        {
            system("cls");
            search();
        }
        else if(selection==4)
        {
            system("cls");
            edit();
        }
        else if(selection==5)
        {
            system("cls");
            del();
        }
        else if(selection==6)
        {
            writ();
            return 0;
        }
        else 
        {
            system("cls");
            printf("\n\n\n INVALID INPUT, try again using valid inputs. example (1-6)");
        }
        printf("\n\n\n");


    }


}

void read()
{
    FILE *fp = fopen("records.txt","r");
    if(fp == NULL)
    {
        fp=fopen("records.txt","w");
        fclose(fp);
        printf("Error!, file doesn't exist.\n\n\n");
       // return 0;
    }
    number =fread(people,sizeof(struct person),150,fp);
    fclose(fp);
}



void add()
{
    printf("\n\n\n");
    printf("Already record saved in database =%d\n\n",number);
    printf("Enter the number of records to add=\n");
    scanf("%d",&n_record);
    sum = number+ n_record;

    for(i=number,j=0;i<sum;i++)
    {
     printf("\n");
     fflush(stdin);
     printf("Enter the first name= ");
     gets(people[i].first_name);
     fflush(stdin);
     printf("Enter the last name= ") ;
     gets(people[i].last_name);
     fflush(stdin);
     printf("Enter age= ");
     scanf("%d",&people[i].age);  
     fflush(stdin);
     printf("Enter contact number= ");
     scanf("%ld",&people[i].mobile_no);
     fflush(stdin);
     printf("Enter Aadhar number= ");
     scanf("%ld",&people[i].aadhar_no);
     fflush(stdin);
     printf("\n");
     j++;
     a++;
     number++;  
    }


}


void view()
{

    for(i =0;i<number;i++)
    {
        printf("\n");
        printf("Person's Serial Number =%d\n",i);
        
        
        printf("First Name= ");
        puts(people[i].first_name);
        printf("Last Name= ");
        puts(people[i].last_name);
        printf("Aadhar number= %ld\n ",people[i].aadhar_no);
        printf("Age= %d\n",people[i].age);
        
        printf("Contact number= %ld\n",people[i].mobile_no);
        
    }
}

void edit()
{
    int edit_option,respone_for_serial_number;
    fflush(stdin);
    printf("Which record would you like to edit? \n");
    printf("Enter your choice= \n");
    printf("1.First Name \n2.Last Name \n3.Aadhar number \n4.Age \n5.Contact Number\n");
    printf("Enter your choice in the form of numbers(1-5)");
    scanf("%d",&edit_option);
    if(edit_option<6)
    {
        printf("Enter the serial number of person(0- %d).\n",number-1);
        scanf("%d",&respone_for_serial_number);
        if(respone_for_serial_number<number)
        {
            if(edit_option ==1)
            {
                fflush(stdin);
                printf("Enter new first name= ");
                gets(people[respone_for_serial_number].first_name);
            }
            else if(edit_option==2)
            {
                fflush(stdin);
                printf("Enter last name = \n");
                gets(people[respone_for_serial_number].last_name);
            }
            else if(edit_option==3)
            {
                fflush(stdin);
                printf("Enter Aadhar number = \n");
                scanf("%ld",&people[respone_for_serial_number].aadhar_no);
            }
            else if(edit_option==4)
            {
                fflush(stdin);
                printf("Enter new age = \n");
                scanf("%d",&people[respone_for_serial_number].age);

            }
            else if(edit_option==5)
            {
                fflush(stdin);
                printf("Enter new contact number = \n");
                scanf("%ld",&people[respone_for_serial_number].mobile_no);

            }
            else{
                printf("\n\n\n INVALID CHOICE\n\n Try Again!! \n\n\n");
            }

        }

    }
}

void search()
{
int choice,response_for_serial_number,g;
char fn[100];
printf("By which entry you want to search? \n");
printf("1. Serial number. \n2. First Name \n3. Last Name \n4.Aadhar number \n4.Age \n5.Contact number\n\n Enter your choice = ");
scanf("%d",&choice);
if(choice==1)
{
    printf("Enter serial number of person = ");
    scanf("%d",&response_for_serial_number);
    if(response_for_serial_number<number){
    printf("First Name= ");
    puts(people[response_for_serial_number].first_name);
    printf("Last Name = ");
    puts(people[response_for_serial_number].last_name);
    printf("Aadhar number = %ld \nAge = %d \nContact number = 0%ld",people[response_for_serial_number].aadhar_no,people[response_for_serial_number].age,people[response_for_serial_number].mobile_no);

}
else
    printf("\n\n\n Not Found\n\n\n");
}
else if(choice==2)
{
    int flag=1;
    fflush(stdin);
    printf("Enter first name= ");
    gets(fn);
    fflush(stdin);
    for(g=0;g<number;g++)
    {
        if(strcmp(fn,people[g].first_name)==0)
        {
            printf("\n Serial Number = %d \n",g);
            printf("First Name= ");
            puts(people[g].first_name);
            printf("Last name =");
            puts(people[g].last_name);
            printf("Aadhar number = %ld \nAge= %d \nContact number = 0%ld\n",people[g].aadhar_no,people[g].age,people[g].mobile_no);
            printf("\n\n\n");
            flag=0;
        }

    }
    if(flag==1)
    printf("Not Found");
}
else if(choice==3)
{
    int flag=1;
    fflush(stdin);
    printf("Enter last name= ");
    gets(fn);
    fflush(stdin);
    for(g=0;g<number;g++)
    {
        if(strcmp(fn,people[g].last_name)==0)
        {
            printf("\n Serial Number = %d \n",g);
            printf("First Name= ");
            puts(people[g].first_name);
            printf("Last name =");
            puts(people[g].last_name);
            printf("Aadhar number = %ld \nAge= %d \nContact number = 0%ld\n",people[g].aadhar_no,people[g].age,people[g].mobile_no);
            printf("\n\n\n");
            flag=0;
        }

    }
    if(flag==1)
    printf("Not Found");
}
else if(choice== 4)
{
    int f=1;
    printf("Enter Aadhar number= ");
    scanf("%ld",&f);
    for(g=0;g<number;g++)
    {
        if(f==people[g].aadhar_no)
        {
            printf("\n");
            printf("Serial number =%d\n",g);
            printf("First Name");
            puts(people[g].first_name);
            printf("Last name");
            puts(people[g].last_name);
            printf("Aadhar number = %ld \nAge= %d \nContact number = 0%ld\n",people[g].aadhar_no,people[g].age,people[g].mobile_no);
            printf("\n\n\n");
            f=0;
        }
    }
    if (f==1)
    printf("Not Found\n\n\n");
}
else if(choice==5)
{
int f=1;
    printf("Enter Age= ");
    scanf("%d",&f);
    for(g=0;g<number;g++)
    {
        if(f==people[g].age)
        {
            printf("\n");
            printf("Serial number =%d\n",g);
            printf("First Name");
            puts(people[g].first_name);
            printf("Last name");
            puts(people[g].last_name);
            printf("Aadhar number = %ld \nAge= %d \nContact number = 0%ld\n",people[g].aadhar_no,people[g].age,people[g].mobile_no);
            printf("\n\n\n");
            f=0;
        }
    }
    if (f==1)
    printf("Not Found\n\n\n");

}
else if(choice ==6)
{
    int f=1;
    printf("Enter contact number= ");
    scanf("%d",&f);
    for(g=0;g<number;g++)
    {
        if(f==people[g].mobile_no)
        {
            printf("\n");
            printf("Serial number =%d\n",g);
            printf("First Name");
            puts(people[g].first_name);
            printf("Last name");
            puts(people[g].last_name);
            printf("Aadhar number = %ld \nAge= %d \nContact number = 0%ld\n",people[g].aadhar_no,people[g].age,people[g].mobile_no);
            printf("\n\n\n");
            f=0;
        }
    }
    if (f==1)
    printf("Not Found\n\n\n");
}
else
    printf("\n\n\n:-( Invalid input\n\n\n");

}
void del()
{
    int f,choice;
    printf("Enter the serial number of record you want to delete\n");
    scanf("%d",&f);
    if(f<number)
    {
        printf("Select the option from below \n");
        printf("1. Delete whole record. \n2.Delete first name \n3.Delete last name \n4.Delete Aadhar number \n5.Delete age \n6.Delete contact number \nEnter your option= ");
        scanf("%d",&choice);
        if(choice==1)
        {
            while(f<number)
            {
                strcpy(people[f].first_name,people[f+1].first_name);
                strcpy(people[f].last_name,people[f+1].last_name);
                people[f].aadhar_no=people[f+1].aadhar_no;
                people[f].age=people[f+1].age;
                people[f].mobile_no=people[f+1].mobile_no;
                f++;
                
            }
            number--;
        }
        else if(choice==2)
        {
            strcpy(people[f].first_name,"Deleted");
        }
        else if(choice ==3)
        {
           strcpy(people[f].last_name,"Deleted");

        }
        else if(choice==4)
        {
            people[f].aadhar_no=0;
        }
        else if(choice==5)
        {
            people[f].age=0;
        }
        
        else if(choice==6)
        {
            people[f].mobile_no=0;
        }
    }
    else
        printf("\n\n\n Invalid Serial number\n");
}
void writ()
{
    FILE *fp=fopen("records.txt","w");
    if(fp==NULL)
    {
        printf("ERROR!!");
        exit(1);
    }
    fwrite(people,sizeof(struct person),number,fp);
    fclose(fp);
}

