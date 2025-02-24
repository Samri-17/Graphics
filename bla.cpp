#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
//	int x1,x2,y1,y2,i;
//	int delx,dely,del2y,del2x,delxy,po,xo,yo,p1;
//	float m;
//	cout<<"Enter Starting point i.e x1,y1\n";
//	cin>>x1>>y1;
//	cout<<"Enter ending point i.e x2,y2\n";
//	cin>>x2>>y2;
//	xo=x1;
//	yo=y1;
//	delx=(x2-x1);
//	dely=(y2-y1);
//	del2x=2*delx;
//	del2y=2*dely;
//	m=float(dely)/float(delx);
//	
//	if(m<1)
//	{
//		po=del2y-delx;
//		cout<<"k\t\t\t(xk,yk)\t\t\tpk\t\t\t(xk+1,yk+1)\t\t\tpk+1\n";
//		for(i=0;i<delx;i++)
//		{
//			cout<<i<<"\t\t\t"<<"("<<xo<<","<<yo<<")"<<"\t\t\t"<<po;
//			if(po<=0)
//			{
//				putpixel(xo+200,200-yo,7);
//				xo=xo+1;
//				yo=yo;
//				p1=po+del2y;
//			}
//			else
//			{
//				putpixel(xo+200,200-yo,7);
//				xo=xo+1;
//				yo=yo+1;
//				p1=po+del2y-del2x;
//	    	}
//		  cout<<"\t\t\t"<<"("<<xo<<","<<yo<<")"<<"\t\t\t\t"<<p1<<"\n";
//		  po=p1;
//		}
//		
//		cout<<i<<"\t\t\t"<<"("<<xo<<","<<yo<<")"<<"\n";
//	}
//	else
//	{
//		po=del2x-dely;
//		cout<<"k\t\t\t(xk,yk)\t\t\tpk\t\t\t(xk+1,yk+1)\t\t\tpk+1\n";
//		for(i=0;i<dely;i++)
//		{
//			cout<<i<<"\t\t\t"<<"("<<xo<<","<<yo<<")"<<"\t\t\t"<<po;
//			if(po<0)
//			{
//				putpixel(xo+200,200-yo,7);
//				xo=xo;
//				yo=yo+1;
//				p1=po+del2x;
//			}
//			else
//			{
//				putpixel(200+xo,200-yo,7);
//				xo=xo+1;
//				yo=yo+1;
//				p1=po+del2x-del2y;
//	    	}
//		  cout<<"\t\t\t"<<"("<<xo<<","<<yo<<")"<<"\t\t\t\t"<<p1<<"\n";
//		  po=p1;
//		}
//		
//		cout<<i<<"\t\t\t"<<"("<<xo<<","<<yo<<")"<<"\n";
//	}
//	line(200,0,200,200);
//	line(200,200,400,200);
 int x=100,y=300;
				while(x<getmaxx()-150)
				{
					cleardevice();
					circle(x,y,30);//wheel
					circle(x+100,y,30);//wheel
					line(x,y,x+100,y);//line between wheel
					line(x,y,x+50,y-50);//from circle
					line(x+50,y-50,x+30,y-30);//fromcircle
					line(x+40,y-50,x+100,y);//fromcirlce
					line(x+50,y-50,x+60,y-65);
					line(x+60,y-65,x+70,y-65);
					line(x+30,y-30,x+25,y-35);//seat
					line(x+25,y-35,x+35,y-35);//seat
					line(x+35,y-35,x+30,y-30);//seat
					circle(x+50,y,7); //pedalcircle
					line(x+50,y,x+55,y-10);//pedal
					line(x+50,y,x+45,y+10);//pedal
					delay(50);
					x+=5;
				 } 
	getch();
	return 0;
	closegraph();
	 
} 
