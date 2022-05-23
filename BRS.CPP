#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
static int p=0;
calss a
{
   char busn[5],arrival[10],depart[10],from[10],to[10],seat[8][4][10];
public:
  void install();
  void allotment();
  void empty();
  void show();
  void position(int i);
}
bus[10];
void vline(char ch)
{
  for(int i=80;i>0;i--)
  cout<<ch;
}
void a::install()
{
  clrscr();
  textcolor(YELLOW);
  printf("\n");
  cprintf("Enter bus no.");
  cin>>bus[p].busn;
  printf("\n");
  cprintf(:"Departure time.");
  cin>>bus[p].depart;
  printf("\n");
  cprintf("Arrival time.");
  cin>>bus[p].arrival;
  printf("\n");
  cprintf("From.");
  cin>>bus[p].from;
  printf("\n");
  cprintf("To.");
  cin>>bus[p].to;
  bus[p].empty();
  p++;
}
void a::allotment()
{
  int seat;
  char number[5];

  top:
  textcolor(12);
  cprintf("Bus no.");
  printf("\n");
  cin>>number;
  int n;
  for(n=0;n<=p;n++)
  {
     if(strcmp(bus[n].busn,number)==0)
     break;
  }
  while(n<=p)
  {
     cprintf("Seat number.");
     printf("\n");
     cin>>seat;

     if(seat>32)
     {
	cprintf("\nThere are only 32 seat avaible in the bus.");
     }
     else
     {
	if(strcmp(bus[n].seat[seat/4][(seat%4)-1],"Empty")==0)
	{
	   cprintf("Enter passanger's name.");
	   printf("\n");
	   cin>>bus[n].seat{seat[seat/4][(seat%4)-1];

	   break;
	}
	else
	{
	   cprintf("The seat no is already reserved.");
	   printf("\n");
	}
     }
     if(n>p)
     {
	   cprintf("Enter correct bus no.\n");
	   printf("\n");
	   goto top;
     }
  }

void a::empty()
{
   for(i=0;i<8;i++)
   {
      for(j=0;j<4;j++)
      {
	 strcpy(bus[p].seat[i][j],"Empty");
      }
   }
}
void a::show()
{
   int n;
   char


