#include<stdio.h>
int main()
{
    char name[20],gender;
    int age,Select,vaccinated,pregnant,interested,dose;
    float date;
    printf("[ Vaccination Help Guide ]\n\n");
    printf("Please Enter Ur Name : ");
    gets(name);
    printf("Please Enter Ur Age  : ");
    scanf("%d",& age);
    printf("\n");
    printf("Select Ur Gender     : [ 1. Male  ]\n                       [ 2. Female]\n                       [ 3. Other ]\n\n");
    printf("Please Enter Input   : ");
    scanf("%d",&Select);

    switch(Select)
    {
    case 1:
    {
        char gender[]= "male";
        printf("\n\nHave you been vaccinated before?\n                       [ 1. Yes ]\n                       [ 2. No  ]\n\nInput Ur condition   : ");
        scanf("%d",&vaccinated);
        if(strcmp(vaccinated, "Yes")==0)
        {
            printf("\n\nWas it 1st Dose or 2nd Dose?\n                       [ 1. 1st ]\n                       [ 2. 2nd ]\n\nInput Ur condition   : ");
            scanf("%d",&dose);
            if(dose==1)
            {
                printf("\n\nPlease Input Ur 1st dose date   : ");
                scanf("%d",&date);
            }
            else
                printf(" [ U can't get Vaccine again... ] ");
        }
        else
        {
            printf("Are Your Interested to get vaccine?\n                       [ 1. Yes ]\n                       [ 2. No  ]\n\nInput Ur opinion   : ");
            scanf("%d",&interested);
            if (interested==1)
            {
                printf("Here is Ur Vaccine Card : [Name : %s",name);
            }
            else
                printf("[ As a ideal citizen U should receive the Vaccine & safe Ur family & Urself... ] ");
        }
        break;
    }
    case 2:
    {
        char gender[]= "Female";
        printf("\n\nR U pregnant?          [ 1. Yes ]\n                       [ 2. No  ]\n\nInput Ur condition   : ");
        scanf("%d",&pregnant);
        if (pregnant==1)
            printf("\n[ You aren't able to get vaccine \n  at this time due to pregnancy.\n  Plz try again after pregnancy.]");
        else(pregnant==2);
        printf("\n\nHave you been vaccinated before?\n                       [ 1. Yes ]\n                       [ 2. No  ]\n\nInput Ur condition   : ");
        scanf("%d",&vaccinated);
        if(vaccinated==1)
        {
            printf("\n\nWas it 1st Dose or 2nd Dose?\n                       [ 1. 1st ]\n                       [ 2. 2nd ]\n\nInput Ur condition   : ");
            scanf("%d",&dose);
            if(dose==1)
            {
                printf("\n\nPlease Input Ur 1st dose date   : ");
                scanf("%d",&date);
            }
            else
                printf("U can't get Vaccine again.");
        }
        else
        {
            printf("Are Your Interested to get vaccine?\n                       [ 1. Yes ]\n                       [ 2. No  ]\n\nInput Ur opinion   : ");
            scanf("%d",&interested);
            if (interested==1)
            {
                printf("Here is Ur Vaccine Card");
            }
            else
                printf(" As a ideal citizen U should receive the Vaccine & safe Ur family & Urself.");
        }
        break;
    }
    case 3:
    {
        char gender[]= "Female";
        printf("\n\nR U pregnant?          [ 1. Yes ]\n                       [ 2. No  ]\n\nInput Ur condition   : ");
        scanf("%d",&pregnant);
        if (pregnant==1)
            printf("\n[ You aren't able to get vaccine \n  at this time due to pregnancy.\n  Plz try again after pregnancy.]");
        else(pregnant==2);
        printf("\n\nHave you been vaccinated before?\n                       [ 1. Yes ]\n                       [ 2. No  ]\n\nInput Ur condition   : ");
        scanf("%d",&vaccinated);
        if(vaccinated==1)
        {
            printf("Was it 1st Dose or 2nd Dose : ");
            scanf("%d",&dose);
            if(dose==1)
            {
                printf("\n\nPlease Input Ur 1st dose date   : ");
                scanf("%d",&date);
            }
            else
                printf("U can't get Vaccine again.");
        }
        else
        {
            printf("Are Your Interested to get vaccine?\n                       [ 1. Yes ]\n                       [ 2. No  ]\n\nInput Ur opinion   : ");
            scanf("%d",&interested);
            if (interested==1)
            {
                printf("Here is Ur Vaccine Card : ");
            }
            else
                printf(" [ As a ideal citizen U should receive the Vaccine & safe Ur family & Urself...] ");
        }
        break;
    }
    }

    getch();
}
