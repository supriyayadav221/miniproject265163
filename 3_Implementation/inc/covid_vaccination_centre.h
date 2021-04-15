/** 
* @file covid_vaccination_centre.h
* Covid vaccination centre with 7 functions including CRUD operations
*
*/
#ifndef __COVID_VACCINATION_CENTRE_H__
#define __COVID_VACCINATION_CENTRE_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
    int age;    
    char first_name[20];
    char last_name[20];
    long long int aadhar_no,mobile_no;
    char isVaccinated[10];
    
}people[150];





void edit();
void add();

void del();
void search();
void read();
void write();

void view();


#endif  