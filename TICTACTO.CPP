#include<stdio.h>
#include<conio.h>
int check[9]={1,2,3,4,5,6,7,8,9};
char a[3][3]={'-','-','-','-','-','-','-','-','-'};
//char a[3][3]={1,2,3,4,5,6,7,8,9};
char player1='X';

   void display()
   {
    clrscr();
    int i,j;
    for(i=0;i<3;i++)
     {
	for(j=0;j<3;j++)
	{
	  printf("%c\t",a[i][j]);
	}
	printf("\n");
     }
   }

   void input()
   {
     sinput:
     int b;
     printf("Enter Number\n");
     scanf("%d",&b);
     if(check[b-1]==b)
     {
     check[b-1]=0;
     if(b==1)
     a[0][0] = player1;
     if(b==2)
     a[0][1] = player1;
     if(b==3)
     a[0][2] = player1;
     if(b==4)
     a[1][0] = player1;
     if(b==5)
     a[1][1] = player1;
     if(b==6)
     a[1][2] = player1;
     if(b==7)
     a[2][0] = player1;
     if(b==8)
     a[2][1] = player1;
     if(b==9)
     a[2][2] = player1;
   }
   else
   {
	printf("Position used previously\n");
	goto sinput;
   }
 }
   void change()
   {
   if(player1=='X')
    player1='O';
   else
    player1='X';
   }

   char Win()
   {
     if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')
	return ('X');
     if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
	return ('X');
     if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
	return ('X');
     if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')
	return ('X');
     if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')
	return ('X');
     if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X')
	return ('X');
     if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
	return ('X');
     if(a[2][0]=='X' && a[1][1]=='X' && a[0][2]=='X')
	return ('X');

     if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O')
	return ('O');
     if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')
	return ('O');
     if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')
	return ('O');
     if(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O')
	return ('O');
     if(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O')
	return ('O');
     if(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O')
	return ('O');
     if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')
	return ('O');
     if(a[2][0]=='O' && a[1][1]=='O' && a[0][2]=='O')
	return ('O');

	return('/');
    }
void main()
{
 clrscr();
 display();
 for(int i=1;i<10;i++)
 {
 if(i%2==0)
  {
	printf("Enter location for O\n");
  }
 else
  {
	printf("Enter location for X\n");
  }
 input();
 display();
 change();
 Win();
  {
   if(Win()=='X')
   {
	printf("X wins!!!");
	break;
   }
   else if(Win()=='O')
   {
	printf("O wins!!!");
	break;
   }
   if(i==9)
   {
	printf("Draw");
	break;
   }
  }
 }
 getch();
}






