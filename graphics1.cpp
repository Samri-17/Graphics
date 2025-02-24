#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	int ch;
	char m;
	int a,b,c,d,w,x,y,z;
	int p,q,r,s;
	initgraph(&gd,&gm,(char*)"");
	do
	{
//		printf("1.Point\n2.Line\n3.Rectangle\n4.Square\n5.Triangle\n6.Circle\n7.Ellipse\n8.Exit");
cout<<"1.Point";
cout<<"\n2.Line";
cout<<"\n3.Rectangle";
cout<<"\n4.Square";
cout<<"\n5.Triangle";
cout<<"\n6.Circle";
cout<<"\n7.Ellipse";
cout<<"\n8.Exit";
//		printf("\nEnter your choice:");
//		scanf("%d",&ch);
cout<<"\nEnter your choice";
cin>>ch;
		switch(ch)
		{
			case 1:
			printf("Enter required data for point:");
			scanf("%d%d",&a,&b);
			putpixel(a,b,RED);
			break;
			case 2:
			printf("Enter required data for line:");
			scanf("%d%d%d%d",&a,&b,&c,&d);
			line(a,b,c,d);
			break;
			case 3:
			printf("Enter required data for rectangle:");
			scanf("%d%d%d%d",&a,&b,&c,&d);
			rectangle(a,b,c,d);
			break;
			case 4:
			printf("Enter required data for square");
			scanf("%d%d%d%d",&a,&b,&c,&d);
			rectangle(a,b,c,d);
			break;
			case 5:
			printf("Enter required data for line 1");
			scanf("%d%d%d%d",&a,&b,&c,&d);
			line(a,b,c,d);
			printf("Enter required data for line 2");
			scanf("%d%d%d%d",&w,&x,&y,&z);
			line(w,x,y,z);
			printf("Enter required data for line 3");
			scanf("%d%d%d%d",&p,&q,&r,&s);
			line(p,q,r,s);
			break;
			case 6:
			printf("Enter required data for cirlce");
			scanf("%d%d%d",&a,&b,&c);
			circle(a,b,c);
			break;
			case 7:
			printf("Enter required data for ellipse");
			scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&w,&x);
			ellipse(a,b,c,d,w,x);
			break;
			case 8:
			exit(0);
			break;
			default:
				printf("\nInvalid input");
				break;
		}
//		printf("\nDo you want to continue:y or n:");
//		while ((getchar()) != '\n');
//		scanf(" %c",&m);
cout<<"Do you want to continue:y or n:";
cin>>m;
	} while(m!='n');
	getch();
	closegraph();
	return(0);
}
