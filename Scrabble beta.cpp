#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int num[6],cal[11],res1[11],i,j,numram,op,eleccion,op2,rest,puntaje,puntaje2,nori[11],ope[4],puntos,turnos;
main()
{	
	printf("\n El juego consiste en formar el numero pedido con los numeros que te tocan usando operaciones matematicas o juntando \n los dos numeros. Si el resultado coinside con el numero pedido entonces se le agregan los puntos obtenidos\n");
	
	do{
		turnos=turnos+1;
		if(turnos%2==1){
		printf("\n|||	Jugador 1	|||\n");
		if(rest==numram){
			puntaje=puntaje+puntos;
		}
		}
		else{
			printf("\n|||	Jugador 2	|||\n");
		if(rest==numram){
			puntaje2=puntaje2+puntos;
		}
		}
		printf("puntos del jugador 1: %d\npuntos del jugador 2: %d",puntaje,puntaje2);
		
		srand(time(NULL));
		num[0]=1+rand()%(9);
		num[1]=1+rand()%(9);
		num[2]=1+rand()%(9);
		num[3]=1+rand()%(9);
		num[4]=1+rand()%(9);
		numram=1+rand()%(100);
		printf("\nNumero que debe formar %d",numram);
		for(i=0;i<11;i++){
		printf("\n Ingrese %d° numero:\n",i+1);
		if(num[0]!=0){
			printf("1)%d\n",num[0]);
		}
		if(num[1]!=0){
			printf("2)%d\n",num[1]);
		}
		if(num[2]!=0){
			printf("3)%d\n",num[2]);
		}
		if(num[3]!=0){
			printf("4)%d\n",num[3]);
		}
		if(num[4]!=0){
			printf("5)%d\n",num[4]);
		}
		if(i>1){
			if(res1[1]!=0){
				printf("7)%d\n",res1[1]);
			}
		}
		if(i>3){
			if(res1[3]!=0){
				printf("8)%d\n",res1[3]);
			}
		}
		if(i>5){
			if(res1[5]!=0){
				printf("9)%d\n",res1[5]);
			}
		}
		printf("6)Terminar\n");
		scanf("%d",&eleccion);             
		if(eleccion==1){
			cal[i]=num[0];
			nori[i]=num[0];
			num[0]=0;
		}
		if(eleccion==2){
			cal[i]=num[1];
			nori[i]=num[1];
			num[1]=0;
		}
		if(eleccion==3){
			cal[i]=num[2];
			nori[i]=num[2];
			num[2]=0;
		}
		if(eleccion==4){
			cal[i]=num[3];
			nori[i]=num[3];
			num[3]=0;
		}
		if(eleccion==5){
			cal[i]=num[4];
			nori[i]=num[4];
			num[4]=0;
		}
		if(eleccion==6){
			i=12;
		}
		if(eleccion==7){
			cal[i]=res1[1];
			res1[1]=0;
		}
		if(eleccion==8){
			cal[i]=res1[3];
			res1[3]=0;
		}
		if(eleccion==9){
			cal[i]=res1[5];
			res1[5]=0;
		}
			if(i%2==1){
			printf("desea:\n1)%d+%d\n2)%d-%d\n",cal[i-1],cal[i],cal[i-1],cal[i]);
			printf("3)%dx%d\n4)%d/%d\n5)%d%d\n",cal[i-1],cal[i],cal[i-1],cal[i],cal[i-1],cal[i]);
			scanf("%d",&op);
			switch(op){
			case 1:
				res1[i]=cal[i-1]+cal[i];
				ope[0]=ope[0]+1;
				break;
			case 2:
				res1[i]=cal[i-1]-cal[i];
				ope[1]=ope[1]+1;
				break;
			case 3:
				res1[i]=cal[i-1]*cal[i];
				ope[2]=ope[2]+1;
				break;
			case 4:
				res1[i]=cal[i-1]/cal[i];
				ope[3]=ope[3]+1;
				break;
			case 5:
				res1[i]=(cal[i-1]*10)+cal[i];
				break;
			default: printf("No es una opcion");
		}
		}
		if(res1[i]!=0){
			rest=res1[i];
			}
		if(i<9){
			printf("desea ingresar otro numero\n1)si\n2)no\n");
			scanf("%d",&op2);
			if(op2==2){
			
			if(i==0){
				rest=cal[0];
			}
				i=12;
			}
		}
	}
	printf("el resultado es %d",rest);
	if(rest==numram){
	printf("\nEl resultado coinside con el numero pedido");
	puntos=3;
	}
	printf("\nnumero usados: ");
		for(i=0;i<9;i++){
		if(nori[i]!=0){
			printf("[%d]",nori[i]);
		}
}
printf("\ncantidad de veces que suma: %d    resto: %d    multiplico: %d    dividio: %d\n",ope[0],ope[1],ope[2],ope[3]);
}
	while(puntaje<15||puntaje2<15);
}
