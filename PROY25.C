/* PROYECTO DE CONCEPTOS DE LENGUAJES ESCENAS*/
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void main (void){
int array[50]={47,115,54,88,34,72,59,71,68,45,77,70,101,72,83,88,90,115,69,100,47,115};
int array1[50]={45,278,52,250,31,234,57,234,67,207,77,234,103,234,84,250,90,278,67,263,45,278};
/*TRIANGULOS*/
int triangulo1[50]={ 530,94,572.5,21,615,94,530,94};
int triangulo2[50]={530,179,572.5,106,615,179,530,179 };
int triangulo3[50]={530,264,572.5,191,615,264,530,264 };
int triangulo4[50]={530,349,572.5,276,615,349,530,349};
/*HEXAGONO*/
int hexa[50]={87,403,87,370,117,355,148,371,148,403,117,420,87,403};
int hexa1[50]={368,403,368,370,398,355,429,371,429,403,398,420,368,403};

	  int driver=DETECT, modo;
	  initgraph(&driver,&modo,"c:\\tc20\\bin");
	  cleardevice();
	  /*PRESENTACIOON*/
	  setbkcolor(DARKGRAY);
	  setfillstyle(2,BLACK);

	  /*inicio presentacion*/
	  setfillstyle(1,LIGHTBLUE);
	  bar(10,10,630,465);

	  setfillstyle(1,BLUE);
	  bar3d(115,55,490,100,15,15);
      settextstyle(1,0,1);
	  outtextxy(120,63,"UNIVERSIDAD NACIONAL DE INGENIERIA");

	  setfillstyle(1,BLUE);
	  bar3d(115,128,550,176,15,15);
	  settextstyle(1,0,1);
	  outtextxy(120,140,"FACULTAD DE ELECTROTECNIA Y COMPUTACION");

      setfillstyle(1,BLUE);
	  bar3d(115,195,340,240,15,15);
	  settextstyle(1,0,1);
	  outtextxy(120,205,"GRUPO : 1M3-CO");

      setfillstyle(1,BLUE);
	  bar3d(115,263,400,320,15,15);
	  settextstyle(1,0,1);
	  outtextxy(120,275,"PROFESOR : GREVIN SILVA");

      setfillstyle(1,BLUE);
	  bar3d(115,340,510,385,15,15);
	  settextstyle(1,0,1);
	  outtextxy(120,345,"NOMBRE : BERGMAN MARTINEZ MENDIETA");

	  /*estrella 1 */
	  setcolor(RED);
	  setfillstyle(1,MAGENTA);
	  drawpoly(11,array);
	  floodfill(67,82,RED);

	  /*estrella 2 */
	  setcolor(RED);
	  setfillstyle(1,MAGENTA);
	  drawpoly(11,array1);
	  floodfill(63,247,RED);

	  /*circulo para siguiente*/
	  setcolor(RED);
	  setfillstyle(1,MAGENTA);
	  ellipse(570,420,237,220,50,28);
	  line(542,445,530,457);
	  line(531,438,530,457);
	  floodfill(570,420,RED);
	  setcolor(WHITE);
	  outtextxy(525,410,"SIGUIENTE");
getch();
   cleardevice();
		  setbkcolor(CYAN);
		/*ESCENAS DEL PROYECTO*/

		setfillstyle(1,LIGHTBLUE);
		bar3d(6,6,630,475,10,10);
		floodfill(320,240,LIGHTBLUE);

		/*PRIMER CUADRO*/
		setcolor(BLUE);

		/*arcos izquierdos arriba,abajo respc*/
		arc(40,41,130,180,25);
		arc(37,325,207,248,25);

		/*arco derechos arriba, abajo respc*/
		arc(231,42,5,50,25);
		arc(236,330,297,360,20);

		/*linea superior e inferior*/
		line(24,23,246,23);
		line(29,348,246,348);

		/*lineas laterales*/
		line(15,42,15,335);
		line(256,40,256,330);

		/*SEGUNDO CUADRO*/

        /*arcos izquierdos arriba,abajo respc*/
		arc(284,41,130,180,25);
		arc(282,325,205,248,25);

		/*arco derechos arriba, abajo respc*/
		arc(490,42,0,53,25);
		arc(495,330,297,360,20);

        	/*linea superior e inferior*/
		line(268,23,505,23);
		line(273,348,505,348);

		/*lineas laterales*/
		line(259,41,259,335);
		line(515,40,515,330);

		/*TRIANGULOS*/


   setcolor(BLUE);

   setfillstyle(1,LIGHTRED);
      drawpoly(4,triangulo1);
   floodfill(571,69,BLUE);


   setfillstyle(1,YELLOW);
		drawpoly(4,triangulo2);
   floodfill(567,155,BLUE);

   setfillstyle(1,MAGENTA);
		drawpoly(4,triangulo3);
  floodfill(575,232,BLUE);

   setfillstyle(1,GREEN);
		drawpoly(4,triangulo4);
	floodfill(567,321,BLUE);

		/*ELLPSE*/
		setfillstyle(1,LIGHTGRAY);
		ellipse(256,390,0,360,50,25);
		floodfill(253,390,BLUE);

		/*HEXAGONOS*/
		setcolor(BLUE);
		setfillstyle(2,WHITE);
		drawpoly(7,hexa);
		floodfill(117,391,BLUE);

		drawpoly(7,hexa1);
		floodfill(393,384,BLUE);


		/*TEXTOS DE TRIANGULOS*/
			settextstyle(0,0,1);

		outtextxy (555,66,"EXIT");
		outtextxy (555,151,"HELP");
		outtextxy (555,236,"NEXT");
		outtextxy (545,331,"PREVIEW");

		 /*TEXTO 1 y 2 y inicio*/
			settextstyle(1,0,3);
			outtextxy(113,372,"1" );
			outtextxy(394,372,"2" );
			outtextxy(225,375,"INICIO" );

getch();


cleardevice();
		  setbkcolor(CYAN);
		/*ESCENAS DEL PROYECTO*/

		setfillstyle(1,LIGHTBLUE);
		bar3d(6,6,630,475,10,10);
		floodfill(320,240,LIGHTBLUE);

		/*PRIMER CUADRO*/
		setcolor(BLUE);

		/*arcos izquierdos arriba,abajo respc*/
		arc(40,41,130,180,25);
		arc(37,325,207,248,25);

		/*arco derechos arriba, abajo respc*/
		arc(231,42,5,50,25);
		arc(236,330,297,360,20);

		/*linea superior e inferior*/
		line(24,23,246,23);
		line(29,348,246,348);

		/*lineas laterales*/
		line(15,42,15,335);
		line(256,40,256,330);

		/*SEGUNDO CUADRO*/

        /*arcos izquierdos arriba,abajo respc*/
		arc(284,41,130,180,25);
		arc(282,325,205,248,25);

		/*arco derechos arriba, abajo respc*/
		arc(490,42,0,53,25);
		arc(495,330,297,360,20);

        	/*linea superior e inferior*/
		line(268,23,505,23);
		line(273,348,505,348);

		/*lineas laterales*/
		line(259,41,259,335);
		line(515,40,515,330);

		/*TRIANGULOS*/


   setcolor(BLUE);

   setfillstyle(1,LIGHTRED);
      drawpoly(4,triangulo1);
   floodfill(571,69,BLUE);


   setfillstyle(1,YELLOW);
		drawpoly(4,triangulo2);
   floodfill(567,155,BLUE);

   setfillstyle(1,MAGENTA);
		drawpoly(4,triangulo3);
  floodfill(575,232,BLUE);

   setfillstyle(1,GREEN);
		drawpoly(4,triangulo4);
	floodfill(567,321,BLUE);

		/*ELLPSE*/
		setfillstyle(1,LIGHTGRAY);
		ellipse(256,390,0,360,50,25);
		floodfill(253,390,BLUE);

		/*HEXAGONOS*/
		setcolor(BLUE);
		setfillstyle(2,WHITE);
		drawpoly(7,hexa);
		floodfill(117,391,BLUE);

		drawpoly(7,hexa1);
		floodfill(393,384,BLUE);


		/*TEXTOS DE TRIANGULOS*/
			settextstyle(0,0,1);

		outtextxy (555,66,"EXIT");
		outtextxy (555,151,"HELP");
		outtextxy (555,236,"NEXT");
		outtextxy (545,331,"PREVIEW");

		 /*TEXTO 1 y 2 y inicio*/
			settextstyle(1,0,3);
			outtextxy(113,372,"1" );
			outtextxy(394,372,"2" );
			outtextxy(225,375,"INICIO" );

getch();

cleardevice();
		  setbkcolor(CYAN);
		/*ESCENAS DEL PROYECTO*/

		setfillstyle(1,LIGHTBLUE);
		bar3d(6,6,630,475,10,10);
		floodfill(320,240,LIGHTBLUE);

		/*PRIMER CUADRO*/
		setcolor(BLUE);

		/*arcos izquierdos arriba,abajo respc*/
		arc(40,41,130,180,25);
		arc(37,325,207,248,25);

		/*arco derechos arriba, abajo respc*/
		arc(231,42,5,50,25);
		arc(236,330,297,360,20);

		/*linea superior e inferior*/
		line(24,23,246,23);
		line(29,348,246,348);

		/*lineas laterales*/
		line(15,42,15,335);
		line(256,40,256,330);

		/*SEGUNDO CUADRO*/

        /*arcos izquierdos arriba,abajo respc*/
		arc(284,41,130,180,25);
		arc(282,325,205,248,25);

		/*arco derechos arriba, abajo respc*/
		arc(490,42,0,53,25);
		arc(495,330,297,360,20);

        	/*linea superior e inferior*/
		line(268,23,505,23);
		line(273,348,505,348);

		/*lineas laterales*/
		line(259,41,259,335);
		line(515,40,515,330);

		/*TRIANGULOS*/


   setcolor(BLUE);

   setfillstyle(1,LIGHTRED);
      drawpoly(4,triangulo1);
   floodfill(571,69,BLUE);


   setfillstyle(1,YELLOW);
		drawpoly(4,triangulo2);
   floodfill(567,155,BLUE);

   setfillstyle(1,MAGENTA);
		drawpoly(4,triangulo3);
  floodfill(575,232,BLUE);

   setfillstyle(1,GREEN);
		drawpoly(4,triangulo4);
	floodfill(567,321,BLUE);

		/*ELLPSE*/
		setfillstyle(1,LIGHTGRAY);
		ellipse(256,390,0,360,50,25);
		floodfill(253,390,BLUE);

		/*HEXAGONOS*/
		setcolor(BLUE);
		setfillstyle(2,WHITE);
		drawpoly(7,hexa);
		floodfill(117,391,BLUE);

		drawpoly(7,hexa1);
		floodfill(393,384,BLUE);


		/*TEXTOS DE TRIANGULOS*/
			settextstyle(0,0,1);

		outtextxy (555,66,"EXIT");
		outtextxy (555,151,"HELP");
		outtextxy (555,236,"NEXT");
		outtextxy (545,331,"PREVIEW");

		 /*TEXTO 1 y 2 y inicio*/
			settextstyle(1,0,3);
			outtextxy(113,372,"1" );
			outtextxy(394,372,"2" );
			outtextxy(225,375,"INICIO" );

getch();


closegraph();
}


