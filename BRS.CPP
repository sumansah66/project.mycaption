#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>

static int p=0;
class a
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
  cprintf("Departure time.");
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
	   cin>>bus[n].seat[seat/4][(seat%4)-1];

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
   char number[5];

   textcolor(2+0);
   cprintf("Enter bus no:");
   cin>>number;


	int i,gd=DETECT,gm;
	intigraph(&gd,gm,"C:\\TC\\BGI");

	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(177,180,"loading,please Wait...");

	for(i=190;i<150;i++)
	{
	   dealy(30);
	   line(i,210,i,230);
	}
	closegraph();
	getch();


   for(n=0;n<=p;n++)
   {
      if(strcmp(bus[n].busn,number)==0)
      break;
   }
whlie(n<=p)
{
   vline('*');
   cout<<"Bus no:\t"<<bus[n].busn
   <<"\tDeparture time:"bus[n].depart
   <<"\tArrival time:"bus[n].arrival
   <<"\tDeparture time:"bus[n].depart
   <<"\nFrom:\t\t"<<bus[n].from
   <<"\t\tTo:\t\t"<<bus[n].to<<"\n";
   vline('*');
   bus[0].position(n);
   int a=1;
   for(int i=0;i<8;i++)
   {
      for(int j=0;j<4;j++)
      {
	a++;
	if(strcmp(bus[n].seat[i][j],"Empty")!=0)
	cout<<"\nThe seat no"(a-1)<<" is reserved for"<<bus[n].seat[i][j]<<".";
      }
   }
   break;
   }
   if(n>p)
      cout<<"Enter correct bus no:";
}
void a ::position(int 1)
{
   int s=0,p=0;
   for(int i=0;i<8;i++)
   {
      cout<<"\n";
      for(int j=0;j<4;j++)
      {
	 s++;
	 if(strcmp(bus[1].seat[i][j],"Empty")==0)
	 {
	    cout.width(5);
	    cout.fill(' ');
	    cout<<s<<".";
	    cout.width(10);
	    cout.fill(' ');
	    cout<<bus[1].seat[i][j];
	    p++;
	 }
	 else
	 {
	    cout.width(5);
	    cout.fill(' ');
	    cout<<s<<".";
	    cout.width(10);
	    cout.fill(' ');
	    cout<<bus[1].seat[i][j];
	 }
      }
   }
   cout<<"\n\nThere are"<<p<<"seats empty in bus no."<<bus[1].busn;
}
int main()
{
clrscr();
{
int gd=DETECT,gm;
int i;

initgraph(&gd,&gm,"\\TC\\BIG");
for(i=0;i<=500;i++)
{
cleardevice();
//road
line(0=i,390,640+i,390);
//lower part of bus

line(50+i,360,640+i,390);
arc(135+i,360,0,180,30);
line(165+i,360,280+i,360);
arc(310+i,360,0,180,30);
line(340+i,360,385+i,360);

//using code

//upper part of bus

line(50+i,360,50+i,210);
line(385+i,360,385+i,210);
line(50+i,210,385+i,210);
line(50+i,280,385+i,280);
line(130+i,210,130+i,280);
line(210+i,210,210+i,280);
line(290+i,210,290+i,280);

//windows
rectangle(60+i,270,120+i,220);
rectangle(140+i,270,200+i,220);
rectangle(220+i,270,280+i,220);
rectangle(300+i,270,375+i,220);

//wheels
circle(135+i,360,25);
circle(310+i,360,25);

//stearing wheels
line(375+i,270,360+i,255);
line(358+i,253,0,360,5);

//human
circle(325+i,240,9);
line(322+i,249,324+i,270);
line(322+i,249,358+i,255);

//text
settextstyle(1,HORIZ_DIR,2);
setbkcolor(6+2);
outtextxy(100+i,300,"Loading please wait.....");
delay(5);
}
closegraph();







system("cls");
int w;
while(i)
{
   system("cls");
   cout<<"\n\n";
   cprintf("*****************  BUS RESERVATION SYSTEM  *****************");

   cout<<"\n\n";
   textcolor(YELLOW);
   cprintf("                1.Available bus numbers\n");
   printf("\n");
   cprintf("                2.Install\n");
   printf("\n");
   cprintf("                3.Reservation\n");
   printf("\n");
   cprintf("                4.Show\n");
   printf("\n");
   cprintf("                5.Exit\n");
   printf("\n");
   cprintf("                Enter your choice\n");
   cin>>w;
   switch(w)
   {
      case 1:
      textcolor(12);
cprintf("                **************************************");
printf("\n");
cprintf("\n              *  1.321        * *       5.009      *");
printf("\n");
cprintf("\n              *  2.432        * *       6.435      *");
printf("\n");
cprintf("\n              *  3.888        * *       7.998      *");
printf("\n");
cprintf("\n              *  4.112        * *       8.221      *");
cprintf("                **************************************");
      getch();
      //main();
      break;
      clrscr();
      case 2:
      bus[p].install();
      getch();
      //main();
      break;
      case 3:
      bus[p].allotment();
      getch();
      //main();
      break;
      clrscr();
      case 4:
      bus[0].show();
      getch();
      //main();
      break;
      case 5:
      exit(0);
}
}
return 0;
}
getch();
};



































