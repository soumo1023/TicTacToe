#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int i,j,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18;
char a[3][3],*m1,*m2,*m3,*m4,*m5,*m6,*m7,*m8,*m9,b[20],c[20];
int check(char *,char *);

void input1(char *t)
{
    printf("\n\n\nENTER USER-1 POSITION:-\n");
    scanf("%d%d",&b1,&b2);
    if(((b1>=3) && (b2>=3)) || ((b1<3) && (b2>=3)) || ((b1>=3) && (b2<3)))
    {
        printf("\n\nWRONG INPUT||||GIVE PROPER INPUT|||\n\n");
        input1(a[0]);
    }
    m1=(t+(b1*3)+b2);
    *m1='X';

}
void input2(char *t)
{
    printf("\n\n\nENTER USER-2 POSITION:-\n");
    scanf("%d%d",&b3,&b4);
    if(((b3>=3) && (b4>=3)) || ((b3<3) && (b4>=3)) || ((b3>=3) && (b4<3)))
    {
        printf("\n\nWRONG INPUT||||GIVE PROPER INPUT|||\n\n");
        input2(a[0]);
    }
    if(b1==b3 && b2==b4)
    {
        printf("\n\nINVALID INPUT|||GIVE PROPER INPUT|||\n\n");
        input2(a[0]);
    }
    m2=(t+(b3*3)+b4);
    *m2='O';
}
void input3(char *t)
{
    printf("\n\n\nENTER USER-1 POSITION:-\n");
    scanf("%d%d",&b5,&b6);
    if(((b5>=3) && (b6>=3)) || ((b5<3) && (b6>=3)) || ((b5>=3) && (b6<3)))
    {
        printf("\n\nWRONG INPUT||||GIVE PROPER INPUT|||\n\n");
        input3(a[0]);
    }
    if((b1==b5 && b2==b6) || (b3==b5 && b4==b6))
    {
        printf("\n\nINVALID INPUT|||GIVE PROPER INPUT|||\n\n");
        input3(a[0]);
    }
    m3=(t+(b5*3)+b6);
    *m3='X';
}
void input4(char *t)
{
    printf("\n\n\nENTER USER-2 POSITION:-\n");
    scanf("%d%d",&b7,&b8);
    if(((b7>=3) && (b8>=3)) || ((b7<3) && (b8>=3)) || ((b7>=3) && (b8<3)))
    {
        printf("\n\nWRONG INPUT||||GIVE PROPER INPUT|||\n\n");
        input4(a[0]);
    }
    if((b1==b7 && b2==b8) || (b3==b7 && b4==b8) || (b5==b7 && b6==b8))
    {
        printf("\n\nINVALID INPUT|||GIVE PROPER INPUT|||\n\n");
        input4(a[0]);
    }
    m4=(t+(b7*3)+b8);
    *m4='O';
}
void input5(char *t)
{
    printf("\n\n\nENTER USER-1 POSITION:-\n");
    scanf("%d%d",&b9,&b10);
    if(((b9>=3) && (b10>=3)) || ((b9<3) && (b10>=3)) || ((b9>=3) && (b10<3)))
    {
        printf("\n\nWRONG INPUT||||GIVE PROPER INPUT|||\n\n");
        input5(a[0]);
    }
    if((b1==b9 && b2==b10) || (b3==b9 && b4==b10) || (b5==b9 && b6==b10) || (b7==b9 && b8==b10))
    {
        printf("\n\nINVALID INPUT|||GIVE PROPER INPUT|||\n\n");
        input5(a[0]);
    }
    m5=(t+(b9*3)+b10);
    *m5='X';
}
void input6(char *t)
{
    printf("\n\n\nENTER USER-2 POSITION:-\n");
    scanf("%d%d",&b11,&b12);
    if(((b11>=3) && (b12>=3)) || ((b11<3) && (b12>=3)) || ((b11>=3) && (b12<3)))
    {
        printf("\n\nWRONG INPUT||||GIVE PROPER INPUT|||\n\n");
        input6(a[0]);
    }
    if((b1==b11 && b2==b12) || (b3==b11 && b4==b12) || (b5==b11 && b6==b12) || (b7==b11 && b8==b12) || (b9==b11 && b10==b12))
    {
        printf("\n\nINVALID INPUT|||GIVE PROPER INPUT|||\n\n");
        input6(a[0]);
    }
    m6=(t+(b11*3)+b12);
    *m6='O';
}
void input7(char *t)
{
    printf("\n\n\nENTER USER-1 POSITION:-\n");
    scanf("%d%d",&b13,&b14);
    if(((b13>=3) && (b14>=3)) || ((b13<3) && (b14>=3)) || ((b13>=3) && (b14<3)))
    {
        printf("\n\nWRONG INPUT||||GIVE PROPER INPUT|||\n\n");
        input7(a[0]);
    }
    if((b1==b13 && b2==b14) || (b3==b13 && b4==b14) || (b5==b13 && b6==b14) || (b7==b13 && b8==b14) || (b9==b13 && b10==b14) || (b11==b13 && b12==b14))
    {
        printf("\n\nINVALID INPUT|||GIVE PROPER INPUT|||\n\n");
        input7(a[0]);
    }
    m7=(t+(b13*3)+b14);
    *m7='X';
}
void input8(char *t)
{
    printf("\n\n\nENTER USER-2 POSITION:-\n");
    scanf("%d%d",&b15,&b16);
    if(((b15>=3) && (b16>=3)) || ((b15<3) && (b16>=3)) || ((b15>=3) && (b16<3)))
    {
        printf("\n\nWRONG INPUT||||GIVE PROPER INPUT|||\n\n");
        input8(a[0]);
    }
    if((b1==b15 && b2==b16) || (b3==b15 && b4==b16) || (b5==b15 && b6==b16) || (b7==b15 && b8==b16) || (b9==b15 && b10==b16) || (b11==b15 && b12==b16) || (b13==b15 && b14==b16))
    {
        printf("\n\nINVALID INPUT|||GIVE PROPER INPUT|||\n\n");
        input8(a[0]);
    }
    m8=(t+(b15*3)+b16);
    *m8='O';
}
void input9(char *t)
{
    printf("\n\n\nENTER USER-1 POSITION:-\n");
    scanf("%d%d",&b17,&b18);
    if(((b17>=3) && (b18>=3)) || ((b17<3) && (b18>=3)) || ((b17>=3) && (b18<3)))
    {
        printf("\n\nWRONG INPUT||||GIVE PROPER INPUT|||\n\n");
        input9(a[0]);
    }
    if((b1==b17 && b2==b18) || (b3==b17 && b4==b18) || (b5==b17 && b6==b18) || (b7==b17 && b8==b18) || (b9==b17 && b10==b18) || (b11==b17 && b12==b18) || (b13==b17 && b14==b18) || (b15==b17 && b16==b18))
    {
        printf("\n\nINVALID INPUT|||GIVE PROPER INPUT|||\n\n");
        input9(a[0]);
    }
    m9=(t+(b17*3)+b18);
    *m9='X';
}

void display(char *t)
{
    fflush(stdout);
    printf("\n\n\t______  ______  ______\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t");
            if((t+i*3+j)==m1)
            {
                printf("|__%c__|",*m1);
            }
            else if((t+i*3+j)==m2)
            {
                printf("|__%c__|",*m2);

            }
            else if((t+i*3+j)==m3)
            {
                printf("|__%c__|",*m3);
            }
            else if((t+i*3+j)==m4)
            {
                printf("|__%c__|",*m4);
            }
            else if((t+i*3+j)==m5)
            {
                printf("|__%c__|",*m5);
            }
            else if((t+i*3+j)==m6)
            {
                printf("|__%c__|",*m6);
            }
            else if((t+i*3+j)==m7)
            {
                printf("|__%c__|",*m7);
            }
            else if((t+i*3+j)==m8)
            {
                printf("|__%c__|",*m8);
            }
            else if((t+i*3+j)==m9)
            {
                printf("|__%c__|",*m9);
            }
            else
            {
                printf("|_____|");
            }
        }
        printf("\n");
    }
}

int main()
{
    system("COLOR 6B");
    printf("\n\n\n\n\n\n\t\t\t_________________________");
    printf("\n\t\t\t|                        |");
    printf("\n\t\t\t| WELCOME TO TIC TAC TOE |");
    printf("\n\t\t\t|________________________|\n");
    printf("\n\n\n\n PRESS ENTER TO CONTINUE");
    getch();
    system("CLS");
    system("COLOR 3B");
    printf("\n\n\n\n\t\t\t    _______________");
    printf("\n\t\t\t    |             |\n\t\t\t====| DESIGNED BY |====\n\t\t\t    |_____________|\n\n\t\t\t\t\t-SOUMODIP PAUL");
    printf("\n\n\n\n\n PRESS ENTER TO CONTINUE");
    getch();
    system(("CLS"));
    printf("\n\n\n\n\t\t\t    ______________________________________");
    printf("\n\t\t\t    |                                     |\n\t\t\t====| SOFTWARE DEVELOPMENT & MAINTAINENCE |====\n\t\t\t    |_____________________________________|");
    printf("\n\n\t\t\t\t-| SHOUMYAKANTI DAS\n\t\t\t\t-| SHUBHRODEEP CHAKRABORTY\n\t\t\t\t-| SUVAM MUKHERJEE\n\n");
    printf("\n\n\n PRESS ENTER TO CONTINUE");
    getch();
    system("CLS");
    system("COLOR 06");
    printf("\n\t\t\t\t-MANUAL-\n\n");
    printf("\n* THIS IS A TWO PLAYER GAME.\n* THERE ARE 9 BLOCKS SO THERE WILL BE 9 POSSIBLE INPUTS i.e 5 FOR PLAYER-1 &      4 FOR PLAYER-2.\n* EACH PLAYER HAVE TO GIVE THE POSITION ONLY WHERE THEY WANT TO MOVE i.e 'X'      FOR PLAYER-1 & 'O' FOR PLAYER-2\n");
    printf("* THE INPUT OF THE POSITONS WILL BE LIKE THIS:-\n");
    printf("\n\t\tFOR 1ST POSITION THE INPUT WILL BE- 0,0");
    printf("\n\t\tFOR 2ND POSITION THE INPUT WILL BE- 0,1");
    printf("\n\t\tFOR 3RD POSITION THE INPUT WILL BE- 0,2");
    printf("\n\t\tFOR 4TH POSITION THE INPUT WILL BE- 1,0");
    printf("\n\t\tFOR 5TH POSITION THE INPUT WILL BE- 1,1");
    printf("\n\t\tFOR 6TH POSITION THE INPUT WILL BE- 1,2");
    printf("\n\t\tFOR 7TH POSITION THE INPUT WILL BE- 2,0");
    printf("\n\t\tFOR 8TH POSITION THE INPUT WILL BE- 2,1");
    printf("\n\t\tFOR 9TH POSITION THE INPUT WILL BE- 2,2");
    printf("\n\n\n PRESS ENTER TO CONTINUE");
    getch();
    system("CLS");
    system("COLOR 19");
    printf("\n\n\n\t\t|||HERE IS YOUR EMPTY TIC TAC TOE|||\n\n");
    for(i=0; i<3; i++)
    {
        printf("\t\t\t___________________\n\t\t\t|     |     |     |\n\t\t\t|     |     |     |\n\t\t\t|_____|_____|_____|\n");
    }
    printf("\n\n\t\t\t\t LET'S START THE GAME.......");
    getch();
    system("CLS");
    int k1,k2,k3,k4,k5;
    system("COLOR 6B");
    printf("\n\n\n ENTER PLAYER-1 NAME:- ");
    gets(b);
    fflush(stdin);
    printf("\n\n\n ENTER PLAYER-2 NAME:- ");
    gets(c);
    fflush(stdin);
     system("CLS");
     system("COLOR F0");
    printf("\n\n\t\t\t -:|||||THE GAME BEGINS||||:-\n\n");
    input1(a[0]);
    display(a[0]);
    input2(a[0]);
    display(a[0]);
    input3(a[0]);
    display(a[0]);
    input4(a[0]);
    display(a[0]);
    input5(a[0]);
    display(a[0]);
    k1=check(a[0],m5);
    if(k1==0)
    {
        printf("\n\n\n");
        puts(b);
        printf(" IS THE WINNER\n\n");
        exit(0);
    }
    input6(a[0]);
    display(a[0]);
    k2=check(a[0],m6);
    if(k2==0)
    {
        printf("\n\n\n");
        puts(c);
        printf(" IS THE WINNER\n\n");
        exit(0);
    }
    input7(a[0]);
    display(a[0]);
    k3=check(a[0],m7);
    if(k3==0)
    {
        printf("\n\n\n");
        puts(b);
        printf(" IS THE WINNER\n\n");
        exit(0);
    }
    input8(a[0]);
    display(a[0]);
    k4=check(a[0],m8);
    if(k4==0)
    {
        printf("\n\n\n");
        puts(c);
        printf(" IS THE WINNER\n\n");
        exit(0);
    }
    input9(a[0]);
    display(a[0]);
    k5=check(a[0],m9);
    if(k5==0)
    {
        printf("\n\n\n");
        puts(b);
        printf(" IS THE WINNER\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n|||MATCH DRAW|||\n\n");
        exit(0);
    }

    return (EXIT_SUCCESS);
}

int check(char *t,char *l)
{
    if(l==(t+0+0))
    {
        if(((*(l+1)==*l) && (*(l+2)==*l)) || ((*(l+3)==*l) && (*(l+6)==*l)) || ((*(l+4)==*l) && (*(l+8)==*l)))
        {
            return 0;
        }
        else
            return 1;
    }
    if(l==(t+0+1))
    {
        if(((*(l-1)==*l) && (*(l+1)==*l)) || ((*(l+3)==*l) && (*(l+6)==*l)))
        {
            return 0;
        }
        else
            return 1;
    }
    if(l==(t+0+2))
    {
        if(((*(l-1)==*l) && (*(l-2)==*l)) || ((*(l+3)==*l) && (*(l+6)==*l)) || ((*(l+2)==*l) && (*(l+4)==*l)))
        {
            return 0;
        }
        else
            return 1;
    }
    if(l==(t+0+3))
    {
        if(((*(l+1)==*l) && (*(l+2)==*l)) || ((*(l-3)==*l) && (*(l+3)==*l)))
        {
            return 0;
        }
        else
            return 1;
    }
    if(l==(t+0+4))
    {
        if(((*(l+1)==*l) && (*(l-1)==*l)) || ((*(l-3)==*l) && (*(l+3)==*l)) || ((*(l+4)==*l) && (*(l-4)==*l)) || ((*(l+2)==*l) && (*(l-2)==*l)))
        {
            return 0;
        }
        else
            return 1;
    }
    if(l==(t+0+5))
    {
        if(((*(l-1)==*l) && (*(l-2)==*l)) || ((*(l-3)==*l) && (*(l+3)==*l)))
        {
            return 0;
        }
        else
            return 1;
    }
    if(l==(t+0+6))
    {
        if(((*(l+1)==*l) && (*(l+2)==*l)) || ((*(l-3)==*l) && (*(l-6)==*l)) || ((*(l-2)==*l) && (*(l-4)==*l)))
        {
            return 0;
        }
        else
            return 1;
    }
    if(l==(t+0+7))
    {
        if(((*(l-1)==*l) && (*(l+1)==*l)) || ((*(l-3)==*l) && (*(l-6)==*l)))
        {
            return 0;
        }
        else
            return 1;
    }
    if(l==(t+0+8))
    {
        if(((*(l-1)==*l) && (*(l-2)==*l)) || ((*(l-3)==*l) && (*(l-6)==*l)) || ((*(l-4)==*l) && (*(l-8)==*l)))
        {
            return 0;
        }
        else
            return 1;
    }
    return (EXIT_SUCCESS);
}
