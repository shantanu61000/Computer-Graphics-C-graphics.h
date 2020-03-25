
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void scene5stic()
{


	line(10,395,600,395);

	circle(40,350,13);            //head
	line(40,363,40,393);
	//legs
	line(40,393,50,383);
	line(50,383,60,393);
	line(60,393,65,393);
	line(40,393,55,383);
	line(55,383,65,390);
	line(65,390,70,390);
	//    arms
	line(40,368,50,380);
	line(50,380,60,368);
	line(60,368,65,368);
	line(40,368,55,380);
	line(55,380,65,368);
	line(65,368,70,368);


       circle(500-350,310,13);        //head
      line(500-350,323,500-350,363);
      line(500-350,363,490-350,387);   //left leg
      line(500-350,363,510-350,387);  //right leg
      line(500-350,338,490-350,353);
      line(500-350,338,510-350,353);

      rectangle(490-350,353,485-350,366);
      circle(487-350,351,2);
      rectangle(510-350,353,515-350,366);
      circle(513-350,351,2);


}

void scene5()
{

	for(int i=0 ; i<=350 ; i++)
	{

		line(65,368,70,368);

		line(10,395,600,395);

		circle(500-i,310,13);
		line(500-i,323,500-i,363);
		line(500-i,363,490-i,387);
		line(500-i,363,510-i,387);
		line(500-i,338,490-i,353);
		line(500-i,338,510-i,353);


		circle(40,350,13);            //head
		line(40,363,40,393);
	//legs
		line(40,393,50,383);
		line(50,383,60,393);
		line(60,393,65,393);
		line(40,393,55,383);
		line(55,383,65,390);
		line(65,390,70,390);
	//arms
		line(40,368,50,380);
		line(50,380,60,368);
		line(60,368,65,368);
		line(40,368,55,380);
		line(55,380,65,368);
		line(65,368,70,368);


      rectangle(490-i,353,485-i,366);
      circle(487-i,351,2);
      rectangle(510-i,353,515-i,366);
      circle(513-i,351,2);

		delay(20);
		cleardevice();
}
		scene5stic();
		delay(200);
		settextstyle(0,0,1);
		outtextxy(40,305,"ALLA KE");
		outtextxy(40,316,"NAAM PE OXYGEN");
		outtextxy(40,327,"DE DE BABA");
		delay(3000);
		cleardevice();

		scene5stic();
		outtextxy(150,290,"SHUU SHUU.....");
		delay(2000);
		cleardevice();

		scene5stic();
		outtextxy(150,290,"GO AWAY");
		delay(1500);
	      cleardevice();

}


void scene1()
{
	settextstyle(2,0,10 );
	outtextxy(160,200,"EARTH TODAY");
	delay(2000);
}

void scene2(int a)
{
	if(a==1)
	{
		cleardevice();
		int a=40,b=60;
		setcolor(YELLOW);
		circle(a,b,40);        //sun
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(a,b,YELLOW);

		setcolor(15);

		circle(a,b,80);   //the path
		circle(a,b,120);
		circle(a,b,170);
		circle(a,b,240);
		circle(a,b,300);
		circle(a,b,340);
		circle(a,b,370);
		circle(a,b,400);
		settextstyle(DEFAULT_FONT,0,1);
		outtextxy(500,350,"SOLAR SYSTEM");

		setcolor(8);
		circle(a+70,b+39,10);
		setfillstyle(SOLID_FILL,8);
		floodfill(a+70,b+39,8);

		setcolor(12);
		circle(a,b+120,13);
		setfillstyle(SOLID_FILL,12);
		floodfill(a,b+120,12);

		setcolor(2);
		circle(a+130,b+109,17);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(a+130,b+109,2);
		outtextxy(190,160,"EARTH");

		setcolor(12);
		circle(a+210,b+116,10);
		setfillstyle(SOLID_FILL,12);
		floodfill(a+210,b+116,12);

		setcolor(8);
		circle(a+30,b+298,15);
		setfillstyle(SOLID_FILL,8);
		floodfill(a+30,b+298,8);

		setcolor(15);
		ellipse(a+295,b+169,0,360,46,10);
		setcolor(8);
		circle(a+295,b+169,30);
		setfillstyle(SOLID_FILL,8);
		floodfill(a+295,b+155,8);
		floodfill(a+295,b+180,8);
		floodfill(a+295,b+169,8);

		setcolor(5);
		circle(a+290,b+230,10);
		setfillstyle(SOLID_FILL,5);
		floodfill(a+290,b+230,5);

		setcolor(13);
		circle(a+250,b+312,10);
		setfillstyle(SOLID_FILL,13);
		floodfill(a+250,b+312,13);
		delay(3000);
		cleardevice();
	}

	else if(a==2)
	{

	cleardevice();
	int a=40,b=60;
	setcolor(YELLOW);
	circle(a,b,40);        //sun
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(a,b,YELLOW);

	setcolor(15);

	circle(a,b,80);   //the path
	circle(a,b,120);
	circle(a,b,170);
	circle(a,b,240);
	circle(a,b,300);
	circle(a,b,340);
	circle(a,b,370);
	circle(a,b,400);
	settextstyle(DEFAULT_FONT,0,1);
	outtextxy(500,350,"SOLAR SYSTEM");

	setcolor(8);
	circle(a+70,b+39,10);
	setfillstyle(SOLID_FILL,8);
	floodfill(a+70,b+39,8);

	setcolor(12);
	circle(a,b+120,13);
	setfillstyle(SOLID_FILL,12);
	floodfill(a,b+120,12);

	setcolor(YELLOW);
	settextstyle(7,0,1);
	outtextxy(450,300,"EARTH GAYAB!!!!!!!");

	setcolor(12);
	circle(a+210,b+116,10);
	setfillstyle(SOLID_FILL,12);
	floodfill(a+210,b+116,12);

	setcolor(8);
	circle(a+30,b+298,15);
	setfillstyle(SOLID_FILL,8);
	floodfill(a+30,b+298,8);

	setcolor(15);
	ellipse(a+295,b+169,0,360,46,10);
	setcolor(8);
	circle(a+295,b+169,30);
	setfillstyle(SOLID_FILL,8);
	floodfill(a+295,b+155,8);
	floodfill(a+295,b+180,8);
	floodfill(a+295,b+169,8);

	setcolor(5);
	circle(a+290,b+230,10);
	setfillstyle(SOLID_FILL,5);
	floodfill(a+290,b+230,5);

	setcolor(13);
	circle(a+250,b+312,10);
	setfillstyle(SOLID_FILL,13);
	floodfill(a+250,b+312,13);
	delay(3000);
	cleardevice();

	}
}



void scene3()
{
       int x=getmaxx()/2;
       int y=getmaxy()/2;

	      setcolor(GREEN);
	      setfillstyle(SOLID_FILL,GREEN);
	      circle(x,y,150);
	      floodfill(x,y,GREEN);

		  setcolor(15);
		  setfillstyle(SOLID_FILL,15);
		  ellipse(x-50,y-50,0,360,15,20);
		  floodfill(x-50,y-50,15);

		  ellipse(x+50,y-50,0,360,15,20);
		  floodfill(x+50,y-50,15);

       setcolor(0);
       setfillstyle(SOLID_FILL,0);
       circle(x-50,y-46,10);
       floodfill(x-50,y-50,0);
       circle(x+50,y-46,10);
       floodfill(x+50,y-50,0);

       setcolor(0);
       setfillstyle(SOLID_FILL,0);
       arc(x,y+50,180,360,50);
       arc(x,y+46,180,360,45);
       arc(x+55,y+50,120,270,10);
       arc(x-55,y+50,270,60,10);
       floodfill(x,y+99,0);
       delay(1000);

       setcolor(15);
       settextstyle(0,0,2);
       outtextxy(x-50,y-200,"HAPPY EARTH");

       delay(3000);
       cleardevice();

}


void crops()
{

	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(40,50,10);
	floodfill(40,50,YELLOW);

	setcolor(6);
	line(0,400,640,400);

	setcolor(GREEN);
		int x1=20 , x2=50, ln=35,j=0, y=400, z=385;

		for(int i=0 ; i<8 ; i++)
		{
			for(j=0 ; j<16 ; j++)
			{
				arc(x1,y,0,87,15);
				line(ln,y,ln,z);
				arc(x2,y,93,180,15);


				 x1=x1+30;
				 x2=x2+30;
				 ln=ln+30;
			 }
		x1=20 ; x2=50; ln=35;
		y=y-25;
		z=z-25;
		}

}

void manfarm1()
{       int j=240;
		setcolor(15);
				circle(550-j,300-150,15);
				line(550-j,315-150,550-j,365-150);
				line(550-j,320-150,530-j,330-150);
				line(550-j,320-150,560-j,330-150);
				line(550-j,365-150,530-j,375-150);
				line(550-j,365-150,560-j,375-150);

				j++;

}
void farmer()
{
	int j=1;

	for(int i=0 ; i<400 ; i++)
	{    if(i<=160)

		{	setcolor(15);
			circle(550,300-i,15);
			line(550,315-i,550,365-i);
			line(550,320-i,530,330-i);
			line(550,320-i,560,330-i);
			line(550,365-i,530,375-i);
			line(550,365-i,560,375-i);
		 }
		       else if(i>=161)
			{
				setcolor(15);
				circle(550-j,300-150,15);
				line(550-j,315-150,550-j,365-150);
				line(550-j,320-150,530-j,330-150);
				line(550-j,320-150,560-j,330-150);
				line(550-j,365-150,530-j,375-150);
				line(550-j,365-150,560-j,375-150);

				j++;
			}
		crops();
		delay(40);
		cleardevice();


	}       manfarm1();
		crops();
		setcolor(YELLOW);
		settextstyle(0,0,1);
		outtextxy(100,100,"FARMER : YEILD LOOKS PRETTY GOOD THIS YEAR");
		outtextxy(100,115,"         I THINK I WILL MAKE A LOT OF PROFIT FROM THIS HARVEST");
		delay(5000);
		cleardevice();
}




void earthafter()
{

	settextstyle(2,0,10 );
	outtextxy(100,400,"EARTH AFTER 100 YEARS");
	delay(2000);


}

 void earth()
 {
	     int x=getmaxx()/2;
       int y=getmaxy()/2;

	     setcolor(8);
	      setfillstyle(SOLID_FILL,8);
	      circle(x,y,150);
	      floodfill(x,y,8);

		  setcolor(15);
		  setfillstyle(SOLID_FILL,15);
		  ellipse(x-50,y-50,0,360,15,20);
		  floodfill(x-50,y-50,15);

		  ellipse(x+50,y-50,0,360,15,20);
		  floodfill(x+50,y-50,15);

       setcolor(0);
       setfillstyle(SOLID_FILL,0);
       circle(x-50,y-46,10);
       floodfill(x-50,y-50,0);
       circle(x+50,y-46,10);
       floodfill(x+50,y-50,0);

       setcolor(15);
       arc(x,y+50,0,180,50);
       arc(x,y+46,0,180,45);
       arc(x+55,y+50,120,270,10);
       arc(x-55,y+50,270,60,10);
       delay(1000);

       setcolor(15);
       ellipse(x,y-200,0,360,60,30);
       arc(x,y-170,300,360,30);
       settextstyle(0,0,2);
       settextstyle(0,0,1);
       outtextxy(x-50,y-200,"NOT SO HAPPY...!");

       delay(3000);
       earthafter();

 }

 void table(int a)
{
	if(a==1)
	{
		line(330,400,330,375);
		line(370,400,370,375);
		line(330,375,370,375);
	}
	else if(a==2)
	 {
		line(310,400,310,375);
		line(350,400,350,375);
		line(310,375,350,375);

	 }
}

void house()
{
       line(400,200,700,200);
       line(350,240,700,240);
       line(400,200,350,240);
       rectangle(430,240,700,400);
       rectangle(450,330,500,400);
}

void crop2()
{

       line(0,400,640,400);

       setcolor(YELLOW);
       rectangle(10,200,260,350);
       arc(40,240,0,87,15);
       arc(70,240,93,180,15);
       line(55,240,55,225);

       arc(200,300,0,87,15);
       arc(230,300,93,180,15);
       line(215,300,215,285);

       setcolor(15);

}
void manfarm2(int a)
{
	if(a==1)
	{
		line(360,240,360,297);
		ellipse(360,310,0,360,10,13);
		ellipse(360,313,0,360,10,10);
		circle(355,306,2);
		circle(365,306,2);
		line(360,319,360,365);
		line(360,336,375,320);
		line(360,336,345,320);
		line(360,365,370,375);
		line(360,365,350,375);
	}

	else if(a==2)
	{

		line(360,240,360,297);
		ellipse(360,310,0,360,10,13);
		ellipse(364,313,0,360,10,10);
		circle(357,310,4);
		circle(367,310,4);
		line(360,319,360,365);
		line(360,336,370,350);
		line(360,336,345,350);
		line(360,365,370,375);
		line(360,365,350,375);
	}
}
void farmer2()
{
       house();
       table(1);
       crop2();
       manfarm2(1);
       house();
       delay(1000);
       settextstyle(0,0,1);
       outtextxy(20,50,"FARMER : BOLO KRISHAN KANHAIA LAL Kiiiii .... JAI");
       delay(4000);
       cleardevice();
       crop2();
       house();
       table(2);
       manfarm2(2);
       settextstyle(0,0,2);
       outtextxy(20,50,"SUICIDE");
       delay(3000);
       cleardevice();

}
void m3()
{
		circle(450-100,270,20);
		line(451-100,288,454-100,308);
		line(453-100,289,434-100,297);
		line(453-100,289,469-100,302);



}

void stic4()
{            int i=160;

		setcolor(15);
		 circle(74+i,303,20);
		 line(71+i,325,71+i,370);
		 line(72+i,345,37+i,372);
		 line(72+i,345,105+i,372);
		 line(72+i,369,44+i,403);
		 line(72+i,369,96+i,403);
		 line(1,405,638,401);

		settextstyle(1,0,1);
		outtextxy(340,173,"AMBANI OXYGEN STORE");
		rectangle(265,118,589,230);
		rectangle(265,232,311,405);
		rectangle(536,232,586,400);
		line(312,308,535,309);



}

inline void bottle()
{
			rectangle(362,280,369,302);
			circle(365,277,3);

}
void scene4()
{

	      setcolor(15);

		    for(int i=0;i<160;i++)
		    {
			 circle(74+i,303,20);
			 line(71+i,325,71+i,370);
			 line(72+i,345,37+i,372);
			 line(72+i,345,105+i,372);
			 line(72+i,369,44+i,403);
			 line(72+i,369,96+i,403);
			 line(1,405,638,401);
			 delay(25);
			 cleardevice();

			setcolor(15);
			settextstyle(1,0,1);
			outtextxy(340,173,"AMBANI OXYGEN STORE");

			rectangle(265,118,589,230);
			rectangle(265,232,311,405);
			rectangle(536,232,586,400);
			line(312,308,535,309);
			circle(450-100,270,20);
			line(451-100,288,454-100,308);
			line(453-100,289,434-100,297);
			line(453-100,289,469-100,302);

		}
		stic4();
		m3();
		settextstyle(0,0,1);
		outtextxy(120,270,"DO YOU HAVE OXYGEN CYLINDER ????");
		delay(3000);
		cleardevice();

		int j=1;


		for( i=0 ; i<200 ; i++)
		{
			if(i<=100)
			{
			circle(450-100+i,270,20);
			line(451-100+i,288,454-100+i,308);
			line(453-100+i,289,434-100+i,297);
			line(453-100+i,289,469-100+i,302);
			}

			else if(i>=101)
			{
			circle(450-j,270,20);
			line(451-j,288,454-j,308);
			line(453-j,289,434-j,297);
			line(453-j,289,469-j,302);

			rectangle(462-j,280,469-j,302);
			circle(465-j,277,3);
			j++;
			}

		delay(30);
		cleardevice();
		stic4();

		}

			stic4();
			m3();
			settextstyle(0,0,1);
			outtextxy(300,240,"1 CRORE");
			delay(2000);
			cleardevice();
			bottle();

		stic4();
		m3();
		settextstyle(0,0,1);
		outtextxy(120,270,"CAN I GET ONE MORE CYCLINDER");
		delay(3000);
		cleardevice();

		m3();
		stic4();
		bottle();
		settextstyle(0,0,1);
		outtextxy(300,340,"yes yes");

		  j=1;
		for( i=0 ; i<200 ; i++)
		{       bottle();
			if(i<=100)
			{
			circle(450-100+i,270,20);
			line(451-100+i,288,454-100+i,308);
			line(453-100+i,289,434-100+i,297);
			line(453-100+i,289,469-100+i,302);
			}

			else if(i>=101)
			{
			circle(450-j,270,20);
			line(451-j,288,454-j,308);
			line(453-j,289,434-j,297);
			line(453-j,289,469-j,302);

			rectangle(462-j,280,469-j,302);
			circle(465-j,277,3);
			j++;
		}
		delay(30);
		cleardevice();
		stic4();
	}

	m3();
	stic4();
	delay(1000);
	outtextxy(300,340,"TOTAL 2 CRORE");
	delay(2000);
	cleardevice();

	}
void finalscene()
{
	setcolor(15);
	settextstyle(7,0,1);
	outtextxy((getmaxx()/2)-100,getmaxy()/2,"DO YOU WANT TO SEE SUCH DAYS ...? ");
	delay(3000);
	cleardevice();
	outtextxy((getmaxx()/2)-100,getmaxy()/2,"NO, RIGHT.. ");
	delay(3000);
	cleardevice();
	outtextxy((getmaxx()/2)-100,getmaxy()/2,"THEN!!!!! ");
	delay(5000);
	line(0,400,700,400);
		for(int i=0 ; i<700 ; i++)
		{       setcolor(15);
			circle(0+i,370,30);    //rear wheel
			circle(110+i,370,30);              //frontwheel
			line(0+i,370,35+i,330);              //backtubes
			line(0+i,370,50+i,370);
			line(110+i,370,97+i,317);           //fork
			line(50+i,370,30+i,320);          //seatpost
			ellipse(30+i,320,0,360,10,3);         //seat
			line(35+i,330,98+i,327);    //top tube
			line(98+i,333,50+i,370);              //bottom tube
			line(87+i,317,108+i,318);        //handle
			arc(87+i,322,270,90,5);  //drops
			arc(108+i,323,270,90,5);        //drops
			line(108+i,318,108+i,218);     //danda
			circle(50+i,370,10);          //crank
			line(50+i,370,70+i,370);        //pedal
			line(67+i,367,72+i,372);         //peadl
			circle(60+i,280,10);
			line(51+i,282,30+i,306);
			arc(35+i,313,105,270,8);
			line(35+i,321,63+i,333);  //thighs
			line(63+i,333,67+i,367);    //calf
			line(48+i,287,87+i,327);
			line(48+i,287,108+i,328);
			setcolor(GREEN);
			setfillstyle(SOLID_FILL,GREEN);
			rectangle(108+i,218,0+i,178);
			floodfill(10+i,215,GREEN);
			setcolor(0);
			settextstyle(0,0,1);
			outtextxy(20+i,198,"GO GREEN");
			delay(5);
			cleardevice();
		}


}


void main()
{
	clrscr();
	int gd,gm;

	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C://TurboC3//bgi");

       scene1();
	scene2(1);
       scene3();
       farmer();
       earth();
	cleardevice();
       farmer2();
      scene4();
      scene5();

       scene2(2);
	finalscene();



getch();


}