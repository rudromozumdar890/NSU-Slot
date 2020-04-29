#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date
{
    int dd,mm,yyyy;
};

struct time
{
    int hh,mm;
};

struct book
{
    char name1[50],name2[50],name3[50],name4[50];
    int ID1,ID2,ID3,ID4;
    struct date date;
    struct time time;
};

int num=0;

int main()
{
    printf("\t\t\t******Slot booking system of North South University indoor badminton game******\n");
    int i;
    struct book student[20];
    for(i=0; i<20; i++)
    {
        printf("\t     **************************************************************************************************\n\n");
        printf("\tEnter Slot %d information...\n", i+1);

        printf("\tEnter name of student 1: ");
        gets(student[i].name1);
        fflush(stdin);
        if(strcmp(student[i].name1,"")==0)
            break;
        printf("\t\tEnter ID of student 1: ");
        scanf("%d", &student[i].ID1);
        fflush(stdin);

        printf("\n\tEnter name of student 2: ");
        gets(student[i].name2);
        fflush(stdin);
        printf("\t\tEnter ID of student 2: ");
        scanf("%d", &student[i].ID2);
        fflush(stdin);

        printf("\n\tEnter name of student 3: ");
        gets(student[i].name3);
        fflush(stdin);
        printf("\t\tEnter ID of student 3: ");
        scanf("%d", &student[i].ID3);
        fflush(stdin);

        printf("\n\tEnter name of student 4: ");
        gets(student[i].name4);
        fflush(stdin);
        printf("\t\tEnter ID of student 4: ");
        scanf("%d", &student[i].ID4);
        fflush(stdin);

        printf("\n\t\tEnter booking date (dd/mm/yyyy): ");
        scanf("%d", &student[i].date.dd);
        fflush(stdin);
        printf("\t\t\t\t\t\t ");
        scanf("%d", &student[i].date.mm);
        fflush(stdin);
        printf("\t\t\t\t\t\t ");
        scanf("%d", &student[i].date.yyyy);
        fflush(stdin);
        printf("\t\tEnter booking time in 24 hour format (09:00 to 18:00)(hh:mm): ");
        scanf("%d",&student[i].time.hh);
        fflush(stdin);
        printf("\t\t\t\t\t\t\t\t\t      ");
        scanf("%d",&student[i].time.mm);
        fflush(stdin);

        num++;
    }


    printf("\n\n\t############################################################################################################\n\n");
    printf("\n\n\t\t\t **********Slot schedule***********\n\n");
    printf("\t|   Slot    |       Name       |      ID      |     Date     |   Time   |\n");
    printf("\t-------------------------------------------------------------------------\n");

    for(i=0; i<num; i++)
    {
        printf("\t|           |   %12s   |  %010d  |              |          |\n", student[i].name1, student[i].ID1);
        printf("\t|    %02d     |   %12s   |  %010d  |  %02d/%02d/%04d  |  %02d:%02d   |\n", i+1, student[i].name2, student[i].ID2, student[i].date.dd, student[i].date.mm, student[i].date.yyyy, student[i].time.hh, student[i].time.mm);
        printf("\t|           |   %12s   |  %010d  |              |          |\n", student[i].name3, student[i].ID3);
        printf("\t|           |   %12s   |  %010d  |              |          |\n", student[i].name4, student[i].ID4);
        printf("\t-------------------------------------------------------------------------\n");
    }
}
