
#include "covid_vaccination_centre.h"



int main()
{
    read();

    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------COVID-19 VACCIINE CENTER----------------------------------------\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    int selection;
    while(selection!=6)
    {
        printf("**Welcome to the portal**\n\n1.Add information about the person \n2.View information about the person.\n3.Search \n4.Edit the information.\n5.Delete\n6.Exit\n\n Enter your option in the form of numbers(1-6)= ");
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
            write();
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
