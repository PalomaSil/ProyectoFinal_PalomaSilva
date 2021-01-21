/* Proyecto Final: Reservación de cajón en el estacionamiento de la Facultad de Ingeniería          Silva Rodríguez Paloma Mariel
Fecha de entrega: 22 de Enero de 2021*/

//Sección de librerías que se usarán en el código
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define Texto_Maximo 40

/*Este programa es un sistema para reservar un cajón dentro de los estacionamientos de 
la Facultad de Ingeniería, con el objetivo de mejorar la organización dentro de estos.*/

  
//Declaración de variables globales
//No hay variables globales


//Declaración de funciones
int main(){
	//Declaración de variables locales 
	//Uso de variables: Definir los cajones y otorgarles su horario de disponibilidad
	
	unsigned int horas, caj, op, d, cont, i, ho1, ho2, ver;
	char L[Texto_Maximo], NoCu[9];
	int A[6][15], P[11][15];
	
	//Bloque de instrucciones
	/*Este bloque es para organizar los cajones en cada estacionamiento y otorgarles los horarios
	correspondientes, para que de esta manera se pueda proceder a hacer la reservación*/ 


	printf("\t\t\t\t    UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERIA\n\nBienvenido.\n\n Elija el estacionamiento al que quiere reservar.\n\n Principal (1)\n Anexo (2).\n\nEstacionamiento: ");
	scanf("%i",&op);
	system("cls");//Se limpia la pantalla para que aparezca el siguiente menú
	switch(op){
		case 1: 
			P[0][0]=7, P[0][1]=8, P[0][2]=9, P[0][3]=10, P[0][4]=11, P[0][5]=12, P[0][6]=13, P[0][7]=14, P[0][8]=15, P[0][9]=16, P[0][10]=17, P[0][11]=18, P[0][12]=19, P[0][13]=20, P[0][14]=21;
			P[1][0]=7, P[1][1]=8, P[1][2]=9, P[1][3]=10, P[1][4]=11, P[1][5]=12, P[1][6]=13, P[1][7]=14, P[1][8]=15, P[1][9]=16, P[1][10]=17, P[1][11]=18, P[1][12]=19, P[1][13]=20, P[1][14]=21;
			P[2][0]=7, P[2][1]=8, P[2][2]=9, P[2][3]=10, P[2][4]=11, P[2][5]=12, P[2][6]=13, P[2][7]=14, P[2][8]=15, P[2][9]=16, P[2][10]=17, P[2][11]=18, P[2][12]=19, P[2][13]=20, P[2][14]=21;
			P[3][0]=7, P[3][1]=8, P[3][2]=9, P[3][3]=10, P[3][4]=11, P[3][5]=12, P[3][6]=13, P[3][7]=14, P[3][8]=15, P[3][9]=16, P[3][10]=17, P[3][11]=18, P[3][12]=19, P[3][13]=20, P[3][14]=21;
			P[4][0]=7, P[4][1]=8, P[4][2]=9, P[4][3]=10, P[4][4]=11, P[4][5]=12, P[4][6]=13, P[4][7]=14, P[4][8]=15, P[4][9]=16, P[4][10]=17, P[4][11]=18, P[4][12]=19, P[4][13]=20, P[4][14]=21;
			P[5][0]=7, P[5][1]=8, P[5][2]=9, P[5][3]=10, P[5][4]=11, P[5][5]=12, P[5][6]=13, P[5][7]=14, P[5][8]=15, P[5][9]=16, P[5][10]=17, P[5][11]=18, P[5][12]=19, P[5][13]=20, P[5][14]=21;
			P[6][0]=7, P[6][1]=8, P[6][2]=9, P[6][3]=10, P[6][4]=11, P[6][5]=12, P[6][6]=13, P[6][7]=14, P[6][8]=15, P[6][9]=16, P[6][10]=17, P[6][11]=18, P[6][12]=19, P[6][13]=20, P[6][14]=21;
			P[7][0]=7, P[7][1]=8, P[7][2]=9, P[7][3]=10, P[7][4]=11, P[7][5]=12, P[7][6]=13, P[7][7]=14, P[7][8]=15, P[7][9]=16, P[7][10]=17, P[7][11]=18, P[7][12]=19, P[7][13]=20, P[7][14]=21;
			P[8][0]=7, P[8][1]=8, P[8][2]=9, P[8][3]=10, P[8][4]=11, P[8][5]=12, P[8][6]=13, P[8][7]=14, P[8][8]=15, P[8][9]=16, P[8][10]=17, P[8][11]=18, P[8][12]=19, P[8][13]=20, P[8][14]=21;
			P[9][0]=7, P[9][1]=8, P[9][2]=9, P[9][3]=10, P[9][4]=11, P[9][5]=12, P[9][6]=13, P[9][7]=14, P[9][8]=15, P[9][9]=16, P[9][10]=17, P[9][11]=18, P[9][12]=19, P[9][13]=20, P[9][14]=21;
			P[10][0]=7, P[10][1]=8, P[10][2]=9, P[10][3]=10, P[10][4]=11, P[10][5]=12, P[10][6]=13, P[10][7]=14, P[10][8]=15, P[10][9]=16, P[10][10]=17, P[10][11]=18, P[10][12]=19, P[10][13]=20, P[10][14]=21;
			printf("\nSeleccione el dia al que va a reservar:\n 1. Lunes\n 2. Martes\n 3. Miercoles\n 4. Jueves\n 5. Viernes\n 6. Sabado\n\n");
			scanf("%i",&d);
			system("cls");//Se limpia la pantalla para que aparezca el siguiente menú
			switch(d){
				case 1:
					printf("----------Cajones disponibles: 11 (0-10)----------\n ----------HORARIO----------\n {'   ',P[0], P[1], P[2], P[3],  P[4],  P[5],  P[6],  P[7],  P[8],  P[9], P[10],  P[11], P[12], P[13], P[14]},\n {P[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[6], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[7], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[8], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[9], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[10],'7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n ");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-10:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									P[0][0]=0;
									cont++;
									break;
								case 8: 
									P[0][1]=0;
									cont++;									
									break;
								case 9: 
									P[0][2]=0;
									cont++;
									break;
								case 10:
									P[0][3]=0;
									cont++;
									break;
								case 11: 
									P[0][4]=0;
									cont++;
									break;
								case 12: 
									P[0][5]=0;
									cont++;
									break;
								case 13: 
									P[0][6]=0;
									cont++;
									break;
								case 14: 
									P[0][7]=0;
									cont++;
									break;
								case 15: 
									P[0][8]=0;
									cont++;
									break;
								case 16: 
									P[0][9]=0;
									cont++;
									break;
								case 17: 
									P[0][10]=0;
									cont++;
									break;
								case 18: 
									P[0][11]=0;
									cont++;
									break;
								case 19: 
									P[0][12]=0;
									cont++;
									break;
								case 20: 
									P[0][13]=0;
									cont++;
									break;
								case 21: 
									P[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										P[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										P[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										P[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										P[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										P[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										P[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										P[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										P[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										P[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										P[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										P[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										P[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										P[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										P[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										P[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: LUNES",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);							
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										P[1][0]=0;
										cont++;
										break;
									case 8: 
										P[1][1]=0;
										cont++;									
										break;
									case 9: 
										P[1][2]=0;
										cont++;
										break;
									case 10:
										P[1][3]=0;
										cont++;
										break;
									case 11: 
										P[1][4]=0;
										cont++;
										break;
									case 12: 
										P[1][5]=0;
										cont++;
										break;
									case 13: 
										P[1][6]=0;
										cont++;
										break;
									case 14: 
										P[1][7]=0;
										cont++;
										break;
									case 15: 
										P[1][8]=0;
										cont++;
										break;
									case 16: 
										P[1][9]=0;
										cont++;
										break;
									case 17: 
										P[1][10]=0;
										cont++;
										break;
									case 18: 
										P[1][11]=0;
										cont++;
										break;
									case 19: 
										P[1][12]=0;
										cont++;
										break;
									case 20: 
										P[1][13]=0;
										cont++;
										break;
									case 21: 
										P[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											P[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											P[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											P[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											P[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											P[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											P[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											P[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											P[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											P[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											P[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											P[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											P[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											P[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											P[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											P[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: LUNES",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);									
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											P[2][0]=0;
											cont++;
											break;
										case 8: 
											P[2][1]=0;
											cont++;									
											break;
										case 9: 
											P[2][2]=0;
											cont++;
											break;
										case 10:
											P[2][3]=0;
											cont++;
											break;
										case 11: 
											P[2][4]=0;
											cont++;
											break;
										case 12: 
											P[2][5]=0;
											cont++;
											break;
										case 13: 
											P[2][6]=0;
											cont++;
											break;
										case 14: 
											P[2][7]=0;
											cont++;
											break;
										case 15: 
											P[2][8]=0;
											cont++;
											break;
										case 16: 
											P[2][9]=0;
											cont++;
											break;
										case 17: 
											P[2][10]=0;
											cont++;
											break;
										case 18: 
											P[2][11]=0;
											cont++;
											break;
										case 19: 
											P[2][12]=0;
											cont++;
											break;
										case 20: 
											P[2][13]=0;
											cont++;
											break;
										case 21: 
											P[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												P[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												P[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												P[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												P[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												P[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												P[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												P[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												P[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												P[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												P[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												P[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												P[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												P[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												P[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												P[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: LUNES",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);	
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												P[3][0]=0;
												cont++;
												break;
											case 8: 
												P[3][1]=0;
												cont++;									
												break;
											case 9: 
												P[3][2]=0;
												cont++;
												break;
											case 10:
												P[3][3]=0;
												cont++;
												break;
											case 11: 
												P[3][4]=0;
												cont++;
												break;
											case 12: 
												P[3][5]=0;
												cont++;
												break;
											case 13: 
												P[3][6]=0;
												cont++;
												break;
											case 14: 
												P[3][7]=0;
												cont++;
												break;
											case 15: 
												P[3][8]=0;
												cont++;
												break;
											case 16: 
												P[3][9]=0;
												cont++;
												break;
											case 17: 
												P[3][10]=0;
												cont++;
												break;
											case 18: 
												P[3][11]=0;
												cont++;
												break;
											case 19: 
												P[3][12]=0;
												cont++;
												break;
											case 20: 
												P[3][13]=0;
												cont++;
												break;
											case 21: 
												P[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													P[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													P[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													P[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													P[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													P[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													P[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													P[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													P[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													P[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													P[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													P[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													P[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													P[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													P[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													P[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: LUNES",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);	
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													P[4][0]=0;
													cont++;
													break;
												case 8: 
													P[4][1]=0;
													cont++;									
													break;
												case 9: 
													P[4][2]=0;
													cont++;
													break;
												case 10:
													P[4][3]=0;
													cont++;
													break;
												case 11: 
													P[4][4]=0;
													cont++;
													break;
												case 12: 
													P[4][5]=0;
													cont++;
													break;
												case 13: 
													P[4][6]=0;
													cont++;
													break;
												case 14: 
													P[4][7]=0;
													cont++;
													break;
												case 15: 
													P[4][8]=0;
													cont++;
													break;
												case 16: 
													P[4][9]=0;
													cont++;
													break;
												case 17: 
													P[4][10]=0;
													cont++;
													break;
												case 18: 
													P[4][11]=0;
													cont++;
													break;
												case 19: 
													P[4][12]=0;
													cont++;
													break;
												case 20: 
													P[4][13]=0;
													cont++;
													break;
												case 21: 
													P[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														P[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														P[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														P[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														P[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														P[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														P[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														P[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														P[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														P[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														P[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														P[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														P[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														P[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														P[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														P[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: LUNES",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);	
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														P[5][0]=0;
														cont++;
														break;
													case 8: 
														P[5][1]=0;
														cont++;									
														break;
													case 9: 
														P[5][2]=0;
														cont++;
														break;
													case 10:
														P[5][3]=0;
														cont++;
														break;
													case 11: 
														P[5][4]=0;
														cont++;
														break;
													case 12: 
														P[5][5]=0;
														cont++;
														break;
													case 13: 
														P[5][6]=0;
														cont++;
														break;
													case 14: 
														P[5][7]=0;
														cont++;
														break;
													case 15: 
														P[5][8]=0;
														cont++;
														break;
													case 16: 
														P[5][9]=0;
														cont++;
														break;
													case 17: 
														P[5][10]=0;
														cont++;
														break;
													case 18: 
														P[5][11]=0;
														cont++;
														break;
													case 19: 
														P[5][12]=0;
														cont++;
														break;
													case 20: 
														P[5][13]=0;
														cont++;
														break;
													case 21: 
														P[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															P[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															P[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															P[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															P[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															P[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															P[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															P[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															P[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															P[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															P[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															P[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															P[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															P[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															P[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															P[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: LUNES",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);	
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											if(caj==6){
												printf("\n\n¿Cuantas horas va a reservar?:\n");
												scanf("%i",&horas);
												if(horas<=15){
													printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
													cont=1;
													printf("Digite la hora: \n");
													scanf("%i",&ho1);
													switch(ho1){
														case 7:
															P[6][0]=0;
															cont++;
															break;
														case 8: 
															P[6][1]=0;
															cont++;									
															break;
														case 9: 
															P[6][2]=0;
															cont++;
															break;
														case 10:
															P[6][3]=0;
															cont++;
															break;
														case 11: 
															P[6][4]=0;
															cont++;
															break;
														case 12: 
															P[6][5]=0;
															cont++;
															break;
														case 13: 
															P[6][6]=0;
															cont++;
															break;
														case 14: 
															P[6][7]=0;
															cont++;
															break;
														case 15: 
															P[6][8]=0;
															cont++;
															break;
														case 16: 
															P[6][9]=0;
															cont++;
															break;
														case 17: 
															P[6][10]=0;
															cont++;
															break;
														case 18: 
															P[6][11]=0;
															cont++;
															break;
														case 19: 
															P[6][12]=0;
															cont++;
															break;
														case 20: 
															P[6][13]=0;
															cont++;
															break;
														case 21: 
															P[6][14]=0;
															cont++;
															break;
														default:
															ho1=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
													ho2=(ho1+horas);
													while(cont<=horas){
														printf("\nDigite la hora: \n");
														scanf("%i",&i);
														switch(i){
															case 7:
																P[6][0]=0;
																i=0;
																cont++;
																break;
															case 8: 
																P[6][1]=0;
																i=0;
																cont++;
																break;
															case 9: 
																P[6][2]=0;
																i=0;
																cont++;
																break;
															case 10:
																P[6][3]=0;
																i=0;
																cont++;
																break;
															case 11: 
																P[6][4]=0;
																i=0;
																cont++;
																break;
															case 12: 
																P[6][5]=0;
																i=0;
																cont++;
																break;
															case 13: 
																P[6][6]=0;
																i=0;
																cont++;
																break;
															case 14: 
																P[6][7]=0;
																i=0;
																cont++;
																break;
															case 15: 
																P[6][8]=0;
																i=0;
																cont++;
																break;
															case 16: 
																P[6][9]=0;
																i=0;
																cont++;
																break;
															case 17: 
																P[6][10]=0;
																i=0;
																cont++;
																break;
															case 18: 
																P[6][11]=0;
																i=0;
																cont++;
																break;
															case 19: 
																P[6][12]=0;
																i=0;
																cont++;
																break;
															case 20: 
																P[6][13]=0;
																i=0;
																cont++;
																break;
															case 21: 
																P[6][14]=0;
																i=0;
																cont++;
																break;
															default:
																i=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
													}
													system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
													printf("\n Generando comprobante de reservacion.\n");
													printf("\n\nIngrese su nombre completo: ");
													FILE *p;
													p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
													fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
													fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
													fputs(" Reservación a nombre de: ",p);
													scanf(" %[^\n]",&L);
													strupr(L);
													fputs(L,p);
													fputs("\n\n No. cuenta: ",p);
													printf("\nIngrese su numero de cuenta: ");
													scanf(" %[^\n]",&NoCu);
													fputs(NoCu,p);
													fputs("\n\n Día seleccionado: LUNES",p);
													fputs("\n\n Cajón reservado: 6",p);
													fputs("\n\n Horas reservadas: ",p);
													fprintf(p,"%i", horas);	
													fputs("\n\n Hora de entrada: ",p);
													fprintf(p,"%i", ho1);
													fputs("   HRS. ",p);
													fputs("\n\n Hora de salida: ",p);
													fprintf(p,"%i", ho2);
													fputs("   HRS. ",p);
													fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
													fclose(p);
													printf("\n Comprobante generado exitosamente.\n");
												}
												else{
													horas=0;
													printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
												}
											}
											else{
												if(caj==7){
													printf("\n\n¿Cuantas horas va a reservar?:\n");
													scanf("%i",&horas);
													if(horas<=15){
														printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
														cont=1;
														printf("Digite la hora: \n");
														scanf("%i",&ho1);
														switch(ho1){
															case 7:
																P[7][0]=0;
																cont++;
																break;
															case 8: 
																P[7][1]=0;
																cont++;									
																break;
															case 9: 
																P[7][2]=0;
																cont++;
																break;
															case 10:
																P[7][3]=0;
																cont++;
																break;
															case 11: 
																P[7][4]=0;
																cont++;
																break;
															case 12: 
																P[7][5]=0;
																cont++;
																break;
															case 13: 
																P[7][6]=0;
																cont++;
																break;
															case 14: 
																P[7][7]=0;
																cont++;
																break;
															case 15: 
																P[7][8]=0;
																cont++;
																break;
															case 16: 
																P[7][9]=0;
																cont++;
																break;
															case 17: 
																P[7][10]=0;
																cont++;
																break;
															case 18: 
																P[7][11]=0;
																cont++;
																break;
															case 19: 
																P[7][12]=0;
																cont++;
																break;
															case 20: 
																P[7][13]=0;
																cont++;
																break;
															case 21: 
																P[7][14]=0;
																cont++;
																break;
															default:
																ho1=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
														ho2=(ho1+horas);
														while(cont<=horas){
															printf("\nDigite la hora: \n");
															scanf("%i",&i);
															switch(i){
																case 7:
																	P[7][0]=0;
																	i=0;
																	cont++;
																	break;
																case 8: 
																	P[7][1]=0;
																	i=0;
																	cont++;
																	break;
																case 9: 
																	P[7][2]=0;
																	i=0;
																	cont++;
																	break;
																case 10:
																	P[7][3]=0;
																	i=0;
																	cont++;
																	break;
																case 11: 
																	P[7][4]=0;
																	i=0;
																	cont++;
																	break;
																case 12: 
																	P[7][5]=0;
																	i=0;
																	cont++;
																	break;
																case 13: 
																	P[7][6]=0;
																	i=0;
																	cont++;
																	break;
																case 14: 
																	P[7][7]=0;
																	i=0;
																	cont++;
																	break;
																case 15: 
																	P[7][8]=0;
																	i=0;
																	cont++;
																	break;
																case 16: 
																	P[7][9]=0;
																	i=0;
																	cont++;
																	break;
																case 17: 
																	P[7][10]=0;
																	i=0;
																	cont++;
																	break;
																case 18: 
																	P[7][11]=0;
																	i=0;
																	cont++;
																	break;
																case 19: 
																	P[7][12]=0;
																	i=0;
																	cont++;
																	break;
																case 20: 
																	P[7][13]=0;
																	i=0;
																	cont++;
																	break;
																case 21: 
																	P[7][14]=0;
																	i=0;
																	cont++;
																	break;
																default:
																	i=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
														}
														system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
														printf("\n Generando comprobante de reservacion.\n");
														printf("\n\nIngrese su nombre completo: ");
														FILE *p;
														p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
														fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
														fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
														fputs(" Reservación a nombre de: ",p);
														scanf(" %[^\n]",&L);
														strupr(L);
														fputs(L,p);
														fputs("\n\n No. cuenta: ",p);
														printf("\nIngrese su numero de cuenta: ");
														scanf(" %[^\n]",&NoCu);
														fputs(NoCu,p);
														fputs("\n\n Día seleccionado: LUNES",p);
														fputs("\n\n Cajón reservado: 7",p);
														fputs("\n\n Horas reservadas: ",p);
														fprintf(p,"%i", horas);
														fputs("\n\n Hora de entrada: ",p);
														fprintf(p,"%i", ho1);
														fputs("   HRS. ",p);
														fputs("\n\n Hora de salida: ",p);
														fprintf(p,"%i", ho2);
														fputs("   HRS. ",p);
														fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
														fclose(p);
														printf("\n Comprobante generado exitosamente.\n");
													}
													else{
														horas=0;
														printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
													}
												}
												else{
													if(caj==8){
														printf("\n\n¿Cuantas horas va a reservar?:\n");
														scanf("%i",&horas);
														if(horas<=15){
															printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
															cont=1;
															printf("Digite la hora: \n");
															scanf("%i",&ho1);
															switch(ho1){
																case 7:
																	P[8][0]=0;
																	cont++;
																	break;
																case 8: 
																	P[8][1]=0;
																	cont++;									
																	break;
																case 9: 
																	P[8][2]=0;
																	cont++;
																	break;
																case 10:
																	P[8][3]=0;
																	cont++;
																	break;
																case 11: 
																	P[8][4]=0;
																	cont++;
																	break;
																case 12: 
																	P[8][5]=0;
																	cont++;
																	break;
																case 13: 
																	P[8][6]=0;
																	cont++;
																	break;
																case 14: 
																	P[8][7]=0;
																	cont++;
																	break;
																case 15: 
																	P[8][8]=0;
																	cont++;
																	break;
																case 16: 
																	P[8][9]=0;
																	cont++;
																	break;
																case 17: 
																	P[8][10]=0;
																	cont++;
																	break;
																case 18: 
																	P[8][11]=0;
																	cont++;
																	break;
																case 19: 
																	P[8][12]=0;
																	cont++;
																	break;
																case 20: 
																	P[8][13]=0;
																	cont++;
																	break;
																case 21: 
																	P[8][14]=0;
																	cont++;
																	break;
																default:
																	ho1=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
															ho2=(ho1+horas);
															while(cont<=horas){
																printf("\nDigite la hora: \n");
																scanf("%i",&i);
																switch(i){
																	case 7:
																		P[8][0]=0;
																		i=0;
																		cont++;
																		break;
																	case 8: 
																		P[8][1]=0;
																		i=0;
																		cont++;
																		break;
																	case 9: 
																		P[8][2]=0;
																		i=0;
																		cont++;
																		break;
																	case 10:
																		P[8][3]=0;
																		i=0;
																		cont++;
																		break;
																	case 11: 
																		P[8][4]=0;
																		i=0;
																		cont++;
																		break;
																	case 12: 
																		P[8][5]=0;
																		i=0;
																		cont++;
																		break;
																	case 13: 
																		P[8][6]=0;
																		i=0;
																		cont++;
																		break;
																	case 14: 
																		P[8][7]=0;
																		i=0;
																		cont++;
																		break;
																	case 15: 
																		P[8][8]=0;
																		i=0;
																		cont++;
																		break;
																	case 16: 
																		P[8][9]=0;
																		i=0;
																		cont++;
																		break;
																	case 17: 
																		P[8][10]=0;
																		i=0;
																		cont++;
																		break;
																	case 18: 
																		P[8][11]=0;
																		i=0;
																		cont++;
																		break;
																	case 19: 
																		P[8][12]=0;
																		i=0;
																		cont++;
																		break;
																	case 20: 
																		P[8][13]=0;
																		i=0;
																		cont++;
																		break;
																	case 21: 
																		P[8][14]=0;
																		i=0;
																		cont++;
																		break;
																	default:
																		i=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
															}
															system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
															printf("\n Generando comprobante de reservacion.\n");
															printf("\n\nIngrese su nombre completo: ");
															FILE *p;
															p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
															fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
															fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
															fputs(" Reservación a nombre de: ",p);
															scanf(" %[^\n]",&L);
															strupr(L);
															fputs(L,p);
															fputs("\n\n No. cuenta: ",p);
															printf("\nIngrese su numero de cuenta: ");
															scanf(" %[^\n]",&NoCu);
															fputs(NoCu,p);
															fputs("\n\n Día seleccionado: LUNES",p);
															fputs("\n\n Cajón reservado: 8",p);
															fputs("\n\n Horas reservadas: ",p);
															fprintf(p,"%i", horas);
															fputs("\n\n Hora de entrada: ",p);
															fprintf(p,"%i", ho1);
															fputs("   HRS. ",p);
															fputs("\n\n Hora de salida: ",p);
															fprintf(p,"%i", ho2);
															fputs("   HRS. ",p);
															fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
															fclose(p);
															printf("\n Comprobante generado exitosamente.\n");
														}
														else{
															horas=0;
															printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
														}
													}
													else{
														if(caj==9){
															printf("\n\n¿Cuantas horas va a reservar?:\n");
															scanf("%i",&horas);
															if(horas<=15){
																printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																cont=1;
																printf("Digite la hora: \n");
																scanf("%i",&ho1);
																switch(ho1){
																	case 7:
																		P[9][0]=0;
																		cont++;
																		break;
																	case 8: 
																		P[9][1]=0;
																		cont++;									
																		break;
																	case 9: 
																		P[9][2]=0;
																		cont++;
																		break;
																	case 10:
																		P[9][3]=0;
																		cont++;
																		break;
																	case 11: 
																		P[9][4]=0;
																		cont++;
																		break;
																	case 12: 
																		P[9][5]=0;
																		cont++;
																		break;
																	case 13: 
																		P[9][6]=0;
																		cont++;
																		break;
																	case 14: 
																		P[9][7]=0;
																		cont++;
																		break;
																	case 15: 
																		P[9][8]=0;
																		cont++;
																		break;
																	case 16: 
																		P[9][9]=0;
																		cont++;
																		break;
																	case 17: 
																		P[9][10]=0;
																		cont++;
																		break;
																	case 18: 
																		P[9][11]=0;
																		cont++;
																		break;
																	case 19: 
																		P[9][12]=0;
																		cont++;
																		break;
																	case 20: 
																		P[9][13]=0;
																		cont++;
																		break;
																	case 21: 
																		P[9][14]=0;
																		cont++;
																		break;
																	default:
																		ho1=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
																ho2=(ho1+horas);
																while(cont<=horas){
																	printf("\nDigite la hora: \n");
																	scanf("%i",&i);
																	switch(i){
																		case 7:
																			P[9][0]=0;
																			i=0;
																			cont++;
																			break;
																		case 8: 
																			P[9][1]=0;
																			i=0;
																			cont++;
																			break;
																		case 9: 
																			P[9][2]=0;
																			i=0;
																			cont++;
																			break;
																		case 10:
																			P[9][3]=0;
																			i=0;
																			cont++;
																			break;
																		case 11: 
																			P[9][4]=0;
																			i=0;
																			cont++;
																			break;
																		case 12: 
																			P[9][5]=0;
																			i=0;
																			cont++;
																			break;
																		case 13: 
																			P[9][6]=0;
																			i=0;
																			cont++;
																			break;
																		case 14: 
																			P[9][7]=0;
																			i=0;
																			cont++;
																			break;
																		case 15: 
																			P[9][8]=0;
																			i=0;
																			cont++;
																			break;
																		case 16: 
																			P[9][9]=0;
																			i=0;
																			cont++;
																			break;
																		case 17: 
																			P[9][10]=0;
																			i=0;
																			cont++;
																			break;
																		case 18: 
																			P[9][11]=0;
																			i=0;
																			cont++;
																			break;
																		case 19: 
																			P[9][12]=0;
																			i=0;
																			cont++;
																			break;
																		case 20: 
																			P[9][13]=0;
																			i=0;
																			cont++;
																			break;
																		case 21: 
																			P[9][14]=0;
																			i=0;
																			cont++;
																			break;
																		default:
																			i=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																}
																system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																printf("\n Generando comprobante de reservacion.\n");
																printf("\n\nIngrese su nombre completo: ");
																FILE *p;
																p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																fputs(" Reservación a nombre de: ",p);
																scanf(" %[^\n]",&L);
																strupr(L);
																fputs(L,p);
																fputs("\n\n No. cuenta: ",p);
																printf("\nIngrese su numero de cuenta: ");
																scanf(" %[^\n]",&NoCu);
																fputs(NoCu,p);
																fputs("\n\n Día seleccionado: LUNES",p);
																fputs("\n\n Cajón reservado: 9",p);
																fputs("\n\n Horas reservadas: ",p);
																fprintf(p,"%i", horas);
																fputs("\n\n Hora de entrada: ",p);
																fprintf(p,"%i", ho1);
																fputs("   HRS. ",p);
																fputs("\n\n Hora de salida: ",p);
																fprintf(p,"%i", ho2);
																fputs("   HRS. ",p);
																fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																fclose(p);
																printf("\n Comprobante generado exitosamente.\n");
															}
															else{
																horas=0;
																printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
															}
														}
														else{
															if(caj==10){
																printf("\n\n¿Cuantas horas va a reservar?:\n");
																scanf("%i",&horas);
																if(horas<=15){
																	printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																	cont=1;
																	printf("Digite la hora: \n");
																	scanf("%i",&ho1);
																	switch(ho1){
																		case 7:
																			P[10][0]=0;
																			cont++;
																			break;
																		case 8: 
																			P[10][1]=0;
																			cont++;									
																			break;
																		case 9: 
																			P[10][2]=0;
																			cont++;
																			break;
																		case 10:
																			P[10][3]=0;
																			cont++;
																			break;
																		case 11: 
																			P[10][4]=0;
																			cont++;
																			break;
																		case 12: 
																			P[10][5]=0;
																			cont++;
																			break;
																		case 13: 
																			P[10][6]=0;
																			cont++;
																			break;
																		case 14: 
																			P[10][7]=0;
																			cont++;
																			break;
																		case 15: 
																			P[10][8]=0;
																			cont++;
																			break;
																		case 16: 
																			P[10][9]=0;
																			cont++;
																			break;
																		case 17: 
																			P[10][10]=0;
																			cont++;
																			break;
																		case 18: 
																			P[10][11]=0;
																			cont++;
																			break;
																		case 19: 
																			P[10][12]=0;
																			cont++;
																			break;
																		case 20: 
																			P[10][13]=0;
																			cont++;
																			break;
																		case 21: 
																			P[10][14]=0;
																			cont++;
																			break;
																		default:
																			ho1=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																	ho2=(ho1+horas);
																	while(cont<=horas){
																		printf("\nDigite la hora: \n");
																		scanf("%i",&i);
																		switch(i){
																			case 7:
																				P[10][0]=0;
																				i=0;
																				cont++;
																				break;
																			case 8: 
																				P[10][1]=0;
																				i=0;
																				cont++;
																				break;
																			case 9: 
																				P[10][2]=0;
																				i=0;
																				cont++;
																				break;
																			case 10:
																				P[10][3]=0;
																				i=0;
																				cont++;
																				break;
																			case 11: 
																				P[10][4]=0;
																				i=0;
																				cont++;
																				break;
																			case 12: 
																				P[10][5]=0;
																				i=0;
																				cont++;
																				break;
																			case 13: 
																				P[10][6]=0;
																				i=0;
																				cont++;
																				break;
																			case 14: 
																				P[10][7]=0;
																				i=0;
																				cont++;
																				break;
																			case 15: 
																				P[10][8]=0;
																				i=0;
																				cont++;
																				break;
																			case 16: 
																				P[10][9]=0;
																				i=0;
																				cont++;
																				break;
																			case 17: 
																				P[10][10]=0;
																				i=0;
																				cont++;
																				break;
																			case 18: 
																				P[10][11]=0;
																				i=0;
																				cont++;
																				break;
																			case 19: 
																				P[10][12]=0;
																				i=0;
																				cont++;
																				break;
																			case 20: 
																				P[10][13]=0;
																				i=0;
																				cont++;
																				break;
																			case 21: 
																				P[10][14]=0;
																				i=0;
																				cont++;
																				break;
																			default:
																				i=0;
																				printf("\n Hora invalida, digite de nuevo: 7-21\n");
																		}
																	}
																	system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																	printf("\n Generando comprobante de reservacion.\n");
																	printf("\n\nIngrese su nombre completo: ");
																	FILE *p;
																	p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																	fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																	fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																	fputs(" Reservación a nombre de: ",p);
																	scanf(" %[^\n]",&L);
																	strupr(L);
																	fputs(L,p);
																	fputs("\n\n No. cuenta: ",p);
																	printf("\nIngrese su numero de cuenta: ");
																	scanf(" %[^\n]",&NoCu);
																	fputs(NoCu,p);
																	fputs("\n\n Día seleccionado: LUNES",p);
																	fputs("\n\n Cajón reservado: 10",p);
																	fputs("\n\n Horas reservadas: ",p);
																	fprintf(p,"%i", horas);
																	fputs("\n\n Hora de entrada: ",p);
																	fprintf(p,"%i", ho1);
																	fputs("   HRS. ",p);
																	fputs("\n\n Hora de salida: ",p);
																	fprintf(p,"%i", ho2);
																	fputs("   HRS. ",p);
																	fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																	fclose(p);
																	printf("\n Comprobante generado exitosamente.\n");
																}
																else{
																	horas=0;
																	printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
																}
															}
															else{
																printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-10\n");
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					break;
				case 2:
					printf("----------Cajones disponibles: 11 (0-10)----------\n ----------HORARIO----------\n {'   ',P[0], P[1], P[2], P[3],  P[4],  P[5],  P[6],  P[7],  P[8],  P[9], P[10],  P[11], P[12], P[13], P[14]},\n {P[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[6], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[7], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[8], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[9], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[10],'7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n ");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-10:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									P[0][0]=0;
									cont++;
									break;
								case 8: 
									P[0][1]=0;
									cont++;									
									break;
								case 9: 
									P[0][2]=0;
									cont++;
									break;
								case 10:
									P[0][3]=0;
									cont++;
									break;
								case 11: 
									P[0][4]=0;
									cont++;
									break;
								case 12: 
									P[0][5]=0;
									cont++;
									break;
								case 13: 
									P[0][6]=0;
									cont++;
									break;
								case 14: 
									P[0][7]=0;
									cont++;
									break;
								case 15: 
									P[0][8]=0;
									cont++;
									break;
								case 16: 
									P[0][9]=0;
									cont++;
									break;
								case 17: 
									P[0][10]=0;
									cont++;
									break;
								case 18: 
									P[0][11]=0;
									cont++;
									break;
								case 19: 
									P[0][12]=0;
									cont++;
									break;
								case 20: 
									P[0][13]=0;
									cont++;
									break;
								case 21: 
									P[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										P[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										P[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										P[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										P[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										P[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										P[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										P[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										P[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										P[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										P[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										P[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										P[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										P[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										P[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										P[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: MARTES",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										P[1][0]=0;
										cont++;
										break;
									case 8: 
										P[1][1]=0;
										cont++;									
										break;
									case 9: 
										P[1][2]=0;
										cont++;
										break;
									case 10:
										P[1][3]=0;
										cont++;
										break;
									case 11: 
										P[1][4]=0;
										cont++;
										break;
									case 12: 
										P[1][5]=0;
										cont++;
										break;
									case 13: 
										P[1][6]=0;
										cont++;
										break;
									case 14: 
										P[1][7]=0;
										cont++;
										break;
									case 15: 
										P[1][8]=0;
										cont++;
										break;
									case 16: 
										P[1][9]=0;
										cont++;
										break;
									case 17: 
										P[1][10]=0;
										cont++;
										break;
									case 18: 
										P[1][11]=0;
										cont++;
										break;
									case 19: 
										P[1][12]=0;
										cont++;
										break;
									case 20: 
										P[1][13]=0;
										cont++;
										break;
									case 21: 
										P[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											P[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											P[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											P[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											P[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											P[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											P[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											P[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											P[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											P[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											P[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											P[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											P[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											P[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											P[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											P[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: MARTES",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											P[2][0]=0;
											cont++;
											break;
										case 8: 
											P[2][1]=0;
											cont++;									
											break;
										case 9: 
											P[2][2]=0;
											cont++;
											break;
										case 10:
											P[2][3]=0;
											cont++;
											break;
										case 11: 
											P[2][4]=0;
											cont++;
											break;
										case 12: 
											P[2][5]=0;
											cont++;
											break;
										case 13: 
											P[2][6]=0;
											cont++;
											break;
										case 14: 
											P[2][7]=0;
											cont++;
											break;
										case 15: 
											P[2][8]=0;
											cont++;
											break;
										case 16: 
											P[2][9]=0;
											cont++;
											break;
										case 17: 
											P[2][10]=0;
											cont++;
											break;
										case 18: 
											P[2][11]=0;
											cont++;
											break;
										case 19: 
											P[2][12]=0;
											cont++;
											break;
										case 20: 
											P[2][13]=0;
											cont++;
											break;
										case 21: 
											P[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												P[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												P[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												P[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												P[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												P[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												P[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												P[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												P[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												P[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												P[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												P[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												P[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												P[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												P[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												P[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: MARTES",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												P[3][0]=0;
												cont++;
												break;
											case 8: 
												P[3][1]=0;
												cont++;									
												break;
											case 9: 
												P[3][2]=0;
												cont++;
												break;
											case 10:
												P[3][3]=0;
												cont++;
												break;
											case 11: 
												P[3][4]=0;
												cont++;
												break;
											case 12: 
												P[3][5]=0;
												cont++;
												break;
											case 13: 
												P[3][6]=0;
												cont++;
												break;
											case 14: 
												P[3][7]=0;
												cont++;
												break;
											case 15: 
												P[3][8]=0;
												cont++;
												break;
											case 16: 
												P[3][9]=0;
												cont++;
												break;
											case 17: 
												P[3][10]=0;
												cont++;
												break;
											case 18: 
												P[3][11]=0;
												cont++;
												break;
											case 19: 
												P[3][12]=0;
												cont++;
												break;
											case 20: 
												P[3][13]=0;
												cont++;
												break;
											case 21: 
												P[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													P[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													P[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													P[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													P[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													P[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													P[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													P[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													P[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													P[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													P[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													P[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													P[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													P[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													P[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													P[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: MARTES",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													P[4][0]=0;
													cont++;
													break;
												case 8: 
													P[4][1]=0;
													cont++;									
													break;
												case 9: 
													P[4][2]=0;
													cont++;
													break;
												case 10:
													P[4][3]=0;
													cont++;
													break;
												case 11: 
													P[4][4]=0;
													cont++;
													break;
												case 12: 
													P[4][5]=0;
													cont++;
													break;
												case 13: 
													P[4][6]=0;
													cont++;
													break;
												case 14: 
													P[4][7]=0;
													cont++;
													break;
												case 15: 
													P[4][8]=0;
													cont++;
													break;
												case 16: 
													P[4][9]=0;
													cont++;
													break;
												case 17: 
													P[4][10]=0;
													cont++;
													break;
												case 18: 
													P[4][11]=0;
													cont++;
													break;
												case 19: 
													P[4][12]=0;
													cont++;
													break;
												case 20: 
													P[4][13]=0;
													cont++;
													break;
												case 21: 
													P[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														P[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														P[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														P[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														P[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														P[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														P[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														P[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														P[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														P[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														P[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														P[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														P[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														P[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														P[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														P[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: MARTES",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														P[5][0]=0;
														cont++;
														break;
													case 8: 
														P[5][1]=0;
														cont++;									
														break;
													case 9: 
														P[5][2]=0;
														cont++;
														break;
													case 10:
														P[5][3]=0;
														cont++;
														break;
													case 11: 
														P[5][4]=0;
														cont++;
														break;
													case 12: 
														P[5][5]=0;
														cont++;
														break;
													case 13: 
														P[5][6]=0;
														cont++;
														break;
													case 14: 
														P[5][7]=0;
														cont++;
														break;
													case 15: 
														P[5][8]=0;
														cont++;
														break;
													case 16: 
														P[5][9]=0;
														cont++;
														break;
													case 17: 
														P[5][10]=0;
														cont++;
														break;
													case 18: 
														P[5][11]=0;
														cont++;
														break;
													case 19: 
														P[5][12]=0;
														cont++;
														break;
													case 20: 
														P[5][13]=0;
														cont++;
														break;
													case 21: 
														P[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															P[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															P[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															P[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															P[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															P[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															P[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															P[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															P[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															P[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															P[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															P[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															P[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															P[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															P[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															P[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: MARTES",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											if(caj==6){
												printf("\n\n¿Cuantas horas va a reservar?:\n");
												scanf("%i",&horas);
												if(horas<=15){
													printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
													cont=1;
													printf("Digite la hora: \n");
													scanf("%i",&ho1);
													switch(ho1){
														case 7:
															P[6][0]=0;
															cont++;
															break;
														case 8: 
															P[6][1]=0;
															cont++;									
															break;
														case 9: 
															P[6][2]=0;
															cont++;
															break;
														case 10:
															P[6][3]=0;
															cont++;
															break;
														case 11: 
															P[6][4]=0;
															cont++;
															break;
														case 12: 
															P[6][5]=0;
															cont++;
															break;
														case 13: 
															P[6][6]=0;
															cont++;
															break;
														case 14: 
															P[6][7]=0;
															cont++;
															break;
														case 15: 
															P[6][8]=0;
															cont++;
															break;
														case 16: 
															P[6][9]=0;
															cont++;
															break;
														case 17: 
															P[6][10]=0;
															cont++;
															break;
														case 18: 
															P[6][11]=0;
															cont++;
															break;
														case 19: 
															P[6][12]=0;
															cont++;
															break;
														case 20: 
															P[6][13]=0;
															cont++;
															break;
														case 21: 
															P[6][14]=0;
															cont++;
															break;
														default:
															ho1=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
													ho2=(ho1+horas);
													while(cont<=horas){
														printf("\nDigite la hora: \n");
														scanf("%i",&i);
														switch(i){
															case 7:
																P[6][0]=0;
																i=0;
																cont++;
																break;
															case 8: 
																P[6][1]=0;
																i=0;
																cont++;
																break;
															case 9: 
																P[6][2]=0;
																i=0;
																cont++;
																break;
															case 10:
																P[6][3]=0;
																i=0;
																cont++;
																break;
															case 11: 
																P[6][4]=0;
																i=0;
																cont++;
																break;
															case 12: 
																P[6][5]=0;
																i=0;
																cont++;
																break;
															case 13: 
																P[6][6]=0;
																i=0;
																cont++;
																break;
															case 14: 
																P[6][7]=0;
																i=0;
																cont++;
																break;
															case 15: 
																P[6][8]=0;
																i=0;
																cont++;
																break;
															case 16: 
																P[6][9]=0;
																i=0;
																cont++;
																break;
															case 17: 
																P[6][10]=0;
																i=0;
																cont++;
																break;
															case 18: 
																P[6][11]=0;
																i=0;
																cont++;
																break;
															case 19: 
																P[6][12]=0;
																i=0;
																cont++;
																break;
															case 20: 
																P[6][13]=0;
																i=0;
																cont++;
																break;
															case 21: 
																P[6][14]=0;
																i=0;
																cont++;
																break;
															default:
																i=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
													}
													system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
													printf("\n Generando comprobante de reservacion.\n");
													printf("\n\nIngrese su nombre completo: ");
													FILE *p;
													p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
													fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
													fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
													fputs(" Reservación a nombre de: ",p);
													scanf(" %[^\n]",&L);
													strupr(L);
													fputs(L,p);
													fputs("\n\n No. cuenta: ",p);
													printf("\nIngrese su numero de cuenta: ");
													scanf(" %[^\n]",&NoCu);
													fputs(NoCu,p);
													fputs("\n\n Día seleccionado: MARTES",p);
													fputs("\n\n Cajón reservado: 6",p);
													fputs("\n\n Horas reservadas: ",p);
													fprintf(p,"%i", horas);
													fputs("\n\n Hora de entrada: ",p);
													fprintf(p,"%i", ho1);
													fputs("   HRS. ",p);
													fputs("\n\n Hora de salida: ",p);
													fprintf(p,"%i", ho2);
													fputs("   HRS. ",p);
													fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
													fclose(p);
													printf("\n Comprobante generado exitosamente.\n");
												}
												else{
													horas=0;
													printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
												}
											}
											else{
												if(caj==7){
													printf("\n\n¿Cuantas horas va a reservar?:\n");
													scanf("%i",&horas);
													if(horas<=15){
														printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
														cont=1;
														printf("Digite la hora: \n");
														scanf("%i",&ho1);
														switch(ho1){
															case 7:
																P[7][0]=0;
																cont++;
																break;
															case 8: 
																P[7][1]=0;
																cont++;									
																break;
															case 9: 
																P[7][2]=0;
																cont++;
																break;
															case 10:
																P[7][3]=0;
																cont++;
																break;
															case 11: 
																P[7][4]=0;
																cont++;
																break;
															case 12: 
																P[7][5]=0;
																cont++;
																break;
															case 13: 
																P[7][6]=0;
																cont++;
																break;
															case 14: 
																P[7][7]=0;
																cont++;
																break;
															case 15: 
																P[7][8]=0;
																cont++;
																break;
															case 16: 
																P[7][9]=0;
																cont++;
																break;
															case 17: 
																P[7][10]=0;
																cont++;
																break;
															case 18: 
																P[7][11]=0;
																cont++;
																break;
															case 19: 
																P[7][12]=0;
																cont++;
																break;
															case 20: 
																P[7][13]=0;
																cont++;
																break;
															case 21: 
																P[7][14]=0;
																cont++;
																break;
															default:
																ho1=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
														ho2=(ho1+horas);
														while(cont<=horas){
															printf("\nDigite la hora: \n");
															scanf("%i",&i);
															switch(i){
																case 7:
																	P[7][0]=0;
																	i=0;
																	cont++;
																	break;
																case 8: 
																	P[7][1]=0;
																	i=0;
																	cont++;
																	break;
																case 9: 
																	P[7][2]=0;
																	i=0;
																	cont++;
																	break;
																case 10:
																	P[7][3]=0;
																	i=0;
																	cont++;
																	break;
																case 11: 
																	P[7][4]=0;
																	i=0;
																	cont++;
																	break;
																case 12: 
																	P[7][5]=0;
																	i=0;
																	cont++;
																	break;
																case 13: 
																	P[7][6]=0;
																	i=0;
																	cont++;
																	break;
																case 14: 
																	P[7][7]=0;
																	i=0;
																	cont++;
																	break;
																case 15: 
																	P[7][8]=0;
																	i=0;
																	cont++;
																	break;
																case 16: 
																	P[7][9]=0;
																	i=0;
																	cont++;
																	break;
																case 17: 
																	P[7][10]=0;
																	i=0;
																	cont++;
																	break;
																case 18: 
																	P[7][11]=0;
																	i=0;
																	cont++;
																	break;
																case 19: 
																	P[7][12]=0;
																	i=0;
																	cont++;
																	break;
																case 20: 
																	P[7][13]=0;
																	i=0;
																	cont++;
																	break;
																case 21: 
																	P[7][14]=0;
																	i=0;
																	cont++;
																	break;
																default:
																	i=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
														}
														system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
														printf("\n Generando comprobante de reservacion.\n");
														printf("\n\nIngrese su nombre completo: ");
														FILE *p;
														p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
														fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
														fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
														fputs(" Reservación a nombre de: ",p);
														scanf(" %[^\n]",&L);
														strupr(L);
														fputs(L,p);
														fputs("\n\n No. cuenta: ",p);
														printf("\nIngrese su numero de cuenta: ");
														scanf(" %[^\n]",&NoCu);
														fputs(NoCu,p);
														fputs("\n\n Día seleccionado: MARTES",p);
														fputs("\n\n Cajón reservado: 7",p);
														fputs("\n\n Horas reservadas: ",p);
														fprintf(p,"%i", horas);
														fputs("\n\n Hora de entrada: ",p);
														fprintf(p,"%i", ho1);
														fputs("   HRS. ",p);
														fputs("\n\n Hora de salida: ",p);
														fprintf(p,"%i", ho2);
														fputs("   HRS. ",p);
														fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
														fclose(p);
														printf("\n Comprobante generado exitosamente.\n");
													}
													else{
														horas=0;
														printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
													}
												}
												else{
													if(caj==8){
														printf("\n\n¿Cuantas horas va a reservar?:\n");
														scanf("%i",&horas);
														if(horas<=15){
															printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
															cont=1;
															printf("Digite la hora: \n");
															scanf("%i",&ho1);
															switch(ho1){
																case 7:
																	P[8][0]=0;
																	cont++;
																	break;
																case 8: 
																	P[8][1]=0;
																	cont++;									
																	break;
																case 9: 
																	P[8][2]=0;
																	cont++;
																	break;
																case 10:
																	P[8][3]=0;
																	cont++;
																	break;
																case 11: 
																	P[8][4]=0;
																	cont++;
																	break;
																case 12: 
																	P[8][5]=0;
																	cont++;
																	break;
																case 13: 
																	P[8][6]=0;
																	cont++;
																	break;
																case 14: 
																	P[8][7]=0;
																	cont++;
																	break;
																case 15: 
																	P[8][8]=0;
																	cont++;
																	break;
																case 16: 
																	P[8][9]=0;
																	cont++;
																	break;
																case 17: 
																	P[8][10]=0;
																	cont++;
																	break;
																case 18: 
																	P[8][11]=0;
																	cont++;
																	break;
																case 19: 
																	P[8][12]=0;
																	cont++;
																	break;
																case 20: 
																	P[8][13]=0;
																	cont++;
																	break;
																case 21: 
																	P[8][14]=0;
																	cont++;
																	break;
																default:
																	ho1=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
															ho2=(ho1+horas);
															while(cont<=horas){
																printf("\nDigite la hora: \n");
																scanf("%i",&i);
																switch(i){
																	case 7:
																		P[8][0]=0;
																		i=0;
																		cont++;
																		break;
																	case 8: 
																		P[8][1]=0;
																		i=0;
																		cont++;
																		break;
																	case 9: 
																		P[8][2]=0;
																		i=0;
																		cont++;
																		break;
																	case 10:
																		P[8][3]=0;
																		i=0;
																		cont++;
																		break;
																	case 11: 
																		P[8][4]=0;
																		i=0;
																		cont++;
																		break;
																	case 12: 
																		P[8][5]=0;
																		i=0;
																		cont++;
																		break;
																	case 13: 
																		P[8][6]=0;
																		i=0;
																		cont++;
																		break;
																	case 14: 
																		P[8][7]=0;
																		i=0;
																		cont++;
																		break;
																	case 15: 
																		P[8][8]=0;
																		i=0;
																		cont++;
																		break;
																	case 16: 
																		P[8][9]=0;
																		i=0;
																		cont++;
																		break;
																	case 17: 
																		P[8][10]=0;
																		i=0;
																		cont++;
																		break;
																	case 18: 
																		P[8][11]=0;
																		i=0;
																		cont++;
																		break;
																	case 19: 
																		P[8][12]=0;
																		i=0;
																		cont++;
																		break;
																	case 20: 
																		P[8][13]=0;
																		i=0;
																		cont++;
																		break;
																	case 21: 
																		P[8][14]=0;
																		i=0;
																		cont++;
																		break;
																	default:
																		i=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
															}
															system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
															printf("\n Generando comprobante de reservacion.\n");
															printf("\n\nIngrese su nombre completo: ");
															FILE *p;
															p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
															fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
															fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
															fputs(" Reservación a nombre de: ",p);
															scanf(" %[^\n]",&L);
															strupr(L);
															fputs(L,p);
															fputs("\n\n No. cuenta: ",p);
															printf("\nIngrese su numero de cuenta: ");
															scanf(" %[^\n]",&NoCu);
															fputs(NoCu,p);
															fputs("\n\n Día seleccionado: MARTES",p);
															fputs("\n\n Cajón reservado: 8",p);
															fputs("\n\n Horas reservadas: ",p);
															fprintf(p,"%i", horas);
															fputs("\n\n Hora de entrada: ",p);
															fprintf(p,"%i", ho1);
															fputs("   HRS. ",p);
															fputs("\n\n Hora de salida: ",p);
															fprintf(p,"%i", ho2);
															fputs("   HRS. ",p);
															fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
															fclose(p);
															printf("\n Comprobante generado exitosamente.\n");
														}
														else{
															horas=0;
															printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
														}
													}
													else{
														if(caj==9){
															printf("\n\n¿Cuantas horas va a reservar?:\n");
															scanf("%i",&horas);
															if(horas<=15){
																printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																cont=1;
																printf("Digite la hora: \n");
																scanf("%i",&ho1);
																switch(ho1){
																	case 7:
																		P[9][0]=0;
																		cont++;
																		break;
																	case 8: 
																		P[9][1]=0;
																		cont++;									
																		break;
																	case 9: 
																		P[9][2]=0;
																		cont++;
																		break;
																	case 10:
																		P[9][3]=0;
																		cont++;
																		break;
																	case 11: 
																		P[9][4]=0;
																		cont++;
																		break;
																	case 12: 
																		P[9][5]=0;
																		cont++;
																		break;
																	case 13: 
																		P[9][6]=0;
																		cont++;
																		break;
																	case 14: 
																		P[9][7]=0;
																		cont++;
																		break;
																	case 15: 
																		P[9][8]=0;
																		cont++;
																		break;
																	case 16: 
																		P[9][9]=0;
																		cont++;
																		break;
																	case 17: 
																		P[9][10]=0;
																		cont++;
																		break;
																	case 18: 
																		P[9][11]=0;
																		cont++;
																		break;
																	case 19: 
																		P[9][12]=0;
																		cont++;
																		break;
																	case 20: 
																		P[9][13]=0;
																		cont++;
																		break;
																	case 21: 
																		P[9][14]=0;
																		cont++;
																		break;
																	default:
																		ho1=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
																ho2=(ho1+horas);
																while(cont<=horas){
																	printf("\nDigite la hora: \n");
																	scanf("%i",&i);
																	switch(i){
																		case 7:
																			P[9][0]=0;
																			i=0;
																			cont++;
																			break;
																		case 8: 
																			P[9][1]=0;
																			i=0;
																			cont++;
																			break;
																		case 9: 
																			P[9][2]=0;
																			i=0;
																			cont++;
																			break;
																		case 10:
																			P[9][3]=0;
																			i=0;
																			cont++;
																			break;
																		case 11: 
																			P[9][4]=0;
																			i=0;
																			cont++;
																			break;
																		case 12: 
																			P[9][5]=0;
																			i=0;
																			cont++;
																			break;
																		case 13: 
																			P[9][6]=0;
																			i=0;
																			cont++;
																			break;
																		case 14: 
																			P[9][7]=0;
																			i=0;
																			cont++;
																			break;
																		case 15: 
																			P[9][8]=0;
																			i=0;
																			cont++;
																			break;
																		case 16: 
																			P[9][9]=0;
																			i=0;
																			cont++;
																			break;
																		case 17: 
																			P[9][10]=0;
																			i=0;
																			cont++;
																			break;
																		case 18: 
																			P[9][11]=0;
																			i=0;
																			cont++;
																			break;
																		case 19: 
																			P[9][12]=0;
																			i=0;
																			cont++;
																			break;
																		case 20: 
																			P[9][13]=0;
																			i=0;
																			cont++;
																			break;
																		case 21: 
																			P[9][14]=0;
																			i=0;
																			cont++;
																			break;
																		default:
																			i=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																}
																system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																printf("\n Generando comprobante de reservacion.\n");
																printf("\n\nIngrese su nombre completo: ");
																FILE *p;
																p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																fputs(" Reservación a nombre de: ",p);
																scanf(" %[^\n]",&L);
																strupr(L);
																fputs(L,p);
																fputs("\n\n No. cuenta: ",p);
																printf("\nIngrese su numero de cuenta: ");
																scanf(" %[^\n]",&NoCu);
																fputs(NoCu,p);
																fputs("\n\n Día seleccionado: MARTES",p);
																fputs("\n\n Cajón reservado: 9",p);
																fputs("\n\n Horas reservadas: ",p);
																fprintf(p,"%i", horas);
																fputs("\n\n Hora de entrada: ",p);
																fprintf(p,"%i", ho1);
																fputs("   HRS. ",p);
																fputs("\n\n Hora de salida: ",p);
																fprintf(p,"%i", ho2);
																fputs("   HRS. ",p);
																fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																fclose(p);
																printf("\n Comprobante generado exitosamente.\n");
															}
															else{
																horas=0;
																printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
															}
														}
														else{
															if(caj==10){
																printf("\n\n¿Cuantas horas va a reservar?:\n");
																scanf("%i",&horas);
																if(horas<=15){
																	printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																	cont=1;
																	printf("Digite la hora: \n");
																	scanf("%i",&ho1);
																	switch(ho1){
																		case 7:
																			P[10][0]=0;
																			cont++;
																			break;
																		case 8: 
																			P[10][1]=0;
																			cont++;									
																			break;
																		case 9: 
																			P[10][2]=0;
																			cont++;
																			break;
																		case 10:
																			P[10][3]=0;
																			cont++;
																			break;
																		case 11: 
																			P[10][4]=0;
																			cont++;
																			break;
																		case 12: 
																			P[10][5]=0;
																			cont++;
																			break;
																		case 13: 
																			P[10][6]=0;
																			cont++;
																			break;
																		case 14: 
																			P[10][7]=0;
																			cont++;
																			break;
																		case 15: 
																			P[10][8]=0;
																			cont++;
																			break;
																		case 16: 
																			P[10][9]=0;
																			cont++;
																			break;
																		case 17: 
																			P[10][10]=0;
																			cont++;
																			break;
																		case 18: 
																			P[10][11]=0;
																			cont++;
																			break;
																		case 19: 
																			P[10][12]=0;
																			cont++;
																			break;
																		case 20: 
																			P[10][13]=0;
																			cont++;
																			break;
																		case 21: 
																			P[10][14]=0;
																			cont++;
																			break;
																		default:
																			ho1=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																	ho2=(ho1+horas);
																	while(cont<=horas){
																		printf("\nDigite la hora: \n");
																		scanf("%i",&i);
																		switch(i){
																			case 7:
																				P[10][0]=0;
																				i=0;
																				cont++;
																				break;
																			case 8: 
																				P[10][1]=0;
																				i=0;
																				cont++;
																				break;
																			case 9: 
																				P[10][2]=0;
																				i=0;
																				cont++;
																				break;
																			case 10:
																				P[10][3]=0;
																				i=0;
																				cont++;
																				break;
																			case 11: 
																				P[10][4]=0;
																				i=0;
																				cont++;
																				break;
																			case 12: 
																				P[10][5]=0;
																				i=0;
																				cont++;
																				break;
																			case 13: 
																				P[10][6]=0;
																				i=0;
																				cont++;
																				break;
																			case 14: 
																				P[10][7]=0;
																				i=0;
																				cont++;
																				break;
																			case 15: 
																				P[10][8]=0;
																				i=0;
																				cont++;
																				break;
																			case 16: 
																				P[10][9]=0;
																				i=0;
																				cont++;
																				break;
																			case 17: 
																				P[10][10]=0;
																				i=0;
																				cont++;
																				break;
																			case 18: 
																				P[10][11]=0;
																				i=0;
																				cont++;
																				break;
																			case 19: 
																				P[10][12]=0;
																				i=0;
																				cont++;
																				break;
																			case 20: 
																				P[10][13]=0;
																				i=0;
																				cont++;
																				break;
																			case 21: 
																				P[10][14]=0;
																				i=0;
																				cont++;
																				break;
																			default:
																				i=0;
																				printf("\n Hora invalida, digite de nuevo: 7-21\n");
																		}
																	}
																	system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																	printf("\n Generando comprobante de reservacion.\n");
																	printf("\n\nIngrese su nombre completo: ");
																	FILE *p;
																	p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																	fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																	fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																	fputs(" Reservación a nombre de: ",p);
																	scanf(" %[^\n]",&L);
																	strupr(L);
																	fputs(L,p);
																	fputs("\n\n No. cuenta: ",p);
																	printf("\nIngrese su numero de cuenta: ");
																	scanf(" %[^\n]",&NoCu);
																	fputs(NoCu,p);
																	fputs("\n\n Día seleccionado: MARTES",p);
																	fputs("\n\n Cajón reservado: 10",p);
																	fputs("\n\n Horas reservadas: ",p);
																	fprintf(p,"%i", horas);
																	fputs("\n\n Hora de entrada: ",p);
																	fprintf(p,"%i", ho1);
																	fputs("   HRS. ",p);
																	fputs("\n\n Hora de salida: ",p);
																	fprintf(p,"%i", ho2);
																	fputs("   HRS. ",p);
																	fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																	fclose(p);
																	printf("\n Comprobante generado exitosamente.\n");
																}
																else{
																	horas=0;
																	printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
																}
															}
															else{
																printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-10\n");
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					break;																			                                         
				case 3:
					printf("----------Cajones disponibles: 11 (0-10)----------\n ----------HORARIO----------\n {'   ',P[0], P[1], P[2], P[3],  P[4],  P[5],  P[6],  P[7],  P[8],  P[9], P[10],  P[11], P[12], P[13], P[14]},\n {P[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[6], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[7], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[8], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[9], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[10],'7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n ");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-10:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									P[0][0]=0;
									cont++;
									break;
								case 8: 
									P[0][1]=0;
									cont++;									
									break;
								case 9: 
									P[0][2]=0;
									cont++;
									break;
								case 10:
									P[0][3]=0;
									cont++;
									break;
								case 11: 
									P[0][4]=0;
									cont++;
									break;
								case 12: 
									P[0][5]=0;
									cont++;
									break;
								case 13: 
									P[0][6]=0;
									cont++;
									break;
								case 14: 
									P[0][7]=0;
									cont++;
									break;
								case 15: 
									P[0][8]=0;
									cont++;
									break;
								case 16: 
									P[0][9]=0;
									cont++;
									break;
								case 17: 
									P[0][10]=0;
									cont++;
									break;
								case 18: 
									P[0][11]=0;
									cont++;
									break;
								case 19: 
									P[0][12]=0;
									cont++;
									break;
								case 20: 
									P[0][13]=0;
									cont++;
									break;
								case 21: 
									P[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										P[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										P[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										P[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										P[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										P[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										P[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										P[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										P[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										P[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										P[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										P[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										P[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										P[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										P[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										P[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: MIÉRCOLES",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										P[1][0]=0;
										cont++;
										break;
									case 8: 
										P[1][1]=0;
										cont++;									
										break;
									case 9: 
										P[1][2]=0;
										cont++;
										break;
									case 10:
										P[1][3]=0;
										cont++;
										break;
									case 11: 
										P[1][4]=0;
										cont++;
										break;
									case 12: 
										P[1][5]=0;
										cont++;
										break;
									case 13: 
										P[1][6]=0;
										cont++;
										break;
									case 14: 
										P[1][7]=0;
										cont++;
										break;
									case 15: 
										P[1][8]=0;
										cont++;
										break;
									case 16: 
										P[1][9]=0;
										cont++;
										break;
									case 17: 
										P[1][10]=0;
										cont++;
										break;
									case 18: 
										P[1][11]=0;
										cont++;
										break;
									case 19: 
										P[1][12]=0;
										cont++;
										break;
									case 20: 
										P[1][13]=0;
										cont++;
										break;
									case 21: 
										P[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											P[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											P[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											P[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											P[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											P[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											P[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											P[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											P[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											P[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											P[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											P[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											P[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											P[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											P[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											P[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: MIÉRCOLES",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											P[2][0]=0;
											cont++;
											break;
										case 8: 
											P[2][1]=0;
											cont++;									
											break;
										case 9: 
											P[2][2]=0;
											cont++;
											break;
										case 10:
											P[2][3]=0;
											cont++;
											break;
										case 11: 
											P[2][4]=0;
											cont++;
											break;
										case 12: 
											P[2][5]=0;
											cont++;
											break;
										case 13: 
											P[2][6]=0;
											cont++;
											break;
										case 14: 
											P[2][7]=0;
											cont++;
											break;
										case 15: 
											P[2][8]=0;
											cont++;
											break;
										case 16: 
											P[2][9]=0;
											cont++;
											break;
										case 17: 
											P[2][10]=0;
											cont++;
											break;
										case 18: 
											P[2][11]=0;
											cont++;
											break;
										case 19: 
											P[2][12]=0;
											cont++;
											break;
										case 20: 
											P[2][13]=0;
											cont++;
											break;
										case 21: 
											P[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												P[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												P[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												P[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												P[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												P[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												P[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												P[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												P[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												P[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												P[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												P[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												P[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												P[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												P[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												P[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: MIÉRCOLES",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												P[3][0]=0;
												cont++;
												break;
											case 8: 
												P[3][1]=0;
												cont++;									
												break;
											case 9: 
												P[3][2]=0;
												cont++;
												break;
											case 10:
												P[3][3]=0;
												cont++;
												break;
											case 11: 
												P[3][4]=0;
												cont++;
												break;
											case 12: 
												P[3][5]=0;
												cont++;
												break;
											case 13: 
												P[3][6]=0;
												cont++;
												break;
											case 14: 
												P[3][7]=0;
												cont++;
												break;
											case 15: 
												P[3][8]=0;
												cont++;
												break;
											case 16: 
												P[3][9]=0;
												cont++;
												break;
											case 17: 
												P[3][10]=0;
												cont++;
												break;
											case 18: 
												P[3][11]=0;
												cont++;
												break;
											case 19: 
												P[3][12]=0;
												cont++;
												break;
											case 20: 
												P[3][13]=0;
												cont++;
												break;
											case 21: 
												P[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													P[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													P[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													P[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													P[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													P[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													P[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													P[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													P[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													P[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													P[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													P[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													P[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													P[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													P[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													P[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: MIÉRCOLES",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													P[4][0]=0;
													cont++;
													break;
												case 8: 
													P[4][1]=0;
													cont++;									
													break;
												case 9: 
													P[4][2]=0;
													cont++;
													break;
												case 10:
													P[4][3]=0;
													cont++;
													break;
												case 11: 
													P[4][4]=0;
													cont++;
													break;
												case 12: 
													P[4][5]=0;
													cont++;
													break;
												case 13: 
													P[4][6]=0;
													cont++;
													break;
												case 14: 
													P[4][7]=0;
													cont++;
													break;
												case 15: 
													P[4][8]=0;
													cont++;
													break;
												case 16: 
													P[4][9]=0;
													cont++;
													break;
												case 17: 
													P[4][10]=0;
													cont++;
													break;
												case 18: 
													P[4][11]=0;
													cont++;
													break;
												case 19: 
													P[4][12]=0;
													cont++;
													break;
												case 20: 
													P[4][13]=0;
													cont++;
													break;
												case 21: 
													P[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														P[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														P[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														P[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														P[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														P[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														P[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														P[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														P[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														P[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														P[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														P[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														P[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														P[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														P[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														P[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: MIÉRCOLES",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														P[5][0]=0;
														cont++;
														break;
													case 8: 
														P[5][1]=0;
														cont++;									
														break;
													case 9: 
														P[5][2]=0;
														cont++;
														break;
													case 10:
														P[5][3]=0;
														cont++;
														break;
													case 11: 
														P[5][4]=0;
														cont++;
														break;
													case 12: 
														P[5][5]=0;
														cont++;
														break;
													case 13: 
														P[5][6]=0;
														cont++;
														break;
													case 14: 
														P[5][7]=0;
														cont++;
														break;
													case 15: 
														P[5][8]=0;
														cont++;
														break;
													case 16: 
														P[5][9]=0;
														cont++;
														break;
													case 17: 
														P[5][10]=0;
														cont++;
														break;
													case 18: 
														P[5][11]=0;
														cont++;
														break;
													case 19: 
														P[5][12]=0;
														cont++;
														break;
													case 20: 
														P[5][13]=0;
														cont++;
														break;
													case 21: 
														P[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															P[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															P[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															P[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															P[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															P[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															P[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															P[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															P[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															P[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															P[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															P[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															P[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															P[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															P[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															P[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: MIÉRCOLES",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											if(caj==6){
												printf("\n\n¿Cuantas horas va a reservar?:\n");
												scanf("%i",&horas);
												if(horas<=15){
													printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
													cont=1;
													printf("Digite la hora: \n");
													scanf("%i",&ho1);
													switch(ho1){
														case 7:
															P[6][0]=0;
															cont++;
															break;
														case 8: 
															P[6][1]=0;
															cont++;									
															break;
														case 9: 
															P[6][2]=0;
															cont++;
															break;
														case 10:
															P[6][3]=0;
															cont++;
															break;
														case 11: 
															P[6][4]=0;
															cont++;
															break;
														case 12: 
															P[6][5]=0;
															cont++;
															break;
														case 13: 
															P[6][6]=0;
															cont++;
															break;
														case 14: 
															P[6][7]=0;
															cont++;
															break;
														case 15: 
															P[6][8]=0;
															cont++;
															break;
														case 16: 
															P[6][9]=0;
															cont++;
															break;
														case 17: 
															P[6][10]=0;
															cont++;
															break;
														case 18: 
															P[6][11]=0;
															cont++;
															break;
														case 19: 
															P[6][12]=0;
															cont++;
															break;
														case 20: 
															P[6][13]=0;
															cont++;
															break;
														case 21: 
															P[6][14]=0;
															cont++;
															break;
														default:
															ho1=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
													ho2=(ho1+horas);
													while(cont<=horas){
														printf("\nDigite la hora: \n");
														scanf("%i",&i);
														switch(i){
															case 7:
																P[6][0]=0;
																i=0;
																cont++;
																break;
															case 8: 
																P[6][1]=0;
																i=0;
																cont++;
																break;
															case 9: 
																P[6][2]=0;
																i=0;
																cont++;
																break;
															case 10:
																P[6][3]=0;
																i=0;
																cont++;
																break;
															case 11: 
																P[6][4]=0;
																i=0;
																cont++;
																break;
															case 12: 
																P[6][5]=0;
																i=0;
																cont++;
																break;
															case 13: 
																P[6][6]=0;
																i=0;
																cont++;
																break;
															case 14: 
																P[6][7]=0;
																i=0;
																cont++;
																break;
															case 15: 
																P[6][8]=0;
																i=0;
																cont++;
																break;
															case 16: 
																P[6][9]=0;
																i=0;
																cont++;
																break;
															case 17: 
																P[6][10]=0;
																i=0;
																cont++;
																break;
															case 18: 
																P[6][11]=0;
																i=0;
																cont++;
																break;
															case 19: 
																P[6][12]=0;
																i=0;
																cont++;
																break;
															case 20: 
																P[6][13]=0;
																i=0;
																cont++;
																break;
															case 21: 
																P[6][14]=0;
																i=0;
																cont++;
																break;
															default:
																i=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
													}
													system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
													printf("\n Generando comprobante de reservacion.\n");
													printf("\n\nIngrese su nombre completo: ");
													FILE *p;
													p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
													fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
													fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
													fputs(" Reservación a nombre de: ",p);
													scanf(" %[^\n]",&L);
													strupr(L);
													fputs(L,p);
													fputs("\n\n No. cuenta: ",p);
													printf("\nIngrese su numero de cuenta: ");
													scanf(" %[^\n]",&NoCu);
													fputs(NoCu,p);
													fputs("\n\n Día seleccionado: MIÉRCOLES",p);
													fputs("\n\n Cajón reservado: 6",p);
													fputs("\n\n Horas reservadas: ",p);
													fprintf(p,"%i", horas);
													fputs("\n\n Hora de entrada: ",p);
													fprintf(p,"%i", ho1);
													fputs("   HRS. ",p);
													fputs("\n\n Hora de salida: ",p);
													fprintf(p,"%i", ho2);
													fputs("   HRS. ",p);
													fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
													fclose(p);
													printf("\n Comprobante generado exitosamente.\n");
												}
												else{
													horas=0;
													printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
												}
											}
											else{
												if(caj==7){
													printf("\n\n¿Cuantas horas va a reservar?:\n");
													scanf("%i",&horas);
													if(horas<=15){
														printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
														cont=1;
														printf("Digite la hora: \n");
														scanf("%i",&ho1);
														switch(ho1){
															case 7:
																P[7][0]=0;
																cont++;
																break;
															case 8: 
																P[7][1]=0;
																cont++;									
																break;
															case 9: 
																P[7][2]=0;
																cont++;
																break;
															case 10:
																P[7][3]=0;
																cont++;
																break;
															case 11: 
																P[7][4]=0;
																cont++;
																break;
															case 12: 
																P[7][5]=0;
																cont++;
																break;
															case 13: 
																P[7][6]=0;
																cont++;
																break;
															case 14: 
																P[7][7]=0;
																cont++;
																break;
															case 15: 
																P[7][8]=0;
																cont++;
																break;
															case 16: 
																P[7][9]=0;
																cont++;
																break;
															case 17: 
																P[7][10]=0;
																cont++;
																break;
															case 18: 
																P[7][11]=0;
																cont++;
																break;
															case 19: 
																P[7][12]=0;
																cont++;
																break;
															case 20: 
																P[7][13]=0;
																cont++;
																break;
															case 21: 
																P[7][14]=0;
																cont++;
																break;
															default:
																ho1=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
														ho2=(ho1+horas);
														while(cont<=horas){
															printf("\nDigite la hora: \n");
															scanf("%i",&i);
															switch(i){
																case 7:
																	P[7][0]=0;
																	i=0;
																	cont++;
																	break;
																case 8: 
																	P[7][1]=0;
																	i=0;
																	cont++;
																	break;
																case 9: 
																	P[7][2]=0;
																	i=0;
																	cont++;
																	break;
																case 10:
																	P[7][3]=0;
																	i=0;
																	cont++;
																	break;
																case 11: 
																	P[7][4]=0;
																	i=0;
																	cont++;
																	break;
																case 12: 
																	P[7][5]=0;
																	i=0;
																	cont++;
																	break;
																case 13: 
																	P[7][6]=0;
																	i=0;
																	cont++;
																	break;
																case 14: 
																	P[7][7]=0;
																	i=0;
																	cont++;
																	break;
																case 15: 
																	P[7][8]=0;
																	i=0;
																	cont++;
																	break;
																case 16: 
																	P[7][9]=0;
																	i=0;
																	cont++;
																	break;
																case 17: 
																	P[7][10]=0;
																	i=0;
																	cont++;
																	break;
																case 18: 
																	P[7][11]=0;
																	i=0;
																	cont++;
																	break;
																case 19: 
																	P[7][12]=0;
																	i=0;
																	cont++;
																	break;
																case 20: 
																	P[7][13]=0;
																	i=0;
																	cont++;
																	break;
																case 21: 
																	P[7][14]=0;
																	i=0;
																	cont++;
																	break;
																default:
																	i=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
														}
														system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
														printf("\n Generando comprobante de reservacion.\n");
														printf("\n\nIngrese su nombre completo: ");
														FILE *p;
														p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
														fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
														fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
														fputs(" Reservación a nombre de: ",p);
														scanf(" %[^\n]",&L);
														strupr(L);
														fputs(L,p);
														fputs("\n\n No. cuenta: ",p);
														printf("\nIngrese su numero de cuenta: ");
														scanf(" %[^\n]",&NoCu);
														fputs(NoCu,p);
														fputs("\n\n Día seleccionado: MIÉRCOLES",p);
														fputs("\n\n Cajón reservado: 7",p);
														fputs("\n\n Horas reservadas: ",p);
														fprintf(p,"%i", horas);
														fputs("\n\n Hora de entrada: ",p);
														fprintf(p,"%i", ho1);
														fputs("   HRS. ",p);
														fputs("\n\n Hora de salida: ",p);
														fprintf(p,"%i", ho2);
														fputs("   HRS. ",p);
														fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
														fclose(p);
														printf("\n Comprobante generado exitosamente.\n");
													}
													else{
														horas=0;
														printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
													}
												}
												else{
													if(caj==8){
														printf("\n\n¿Cuantas horas va a reservar?:\n");
														scanf("%i",&horas);
														if(horas<=15){
															printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
															cont=1;
															printf("Digite la hora: \n");
															scanf("%i",&ho1);
															switch(ho1){
																case 7:
																	P[8][0]=0;
																	cont++;
																	break;
																case 8: 
																	P[8][1]=0;
																	cont++;									
																	break;
																case 9: 
																	P[8][2]=0;
																	cont++;
																	break;
																case 10:
																	P[8][3]=0;
																	cont++;
																	break;
																case 11: 
																	P[8][4]=0;
																	cont++;
																	break;
																case 12: 
																	P[8][5]=0;
																	cont++;
																	break;
																case 13: 
																	P[8][6]=0;
																	cont++;
																	break;
																case 14: 
																	P[8][7]=0;
																	cont++;
																	break;
																case 15: 
																	P[8][8]=0;
																	cont++;
																	break;
																case 16: 
																	P[8][9]=0;
																	cont++;
																	break;
																case 17: 
																	P[8][10]=0;
																	cont++;
																	break;
																case 18: 
																	P[8][11]=0;
																	cont++;
																	break;
																case 19: 
																	P[8][12]=0;
																	cont++;
																	break;
																case 20: 
																	P[8][13]=0;
																	cont++;
																	break;
																case 21: 
																	P[8][14]=0;
																	cont++;
																	break;
																default:
																	ho1=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
															ho2=(ho1+horas);
															while(cont<=horas){
																printf("\nDigite la hora: \n");
																scanf("%i",&i);
																switch(i){
																	case 7:
																		P[8][0]=0;
																		i=0;
																		cont++;
																		break;
																	case 8: 
																		P[8][1]=0;
																		i=0;
																		cont++;
																		break;
																	case 9: 
																		P[8][2]=0;
																		i=0;
																		cont++;
																		break;
																	case 10:
																		P[8][3]=0;
																		i=0;
																		cont++;
																		break;
																	case 11: 
																		P[8][4]=0;
																		i=0;
																		cont++;
																		break;
																	case 12: 
																		P[8][5]=0;
																		i=0;
																		cont++;
																		break;
																	case 13: 
																		P[8][6]=0;
																		i=0;
																		cont++;
																		break;
																	case 14: 
																		P[8][7]=0;
																		i=0;
																		cont++;
																		break;
																	case 15: 
																		P[8][8]=0;
																		i=0;
																		cont++;
																		break;
																	case 16: 
																		P[8][9]=0;
																		i=0;
																		cont++;
																		break;
																	case 17: 
																		P[8][10]=0;
																		i=0;
																		cont++;
																		break;
																	case 18: 
																		P[8][11]=0;
																		i=0;
																		cont++;
																		break;
																	case 19: 
																		P[8][12]=0;
																		i=0;
																		cont++;
																		break;
																	case 20: 
																		P[8][13]=0;
																		i=0;
																		cont++;
																		break;
																	case 21: 
																		P[8][14]=0;
																		i=0;
																		cont++;
																		break;
																	default:
																		i=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
															}
															system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
															printf("\n Generando comprobante de reservacion.\n");
															printf("\n\nIngrese su nombre completo: ");
															FILE *p;
															p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
															fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
															fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
															fputs(" Reservación a nombre de: ",p);
															scanf(" %[^\n]",&L);
															strupr(L);
															fputs(L,p);
															fputs("\n\n No. cuenta: ",p);
															printf("\nIngrese su numero de cuenta: ");
															scanf(" %[^\n]",&NoCu);
															fputs(NoCu,p);
															fputs("\n\n Día seleccionado: MIÉRCOLES",p);
															fputs("\n\n Cajón reservado: 8",p);
															fputs("\n\n Horas reservadas: ",p);
															fprintf(p,"%i", horas);
															fputs("\n\n Hora de entrada: ",p);
															fprintf(p,"%i", ho1);
															fputs("   HRS. ",p);
															fputs("\n\n Hora de salida: ",p);
															fprintf(p,"%i", ho2);
															fputs("   HRS. ",p);
															fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
															fclose(p);
															printf("\n Comprobante generado exitosamente.\n");
														}
														else{
															horas=0;
															printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
														}
													}
													else{
														if(caj==9){
															printf("\n\n¿Cuantas horas va a reservar?:\n");
															scanf("%i",&horas);
															if(horas<=15){
																printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																cont=1;
																printf("Digite la hora: \n");
																scanf("%i",&ho1);
																switch(ho1){
																	case 7:
																		P[9][0]=0;
																		cont++;
																		break;
																	case 8: 
																		P[9][1]=0;
																		cont++;									
																		break;
																	case 9: 
																		P[9][2]=0;
																		cont++;
																		break;
																	case 10:
																		P[9][3]=0;
																		cont++;
																		break;
																	case 11: 
																		P[9][4]=0;
																		cont++;
																		break;
																	case 12: 
																		P[9][5]=0;
																		cont++;
																		break;
																	case 13: 
																		P[9][6]=0;
																		cont++;
																		break;
																	case 14: 
																		P[9][7]=0;
																		cont++;
																		break;
																	case 15: 
																		P[9][8]=0;
																		cont++;
																		break;
																	case 16: 
																		P[9][9]=0;
																		cont++;
																		break;
																	case 17: 
																		P[9][10]=0;
																		cont++;
																		break;
																	case 18: 
																		P[9][11]=0;
																		cont++;
																		break;
																	case 19: 
																		P[9][12]=0;
																		cont++;
																		break;
																	case 20: 
																		P[9][13]=0;
																		cont++;
																		break;
																	case 21: 
																		P[9][14]=0;
																		cont++;
																		break;
																	default:
																		ho1=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
																ho2=(ho1+horas);
																while(cont<=horas){
																	printf("\nDigite la hora: \n");
																	scanf("%i",&i);
																	switch(i){
																		case 7:
																			P[9][0]=0;
																			i=0;
																			cont++;
																			break;
																		case 8: 
																			P[9][1]=0;
																			i=0;
																			cont++;
																			break;
																		case 9: 
																			P[9][2]=0;
																			i=0;
																			cont++;
																			break;
																		case 10:
																			P[9][3]=0;
																			i=0;
																			cont++;
																			break;
																		case 11: 
																			P[9][4]=0;
																			i=0;
																			cont++;
																			break;
																		case 12: 
																			P[9][5]=0;
																			i=0;
																			cont++;
																			break;
																		case 13: 
																			P[9][6]=0;
																			i=0;
																			cont++;
																			break;
																		case 14: 
																			P[9][7]=0;
																			i=0;
																			cont++;
																			break;
																		case 15: 
																			P[9][8]=0;
																			i=0;
																			cont++;
																			break;
																		case 16: 
																			P[9][9]=0;
																			i=0;
																			cont++;
																			break;
																		case 17: 
																			P[9][10]=0;
																			i=0;
																			cont++;
																			break;
																		case 18: 
																			P[9][11]=0;
																			i=0;
																			cont++;
																			break;
																		case 19: 
																			P[9][12]=0;
																			i=0;
																			cont++;
																			break;
																		case 20: 
																			P[9][13]=0;
																			i=0;
																			cont++;
																			break;
																		case 21: 
																			P[9][14]=0;
																			i=0;
																			cont++;
																			break;
																		default:
																			i=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																}
																system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																printf("\n Generando comprobante de reservacion.\n");
																printf("\n\nIngrese su nombre completo: ");
																FILE *p;
																p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																fputs(" Reservación a nombre de: ",p);
																scanf(" %[^\n]",&L);
																strupr(L);
																fputs(L,p);
																fputs("\n\n No. cuenta: ",p);
																printf("\nIngrese su numero de cuenta: ");
																scanf(" %[^\n]",&NoCu);
																fputs(NoCu,p);
																fputs("\n\n Día seleccionado: MIÉRCOLES",p);
																fputs("\n\n Cajón reservado: 9",p);
																fputs("\n\n Horas reservadas: ",p);
																fprintf(p,"%i", horas);
																fputs("\n\n Hora de entrada: ",p);
																fprintf(p,"%i", ho1);
																fputs("   HRS. ",p);
																fputs("\n\n Hora de salida: ",p);
																fprintf(p,"%i", ho2);
																fputs("   HRS. ",p);
																fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																fclose(p);
																printf("\n Comprobante generado exitosamente.\n");
															}
															else{
																horas=0;
																printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
															}
														}
														else{
															if(caj==10){
																printf("\n\n¿Cuantas horas va a reservar?:\n");
																scanf("%i",&horas);
																if(horas<=15){
																	printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																	cont=1;
																	printf("Digite la hora: \n");
																	scanf("%i",&ho1);
																	switch(ho1){
																		case 7:
																			P[10][0]=0;
																			cont++;
																			break;
																		case 8: 
																			P[10][1]=0;
																			cont++;									
																			break;
																		case 9: 
																			P[10][2]=0;
																			cont++;
																			break;
																		case 10:
																			P[10][3]=0;
																			cont++;
																			break;
																		case 11: 
																			P[10][4]=0;
																			cont++;
																			break;
																		case 12: 
																			P[10][5]=0;
																			cont++;
																			break;
																		case 13: 
																			P[10][6]=0;
																			cont++;
																			break;
																		case 14: 
																			P[10][7]=0;
																			cont++;
																			break;
																		case 15: 
																			P[10][8]=0;
																			cont++;
																			break;
																		case 16: 
																			P[10][9]=0;
																			cont++;
																			break;
																		case 17: 
																			P[10][10]=0;
																			cont++;
																			break;
																		case 18: 
																			P[10][11]=0;
																			cont++;
																			break;
																		case 19: 
																			P[10][12]=0;
																			cont++;
																			break;
																		case 20: 
																			P[10][13]=0;
																			cont++;
																			break;
																		case 21: 
																			P[10][14]=0;
																			cont++;
																			break;
																		default:
																			ho1=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																	ho2=(ho1+horas);
																	while(cont<=horas){
																		printf("\nDigite la hora: \n");
																		scanf("%i",&i);
																		switch(i){
																			case 7:
																				P[10][0]=0;
																				i=0;
																				cont++;
																				break;
																			case 8: 
																				P[10][1]=0;
																				i=0;
																				cont++;
																				break;
																			case 9: 
																				P[10][2]=0;
																				i=0;
																				cont++;
																				break;
																			case 10:
																				P[10][3]=0;
																				i=0;
																				cont++;
																				break;
																			case 11: 
																				P[10][4]=0;
																				i=0;
																				cont++;
																				break;
																			case 12: 
																				P[10][5]=0;
																				i=0;
																				cont++;
																				break;
																			case 13: 
																				P[10][6]=0;
																				i=0;
																				cont++;
																				break;
																			case 14: 
																				P[10][7]=0;
																				i=0;
																				cont++;
																				break;
																			case 15: 
																				P[10][8]=0;
																				i=0;
																				cont++;
																				break;
																			case 16: 
																				P[10][9]=0;
																				i=0;
																				cont++;
																				break;
																			case 17: 
																				P[10][10]=0;
																				i=0;
																				cont++;
																				break;
																			case 18: 
																				P[10][11]=0;
																				i=0;
																				cont++;
																				break;
																			case 19: 
																				P[10][12]=0;
																				i=0;
																				cont++;
																				break;
																			case 20: 
																				P[10][13]=0;
																				i=0;
																				cont++;
																				break;
																			case 21: 
																				P[10][14]=0;
																				i=0;
																				cont++;
																				break;
																			default:
																				i=0;
																				printf("\n Hora invalida, digite de nuevo: 7-21\n");
																		}
																	}
																	system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																	printf("\n Generando comprobante de reservacion.\n");
																	printf("\n\nIngrese su nombre completo: ");
																	FILE *p;
																	p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																	fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																	fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																	fputs(" Reservación a nombre de: ",p);
																	scanf(" %[^\n]",&L);
																	strupr(L);
																	fputs(L,p);
																	fputs("\n\n No. cuenta: ",p);
																	printf("\nIngrese su numero de cuenta: ");
																	scanf(" %[^\n]",&NoCu);
																	fputs(NoCu,p);
																	fputs("\n\n Día seleccionado: MIÉRCOLES",p);
																	fputs("\n\n Cajón reservado: 10",p);
																	fputs("\n\n Horas reservadas: ",p);
																	fprintf(p,"%i", horas);
																	fputs("\n\n Hora de entrada: ",p);
																	fprintf(p,"%i", ho1);
																	fputs("   HRS. ",p);
																	fputs("\n\n Hora de salida: ",p);
																	fprintf(p,"%i", ho2);
																	fputs("   HRS. ",p);
																	fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																	fclose(p);
																	printf("\n Comprobante generado exitosamente.\n");
																}
																else{
																	horas=0;
																	printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
																}
															}
															else{
																printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-10\n");
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					break;
				case 4:
					printf("----------Cajones disponibles: 11 (0-10)----------\n ----------HORARIO----------\n {'   ',P[0], P[1], P[2], P[3],  P[4],  P[5],  P[6],  P[7],  P[8],  P[9], P[10],  P[11], P[12], P[13], P[14]},\n {P[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[6], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[7], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[8], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[9], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[10],'7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n ");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-10:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									P[0][0]=0;
									cont++;
									break;
								case 8: 
									P[0][1]=0;
									cont++;									
									break;
								case 9: 
									P[0][2]=0;
									cont++;
									break;
								case 10:
									P[0][3]=0;
									cont++;
									break;
								case 11: 
									P[0][4]=0;
									cont++;
									break;
								case 12: 
									P[0][5]=0;
									cont++;
									break;
								case 13: 
									P[0][6]=0;
									cont++;
									break;
								case 14: 
									P[0][7]=0;
									cont++;
									break;
								case 15: 
									P[0][8]=0;
									cont++;
									break;
								case 16: 
									P[0][9]=0;
									cont++;
									break;
								case 17: 
									P[0][10]=0;
									cont++;
									break;
								case 18: 
									P[0][11]=0;
									cont++;
									break;
								case 19: 
									P[0][12]=0;
									cont++;
									break;
								case 20: 
									P[0][13]=0;
									cont++;
									break;
								case 21: 
									P[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										P[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										P[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										P[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										P[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										P[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										P[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										P[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										P[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										P[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										P[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										P[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										P[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										P[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										P[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										P[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: JUEVES",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										P[1][0]=0;
										cont++;
										break;
									case 8: 
										P[1][1]=0;
										cont++;									
										break;
									case 9: 
										P[1][2]=0;
										cont++;
										break;
									case 10:
										P[1][3]=0;
										cont++;
										break;
									case 11: 
										P[1][4]=0;
										cont++;
										break;
									case 12: 
										P[1][5]=0;
										cont++;
										break;
									case 13: 
										P[1][6]=0;
										cont++;
										break;
									case 14: 
										P[1][7]=0;
										cont++;
										break;
									case 15: 
										P[1][8]=0;
										cont++;
										break;
									case 16: 
										P[1][9]=0;
										cont++;
										break;
									case 17: 
										P[1][10]=0;
										cont++;
										break;
									case 18: 
										P[1][11]=0;
										cont++;
										break;
									case 19: 
										P[1][12]=0;
										cont++;
										break;
									case 20: 
										P[1][13]=0;
										cont++;
										break;
									case 21: 
										P[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											P[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											P[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											P[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											P[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											P[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											P[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											P[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											P[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											P[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											P[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											P[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											P[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											P[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											P[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											P[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: JUEVES",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											P[2][0]=0;
											cont++;
											break;
										case 8: 
											P[2][1]=0;
											cont++;									
											break;
										case 9: 
											P[2][2]=0;
											cont++;
											break;
										case 10:
											P[2][3]=0;
											cont++;
											break;
										case 11: 
											P[2][4]=0;
											cont++;
											break;
										case 12: 
											P[2][5]=0;
											cont++;
											break;
										case 13: 
											P[2][6]=0;
											cont++;
											break;
										case 14: 
											P[2][7]=0;
											cont++;
											break;
										case 15: 
											P[2][8]=0;
											cont++;
											break;
										case 16: 
											P[2][9]=0;
											cont++;
											break;
										case 17: 
											P[2][10]=0;
											cont++;
											break;
										case 18: 
											P[2][11]=0;
											cont++;
											break;
										case 19: 
											P[2][12]=0;
											cont++;
											break;
										case 20: 
											P[2][13]=0;
											cont++;
											break;
										case 21: 
											P[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												P[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												P[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												P[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												P[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												P[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												P[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												P[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												P[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												P[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												P[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												P[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												P[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												P[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												P[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												P[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: JUEVES",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												P[3][0]=0;
												cont++;
												break;
											case 8: 
												P[3][1]=0;
												cont++;									
												break;
											case 9: 
												P[3][2]=0;
												cont++;
												break;
											case 10:
												P[3][3]=0;
												cont++;
												break;
											case 11: 
												P[3][4]=0;
												cont++;
												break;
											case 12: 
												P[3][5]=0;
												cont++;
												break;
											case 13: 
												P[3][6]=0;
												cont++;
												break;
											case 14: 
												P[3][7]=0;
												cont++;
												break;
											case 15: 
												P[3][8]=0;
												cont++;
												break;
											case 16: 
												P[3][9]=0;
												cont++;
												break;
											case 17: 
												P[3][10]=0;
												cont++;
												break;
											case 18: 
												P[3][11]=0;
												cont++;
												break;
											case 19: 
												P[3][12]=0;
												cont++;
												break;
											case 20: 
												P[3][13]=0;
												cont++;
												break;
											case 21: 
												P[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													P[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													P[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													P[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													P[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													P[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													P[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													P[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													P[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													P[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													P[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													P[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													P[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													P[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													P[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													P[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: JUEVES",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													P[4][0]=0;
													cont++;
													break;
												case 8: 
													P[4][1]=0;
													cont++;									
													break;
												case 9: 
													P[4][2]=0;
													cont++;
													break;
												case 10:
													P[4][3]=0;
													cont++;
													break;
												case 11: 
													P[4][4]=0;
													cont++;
													break;
												case 12: 
													P[4][5]=0;
													cont++;
													break;
												case 13: 
													P[4][6]=0;
													cont++;
													break;
												case 14: 
													P[4][7]=0;
													cont++;
													break;
												case 15: 
													P[4][8]=0;
													cont++;
													break;
												case 16: 
													P[4][9]=0;
													cont++;
													break;
												case 17: 
													P[4][10]=0;
													cont++;
													break;
												case 18: 
													P[4][11]=0;
													cont++;
													break;
												case 19: 
													P[4][12]=0;
													cont++;
													break;
												case 20: 
													P[4][13]=0;
													cont++;
													break;
												case 21: 
													P[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														P[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														P[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														P[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														P[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														P[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														P[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														P[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														P[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														P[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														P[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														P[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														P[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														P[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														P[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														P[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: JUEVES",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														P[5][0]=0;
														cont++;
														break;
													case 8: 
														P[5][1]=0;
														cont++;									
														break;
													case 9: 
														P[5][2]=0;
														cont++;
														break;
													case 10:
														P[5][3]=0;
														cont++;
														break;
													case 11: 
														P[5][4]=0;
														cont++;
														break;
													case 12: 
														P[5][5]=0;
														cont++;
														break;
													case 13: 
														P[5][6]=0;
														cont++;
														break;
													case 14: 
														P[5][7]=0;
														cont++;
														break;
													case 15: 
														P[5][8]=0;
														cont++;
														break;
													case 16: 
														P[5][9]=0;
														cont++;
														break;
													case 17: 
														P[5][10]=0;
														cont++;
														break;
													case 18: 
														P[5][11]=0;
														cont++;
														break;
													case 19: 
														P[5][12]=0;
														cont++;
														break;
													case 20: 
														P[5][13]=0;
														cont++;
														break;
													case 21: 
														P[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															P[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															P[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															P[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															P[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															P[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															P[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															P[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															P[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															P[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															P[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															P[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															P[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															P[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															P[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															P[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: JUEVES",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											if(caj==6){
												printf("\n\n¿Cuantas horas va a reservar?:\n");
												scanf("%i",&horas);
												if(horas<=15){
													printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
													cont=1;
													printf("Digite la hora: \n");
													scanf("%i",&ho1);
													switch(ho1){
														case 7:
															P[6][0]=0;
															cont++;
															break;
														case 8: 
															P[6][1]=0;
															cont++;									
															break;
														case 9: 
															P[6][2]=0;
															cont++;
															break;
														case 10:
															P[6][3]=0;
															cont++;
															break;
														case 11: 
															P[6][4]=0;
															cont++;
															break;
														case 12: 
															P[6][5]=0;
															cont++;
															break;
														case 13: 
															P[6][6]=0;
															cont++;
															break;
														case 14: 
															P[6][7]=0;
															cont++;
															break;
														case 15: 
															P[6][8]=0;
															cont++;
															break;
														case 16: 
															P[6][9]=0;
															cont++;
															break;
														case 17: 
															P[6][10]=0;
															cont++;
															break;
														case 18: 
															P[6][11]=0;
															cont++;
															break;
														case 19: 
															P[6][12]=0;
															cont++;
															break;
														case 20: 
															P[6][13]=0;
															cont++;
															break;
														case 21: 
															P[6][14]=0;
															cont++;
															break;
														default:
															ho1=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
													ho2=(ho1+horas);
													while(cont<=horas){
														printf("\nDigite la hora: \n");
														scanf("%i",&i);
														switch(i){
															case 7:
																P[6][0]=0;
																i=0;
																cont++;
																break;
															case 8: 
																P[6][1]=0;
																i=0;
																cont++;
																break;
															case 9: 
																P[6][2]=0;
																i=0;
																cont++;
																break;
															case 10:
																P[6][3]=0;
																i=0;
																cont++;
																break;
															case 11: 
																P[6][4]=0;
																i=0;
																cont++;
																break;
															case 12: 
																P[6][5]=0;
																i=0;
																cont++;
																break;
															case 13: 
																P[6][6]=0;
																i=0;
																cont++;
																break;
															case 14: 
																P[6][7]=0;
																i=0;
																cont++;
																break;
															case 15: 
																P[6][8]=0;
																i=0;
																cont++;
																break;
															case 16: 
																P[6][9]=0;
																i=0;
																cont++;
																break;
															case 17: 
																P[6][10]=0;
																i=0;
																cont++;
																break;
															case 18: 
																P[6][11]=0;
																i=0;
																cont++;
																break;
															case 19: 
																P[6][12]=0;
																i=0;
																cont++;
																break;
															case 20: 
																P[6][13]=0;
																i=0;
																cont++;
																break;
															case 21: 
																P[6][14]=0;
																i=0;
																cont++;
																break;
															default:
																i=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
													}
													system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
													printf("\n Generando comprobante de reservacion.\n");
													printf("\n\nIngrese su nombre completo: ");
													FILE *p;
													p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
													fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
													fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
													fputs(" Reservación a nombre de: ",p);
													scanf(" %[^\n]",&L);
													strupr(L);
													fputs(L,p);
													fputs("\n\n No. cuenta: ",p);
													printf("\nIngrese su numero de cuenta: ");
													scanf(" %[^\n]",&NoCu);
													fputs(NoCu,p);
													fputs("\n\n Día seleccionado: JUEVES",p);
													fputs("\n\n Cajón reservado: 6",p);
													fputs("\n\n Horas reservadas: ",p);
													fprintf(p,"%i", horas);
													fputs("\n\n Hora de entrada: ",p);
													fprintf(p,"%i", ho1);
													fputs("   HRS. ",p);
													fputs("\n\n Hora de salida: ",p);
													fprintf(p,"%i", ho2);
													fputs("   HRS. ",p);
													fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
													fclose(p);
													printf("\n Comprobante generado exitosamente.\n");
												}
												else{
													horas=0;
													printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
												}
											}
											else{
												if(caj==7){
													printf("\n\n¿Cuantas horas va a reservar?:\n");
													scanf("%i",&horas);
													if(horas<=15){
														printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
														cont=1;
														printf("Digite la hora: \n");
														scanf("%i",&ho1);
														switch(ho1){
															case 7:
																P[7][0]=0;
																cont++;
																break;
															case 8: 
																P[7][1]=0;
																cont++;									
																break;
															case 9: 
																P[7][2]=0;
																cont++;
																break;
															case 10:
																P[7][3]=0;
																cont++;
																break;
															case 11: 
																P[7][4]=0;
																cont++;
																break;
															case 12: 
																P[7][5]=0;
																cont++;
																break;
															case 13: 
																P[7][6]=0;
																cont++;
																break;
															case 14: 
																P[7][7]=0;
																cont++;
																break;
															case 15: 
																P[7][8]=0;
																cont++;
																break;
															case 16: 
																P[7][9]=0;
																cont++;
																break;
															case 17: 
																P[7][10]=0;
																cont++;
																break;
															case 18: 
																P[7][11]=0;
																cont++;
																break;
															case 19: 
																P[7][12]=0;
																cont++;
																break;
															case 20: 
																P[7][13]=0;
																cont++;
																break;
															case 21: 
																P[7][14]=0;
																cont++;
																break;
															default:
																ho1=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
														ho2=(ho1+horas);
														while(cont<=horas){
															printf("\nDigite la hora: \n");
															scanf("%i",&i);
															switch(i){
																case 7:
																	P[7][0]=0;
																	i=0;
																	cont++;
																	break;
																case 8: 
																	P[7][1]=0;
																	i=0;
																	cont++;
																	break;
																case 9: 
																	P[7][2]=0;
																	i=0;
																	cont++;
																	break;
																case 10:
																	P[7][3]=0;
																	i=0;
																	cont++;
																	break;
																case 11: 
																	P[7][4]=0;
																	i=0;
																	cont++;
																	break;
																case 12: 
																	P[7][5]=0;
																	i=0;
																	cont++;
																	break;
																case 13: 
																	P[7][6]=0;
																	i=0;
																	cont++;
																	break;
																case 14: 
																	P[7][7]=0;
																	i=0;
																	cont++;
																	break;
																case 15: 
																	P[7][8]=0;
																	i=0;
																	cont++;
																	break;
																case 16: 
																	P[7][9]=0;
																	i=0;
																	cont++;
																	break;
																case 17: 
																	P[7][10]=0;
																	i=0;
																	cont++;
																	break;
																case 18: 
																	P[7][11]=0;
																	i=0;
																	cont++;
																	break;
																case 19: 
																	P[7][12]=0;
																	i=0;
																	cont++;
																	break;
																case 20: 
																	P[7][13]=0;
																	i=0;
																	cont++;
																	break;
																case 21: 
																	P[7][14]=0;
																	i=0;
																	cont++;
																	break;
																default:
																	i=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
														}
														system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
														printf("\n Generando comprobante de reservacion.\n");
														printf("\n\nIngrese su nombre completo: ");
														FILE *p;
														p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
														fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
														fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
														fputs(" Reservación a nombre de: ",p);
														scanf(" %[^\n]",&L);
														strupr(L);
														fputs(L,p);
														fputs("\n\n No. cuenta: ",p);
														printf("\nIngrese su numero de cuenta: ");
														scanf(" %[^\n]",&NoCu);
														fputs(NoCu,p);
														fputs("\n\n Día seleccionado: JUEVES",p);
														fputs("\n\n Cajón reservado: 7",p);
														fputs("\n\n Horas reservadas: ",p);
														fprintf(p,"%i", horas);
														fputs("\n\n Hora de entrada: ",p);
														fprintf(p,"%i", ho1);
														fputs("   HRS. ",p);
														fputs("\n\n Hora de salida: ",p);
														fprintf(p,"%i", ho2);
														fputs("   HRS. ",p);
														fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
														fclose(p);
														printf("\n Comprobante generado exitosamente.\n");
													}
													else{
														horas=0;
														printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
													}
												}
												else{
													if(caj==8){
														printf("\n\n¿Cuantas horas va a reservar?:\n");
														scanf("%i",&horas);
														if(horas<=15){
															printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
															cont=1;
															printf("Digite la hora: \n");
															scanf("%i",&ho1);
															switch(ho1){
																case 7:
																	P[8][0]=0;
																	cont++;
																	break;
																case 8: 
																	P[8][1]=0;
																	cont++;									
																	break;
																case 9: 
																	P[8][2]=0;
																	cont++;
																	break;
																case 10:
																	P[8][3]=0;
																	cont++;
																	break;
																case 11: 
																	P[8][4]=0;
																	cont++;
																	break;
																case 12: 
																	P[8][5]=0;
																	cont++;
																	break;
																case 13: 
																	P[8][6]=0;
																	cont++;
																	break;
																case 14: 
																	P[8][7]=0;
																	cont++;
																	break;
																case 15: 
																	P[8][8]=0;
																	cont++;
																	break;
																case 16: 
																	P[8][9]=0;
																	cont++;
																	break;
																case 17: 
																	P[8][10]=0;
																	cont++;
																	break;
																case 18: 
																	P[8][11]=0;
																	cont++;
																	break;
																case 19: 
																	P[8][12]=0;
																	cont++;
																	break;
																case 20: 
																	P[8][13]=0;
																	cont++;
																	break;
																case 21: 
																	P[8][14]=0;
																	cont++;
																	break;
																default:
																	ho1=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
															ho2=(ho1+horas);
															while(cont<=horas){
																printf("\nDigite la hora: \n");
																scanf("%i",&i);
																switch(i){
																	case 7:
																		P[8][0]=0;
																		i=0;
																		cont++;
																		break;
																	case 8: 
																		P[8][1]=0;
																		i=0;
																		cont++;
																		break;
																	case 9: 
																		P[8][2]=0;
																		i=0;
																		cont++;
																		break;
																	case 10:
																		P[8][3]=0;
																		i=0;
																		cont++;
																		break;
																	case 11: 
																		P[8][4]=0;
																		i=0;
																		cont++;
																		break;
																	case 12: 
																		P[8][5]=0;
																		i=0;
																		cont++;
																		break;
																	case 13: 
																		P[8][6]=0;
																		i=0;
																		cont++;
																		break;
																	case 14: 
																		P[8][7]=0;
																		i=0;
																		cont++;
																		break;
																	case 15: 
																		P[8][8]=0;
																		i=0;
																		cont++;
																		break;
																	case 16: 
																		P[8][9]=0;
																		i=0;
																		cont++;
																		break;
																	case 17: 
																		P[8][10]=0;
																		i=0;
																		cont++;
																		break;
																	case 18: 
																		P[8][11]=0;
																		i=0;
																		cont++;
																		break;
																	case 19: 
																		P[8][12]=0;
																		i=0;
																		cont++;
																		break;
																	case 20: 
																		P[8][13]=0;
																		i=0;
																		cont++;
																		break;
																	case 21: 
																		P[8][14]=0;
																		i=0;
																		cont++;
																		break;
																	default:
																		i=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
															}
															system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
															printf("\n Generando comprobante de reservacion.\n");
															printf("\n\nIngrese su nombre completo: ");
															FILE *p;
															p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
															fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
															fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
															fputs(" Reservación a nombre de: ",p);
															scanf(" %[^\n]",&L);
															strupr(L);
															fputs(L,p);
															fputs("\n\n No. cuenta: ",p);
															printf("\nIngrese su numero de cuenta: ");
															scanf(" %[^\n]",&NoCu);
															fputs(NoCu,p);
															fputs("\n\n Día seleccionado: JUEVES",p);
															fputs("\n\n Cajón reservado: 8",p);
															fputs("\n\n Horas reservadas: ",p);
															fprintf(p,"%i", horas);
															fputs("\n\n Hora de entrada: ",p);
															fprintf(p,"%i", ho1);
															fputs("   HRS. ",p);
															fputs("\n\n Hora de salida: ",p);
															fprintf(p,"%i", ho2);
															fputs("   HRS. ",p);
															fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
															fclose(p);
															printf("\n Comprobante generado exitosamente.\n");
														}
														else{
															horas=0;
															printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
														}
													}
													else{
														if(caj==9){
															printf("\n\n¿Cuantas horas va a reservar?:\n");
															scanf("%i",&horas);
															if(horas<=15){
																printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																cont=1;
																printf("Digite la hora: \n");
																scanf("%i",&ho1);
																switch(ho1){
																	case 7:
																		P[9][0]=0;
																		cont++;
																		break;
																	case 8: 
																		P[9][1]=0;
																		cont++;									
																		break;
																	case 9: 
																		P[9][2]=0;
																		cont++;
																		break;
																	case 10:
																		P[9][3]=0;
																		cont++;
																		break;
																	case 11: 
																		P[9][4]=0;
																		cont++;
																		break;
																	case 12: 
																		P[9][5]=0;
																		cont++;
																		break;
																	case 13: 
																		P[9][6]=0;
																		cont++;
																		break;
																	case 14: 
																		P[9][7]=0;
																		cont++;
																		break;
																	case 15: 
																		P[9][8]=0;
																		cont++;
																		break;
																	case 16: 
																		P[9][9]=0;
																		cont++;
																		break;
																	case 17: 
																		P[9][10]=0;
																		cont++;
																		break;
																	case 18: 
																		P[9][11]=0;
																		cont++;
																		break;
																	case 19: 
																		P[9][12]=0;
																		cont++;
																		break;
																	case 20: 
																		P[9][13]=0;
																		cont++;
																		break;
																	case 21: 
																		P[9][14]=0;
																		cont++;
																		break;
																	default:
																		ho1=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
																ho2=(ho1+horas);
																while(cont<=horas){
																	printf("\nDigite la hora: \n");
																	scanf("%i",&i);
																	switch(i){
																		case 7:
																			P[9][0]=0;
																			i=0;
																			cont++;
																			break;
																		case 8: 
																			P[9][1]=0;
																			i=0;
																			cont++;
																			break;
																		case 9: 
																			P[9][2]=0;
																			i=0;
																			cont++;
																			break;
																		case 10:
																			P[9][3]=0;
																			i=0;
																			cont++;
																			break;
																		case 11: 
																			P[9][4]=0;
																			i=0;
																			cont++;
																			break;
																		case 12: 
																			P[9][5]=0;
																			i=0;
																			cont++;
																			break;
																		case 13: 
																			P[9][6]=0;
																			i=0;
																			cont++;
																			break;
																		case 14: 
																			P[9][7]=0;
																			i=0;
																			cont++;
																			break;
																		case 15: 
																			P[9][8]=0;
																			i=0;
																			cont++;
																			break;
																		case 16: 
																			P[9][9]=0;
																			i=0;
																			cont++;
																			break;
																		case 17: 
																			P[9][10]=0;
																			i=0;
																			cont++;
																			break;
																		case 18: 
																			P[9][11]=0;
																			i=0;
																			cont++;
																			break;
																		case 19: 
																			P[9][12]=0;
																			i=0;
																			cont++;
																			break;
																		case 20: 
																			P[9][13]=0;
																			i=0;
																			cont++;
																			break;
																		case 21: 
																			P[9][14]=0;
																			i=0;
																			cont++;
																			break;
																		default:
																			i=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																}
																system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																printf("\n Generando comprobante de reservacion.\n");
																printf("\n\nIngrese su nombre completo: ");
																FILE *p;
																p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																fputs(" Reservación a nombre de: ",p);
																scanf(" %[^\n]",&L);
																strupr(L);
																fputs(L,p);
																fputs("\n\n No. cuenta: ",p);
																printf("\nIngrese su numero de cuenta: ");
																scanf(" %[^\n]",&NoCu);
																fputs(NoCu,p);
																fputs("\n\n Día seleccionado: JUEVES",p);
																fputs("\n\n Cajón reservado: 9",p);
																fputs("\n\n Horas reservadas: ",p);
																fprintf(p,"%i", horas);
																fputs("\n\n Hora de entrada: ",p);
																fprintf(p,"%i", ho1);
																fputs("   HRS. ",p);
																fputs("\n\n Hora de salida: ",p);
																fprintf(p,"%i", ho2);
																fputs("   HRS. ",p);
																fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																fclose(p);
																printf("\n Comprobante generado exitosamente.\n");
															}
															else{
																horas=0;
																printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
															}
														}
														else{
															if(caj==10){
																printf("\n\n¿Cuantas horas va a reservar?:\n");
																scanf("%i",&horas);
																if(horas<=15){
																	printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																	cont=1;
																	printf("Digite la hora: \n");
																	scanf("%i",&ho1);
																	switch(ho1){
																		case 7:
																			P[10][0]=0;
																			cont++;
																			break;
																		case 8: 
																			P[10][1]=0;
																			cont++;									
																			break;
																		case 9: 
																			P[10][2]=0;
																			cont++;
																			break;
																		case 10:
																			P[10][3]=0;
																			cont++;
																			break;
																		case 11: 
																			P[10][4]=0;
																			cont++;
																			break;
																		case 12: 
																			P[10][5]=0;
																			cont++;
																			break;
																		case 13: 
																			P[10][6]=0;
																			cont++;
																			break;
																		case 14: 
																			P[10][7]=0;
																			cont++;
																			break;
																		case 15: 
																			P[10][8]=0;
																			cont++;
																			break;
																		case 16: 
																			P[10][9]=0;
																			cont++;
																			break;
																		case 17: 
																			P[10][10]=0;
																			cont++;
																			break;
																		case 18: 
																			P[10][11]=0;
																			cont++;
																			break;
																		case 19: 
																			P[10][12]=0;
																			cont++;
																			break;
																		case 20: 
																			P[10][13]=0;
																			cont++;
																			break;
																		case 21: 
																			P[10][14]=0;
																			cont++;
																			break;
																		default:
																			ho1=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																	ho2=(ho1+horas);
																	while(cont<=horas){
																		printf("\nDigite la hora: \n");
																		scanf("%i",&i);
																		switch(i){
																			case 7:
																				P[10][0]=0;
																				i=0;
																				cont++;
																				break;
																			case 8: 
																				P[10][1]=0;
																				i=0;
																				cont++;
																				break;
																			case 9: 
																				P[10][2]=0;
																				i=0;
																				cont++;
																				break;
																			case 10:
																				P[10][3]=0;
																				i=0;
																				cont++;
																				break;
																			case 11: 
																				P[10][4]=0;
																				i=0;
																				cont++;
																				break;
																			case 12: 
																				P[10][5]=0;
																				i=0;
																				cont++;
																				break;
																			case 13: 
																				P[10][6]=0;
																				i=0;
																				cont++;
																				break;
																			case 14: 
																				P[10][7]=0;
																				i=0;
																				cont++;
																				break;
																			case 15: 
																				P[10][8]=0;
																				i=0;
																				cont++;
																				break;
																			case 16: 
																				P[10][9]=0;
																				i=0;
																				cont++;
																				break;
																			case 17: 
																				P[10][10]=0;
																				i=0;
																				cont++;
																				break;
																			case 18: 
																				P[10][11]=0;
																				i=0;
																				cont++;
																				break;
																			case 19: 
																				P[10][12]=0;
																				i=0;
																				cont++;
																				break;
																			case 20: 
																				P[10][13]=0;
																				i=0;
																				cont++;
																				break;
																			case 21: 
																				P[10][14]=0;
																				i=0;
																				cont++;
																				break;
																			default:
																				i=0;
																				printf("\n Hora invalida, digite de nuevo: 7-21\n");
																		}
																	}
																	system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																	printf("\n Generando comprobante de reservacion.\n");
																	printf("\n\nIngrese su nombre completo: ");
																	FILE *p;
																	p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																	fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																	fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																	fputs(" Reservación a nombre de: ",p);
																	scanf(" %[^\n]",&L);
																	strupr(L);
																	fputs(L,p);
																	fputs("\n\n No. cuenta: ",p);
																	printf("\nIngrese su numero de cuenta: ");
																	scanf(" %[^\n]",&NoCu);
																	fputs(NoCu,p);
																	fputs("\n\n Día seleccionado: JUEVES",p);
																	fputs("\n\n Cajón reservado: 10",p);
																	fputs("\n\n Horas reservadas: ",p);
																	fprintf(p,"%i", horas);
																	fputs("\n\n Hora de entrada: ",p);
																	fprintf(p,"%i", ho1);
																	fputs("   HRS. ",p);
																	fputs("\n\n Hora de salida: ",p);
																	fprintf(p,"%i", ho2);
																	fputs("   HRS. ",p);
																	fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																	fclose(p);
																	printf("\n Comprobante generado exitosamente.\n");
																}
																else{
																	horas=0;
																	printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
																}
															}
															else{
																printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-10\n");
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
   					break;
				case 5:
					printf("----------Cajones disponibles: 11 (0-10)----------\n ----------HORARIO----------\n {'   ',P[0], P[1], P[2], P[3],  P[4],  P[5],  P[6],  P[7],  P[8],  P[9], P[10],  P[11], P[12], P[13], P[14]},\n {P[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[6], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[7], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[8], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[9], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[10],'7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n ");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-10:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									P[0][0]=0;
									cont++;
									break;
								case 8: 
									P[0][1]=0;
									cont++;									
									break;
								case 9: 
									P[0][2]=0;
									cont++;
									break;
								case 10:
									P[0][3]=0;
									cont++;
									break;
								case 11: 
									P[0][4]=0;
									cont++;
									break;
								case 12: 
									P[0][5]=0;
									cont++;
									break;
								case 13: 
									P[0][6]=0;
									cont++;
									break;
								case 14: 
									P[0][7]=0;
									cont++;
									break;
								case 15: 
									P[0][8]=0;
									cont++;
									break;
								case 16: 
									P[0][9]=0;
									cont++;
									break;
								case 17: 
									P[0][10]=0;
									cont++;
									break;
								case 18: 
									P[0][11]=0;
									cont++;
									break;
								case 19: 
									P[0][12]=0;
									cont++;
									break;
								case 20: 
									P[0][13]=0;
									cont++;
									break;
								case 21: 
									P[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										P[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										P[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										P[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										P[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										P[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										P[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										P[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										P[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										P[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										P[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										P[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										P[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										P[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										P[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										P[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: VIERNES",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										P[1][0]=0;
										cont++;
										break;
									case 8: 
										P[1][1]=0;
										cont++;									
										break;
									case 9: 
										P[1][2]=0;
										cont++;
										break;
									case 10:
										P[1][3]=0;
										cont++;
										break;
									case 11: 
										P[1][4]=0;
										cont++;
										break;
									case 12: 
										P[1][5]=0;
										cont++;
										break;
									case 13: 
										P[1][6]=0;
										cont++;
										break;
									case 14: 
										P[1][7]=0;
										cont++;
										break;
									case 15: 
										P[1][8]=0;
										cont++;
										break;
									case 16: 
										P[1][9]=0;
										cont++;
										break;
									case 17: 
										P[1][10]=0;
										cont++;
										break;
									case 18: 
										P[1][11]=0;
										cont++;
										break;
									case 19: 
										P[1][12]=0;
										cont++;
										break;
									case 20: 
										P[1][13]=0;
										cont++;
										break;
									case 21: 
										P[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											P[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											P[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											P[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											P[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											P[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											P[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											P[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											P[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											P[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											P[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											P[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											P[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											P[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											P[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											P[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: VIERNES",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											P[2][0]=0;
											cont++;
											break;
										case 8: 
											P[2][1]=0;
											cont++;									
											break;
										case 9: 
											P[2][2]=0;
											cont++;
											break;
										case 10:
											P[2][3]=0;
											cont++;
											break;
										case 11: 
											P[2][4]=0;
											cont++;
											break;
										case 12: 
											P[2][5]=0;
											cont++;
											break;
										case 13: 
											P[2][6]=0;
											cont++;
											break;
										case 14: 
											P[2][7]=0;
											cont++;
											break;
										case 15: 
											P[2][8]=0;
											cont++;
											break;
										case 16: 
											P[2][9]=0;
											cont++;
											break;
										case 17: 
											P[2][10]=0;
											cont++;
											break;
										case 18: 
											P[2][11]=0;
											cont++;
											break;
										case 19: 
											P[2][12]=0;
											cont++;
											break;
										case 20: 
											P[2][13]=0;
											cont++;
											break;
										case 21: 
											P[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												P[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												P[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												P[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												P[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												P[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												P[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												P[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												P[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												P[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												P[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												P[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												P[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												P[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												P[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												P[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: VIERNES",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												P[3][0]=0;
												cont++;
												break;
											case 8: 
												P[3][1]=0;
												cont++;									
												break;
											case 9: 
												P[3][2]=0;
												cont++;
												break;
											case 10:
												P[3][3]=0;
												cont++;
												break;
											case 11: 
												P[3][4]=0;
												cont++;
												break;
											case 12: 
												P[3][5]=0;
												cont++;
												break;
											case 13: 
												P[3][6]=0;
												cont++;
												break;
											case 14: 
												P[3][7]=0;
												cont++;
												break;
											case 15: 
												P[3][8]=0;
												cont++;
												break;
											case 16: 
												P[3][9]=0;
												cont++;
												break;
											case 17: 
												P[3][10]=0;
												cont++;
												break;
											case 18: 
												P[3][11]=0;
												cont++;
												break;
											case 19: 
												P[3][12]=0;
												cont++;
												break;
											case 20: 
												P[3][13]=0;
												cont++;
												break;
											case 21: 
												P[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													P[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													P[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													P[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													P[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													P[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													P[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													P[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													P[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													P[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													P[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													P[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													P[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													P[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													P[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													P[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: VIERNES",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													P[4][0]=0;
													cont++;
													break;
												case 8: 
													P[4][1]=0;
													cont++;									
													break;
												case 9: 
													P[4][2]=0;
													cont++;
													break;
												case 10:
													P[4][3]=0;
													cont++;
													break;
												case 11: 
													P[4][4]=0;
													cont++;
													break;
												case 12: 
													P[4][5]=0;
													cont++;
													break;
												case 13: 
													P[4][6]=0;
													cont++;
													break;
												case 14: 
													P[4][7]=0;
													cont++;
													break;
												case 15: 
													P[4][8]=0;
													cont++;
													break;
												case 16: 
													P[4][9]=0;
													cont++;
													break;
												case 17: 
													P[4][10]=0;
													cont++;
													break;
												case 18: 
													P[4][11]=0;
													cont++;
													break;
												case 19: 
													P[4][12]=0;
													cont++;
													break;
												case 20: 
													P[4][13]=0;
													cont++;
													break;
												case 21: 
													P[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														P[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														P[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														P[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														P[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														P[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														P[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														P[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														P[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														P[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														P[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														P[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														P[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														P[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														P[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														P[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: VIERNES",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														P[5][0]=0;
														cont++;
														break;
													case 8: 
														P[5][1]=0;
														cont++;									
														break;
													case 9: 
														P[5][2]=0;
														cont++;
														break;
													case 10:
														P[5][3]=0;
														cont++;
														break;
													case 11: 
														P[5][4]=0;
														cont++;
														break;
													case 12: 
														P[5][5]=0;
														cont++;
														break;
													case 13: 
														P[5][6]=0;
														cont++;
														break;
													case 14: 
														P[5][7]=0;
														cont++;
														break;
													case 15: 
														P[5][8]=0;
														cont++;
														break;
													case 16: 
														P[5][9]=0;
														cont++;
														break;
													case 17: 
														P[5][10]=0;
														cont++;
														break;
													case 18: 
														P[5][11]=0;
														cont++;
														break;
													case 19: 
														P[5][12]=0;
														cont++;
														break;
													case 20: 
														P[5][13]=0;
														cont++;
														break;
													case 21: 
														P[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															P[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															P[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															P[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															P[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															P[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															P[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															P[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															P[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															P[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															P[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															P[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															P[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															P[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															P[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															P[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: VIERNES",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											if(caj==6){
												printf("\n\n¿Cuantas horas va a reservar?:\n");
												scanf("%i",&horas);
												if(horas<=15){
													printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
													cont=1;
													printf("Digite la hora: \n");
													scanf("%i",&ho1);
													switch(ho1){
														case 7:
															P[6][0]=0;
															cont++;
															break;
														case 8: 
															P[6][1]=0;
															cont++;									
															break;
														case 9: 
															P[6][2]=0;
															cont++;
															break;
														case 10:
															P[6][3]=0;
															cont++;
															break;
														case 11: 
															P[6][4]=0;
															cont++;
															break;
														case 12: 
															P[6][5]=0;
															cont++;
															break;
														case 13: 
															P[6][6]=0;
															cont++;
															break;
														case 14: 
															P[6][7]=0;
															cont++;
															break;
														case 15: 
															P[6][8]=0;
															cont++;
															break;
														case 16: 
															P[6][9]=0;
															cont++;
															break;
														case 17: 
															P[6][10]=0;
															cont++;
															break;
														case 18: 
															P[6][11]=0;
															cont++;
															break;
														case 19: 
															P[6][12]=0;
															cont++;
															break;
														case 20: 
															P[6][13]=0;
															cont++;
															break;
														case 21: 
															P[6][14]=0;
															cont++;
															break;
														default:
															ho1=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
													ho2=(ho1+horas);
													while(cont<=horas){
														printf("\nDigite la hora: \n");
														scanf("%i",&i);
														switch(i){
															case 7:
																P[6][0]=0;
																i=0;
																cont++;
																break;
															case 8: 
																P[6][1]=0;
																i=0;
																cont++;
																break;
															case 9: 
																P[6][2]=0;
																i=0;
																cont++;
																break;
															case 10:
																P[6][3]=0;
																i=0;
																cont++;
																break;
															case 11: 
																P[6][4]=0;
																i=0;
																cont++;
																break;
															case 12: 
																P[6][5]=0;
																i=0;
																cont++;
																break;
															case 13: 
																P[6][6]=0;
																i=0;
																cont++;
																break;
															case 14: 
																P[6][7]=0;
																i=0;
																cont++;
																break;
															case 15: 
																P[6][8]=0;
																i=0;
																cont++;
																break;
															case 16: 
																P[6][9]=0;
																i=0;
																cont++;
																break;
															case 17: 
																P[6][10]=0;
																i=0;
																cont++;
																break;
															case 18: 
																P[6][11]=0;
																i=0;
																cont++;
																break;
															case 19: 
																P[6][12]=0;
																i=0;
																cont++;
																break;
															case 20: 
																P[6][13]=0;
																i=0;
																cont++;
																break;
															case 21: 
																P[6][14]=0;
																i=0;
																cont++;
																break;
															default:
																i=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
													}
													system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
													printf("\n Generando comprobante de reservacion.\n");
													printf("\n\nIngrese su nombre completo: ");
													FILE *p;
													p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
													fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
													fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
													fputs(" Reservación a nombre de: ",p);
													scanf(" %[^\n]",&L);
													strupr(L);
													fputs(L,p);
													fputs("\n\n No. cuenta: ",p);
													printf("\nIngrese su numero de cuenta: ");
													scanf(" %[^\n]",&NoCu);
													fputs(NoCu,p);
													fputs("\n\n Día seleccionado: VIERNES",p);
													fputs("\n\n Cajón reservado: 6",p);
													fputs("\n\n Horas reservadas: ",p);
													fprintf(p,"%i", horas);
													fputs("\n\n Hora de entrada: ",p);
													fprintf(p,"%i", ho1);
													fputs("   HRS. ",p);
													fputs("\n\n Hora de salida: ",p);
													fprintf(p,"%i", ho2);
													fputs("   HRS. ",p);
													fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
													fclose(p);
													printf("\n Comprobante generado exitosamente.\n");
												}
												else{
													horas=0;
													printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
												}
											}
											else{
												if(caj==7){
													printf("\n\n¿Cuantas horas va a reservar?:\n");
													scanf("%i",&horas);
													if(horas<=15){
														printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
														cont=1;
														printf("Digite la hora: \n");
														scanf("%i",&ho1);
														switch(ho1){
															case 7:
																P[7][0]=0;
																cont++;
																break;
															case 8: 
																P[7][1]=0;
																cont++;									
																break;
															case 9: 
																P[7][2]=0;
																cont++;
																break;
															case 10:
																P[7][3]=0;
																cont++;
																break;
															case 11: 
																P[7][4]=0;
																cont++;
																break;
															case 12: 
																P[7][5]=0;
																cont++;
																break;
															case 13: 
																P[7][6]=0;
																cont++;
																break;
															case 14: 
																P[7][7]=0;
																cont++;
																break;
															case 15: 
																P[7][8]=0;
																cont++;
																break;
															case 16: 
																P[7][9]=0;
																cont++;
																break;
															case 17: 
																P[7][10]=0;
																cont++;
																break;
															case 18: 
																P[7][11]=0;
																cont++;
																break;
															case 19: 
																P[7][12]=0;
																cont++;
																break;
															case 20: 
																P[7][13]=0;
																cont++;
																break;
															case 21: 
																P[7][14]=0;
																cont++;
																break;
															default:
																ho1=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
														ho2=(ho1+horas);
														while(cont<=horas){
															printf("\nDigite la hora: \n");
															scanf("%i",&i);
															switch(i){
																case 7:
																	P[7][0]=0;
																	i=0;
																	cont++;
																	break;
																case 8: 
																	P[7][1]=0;
																	i=0;
																	cont++;
																	break;
																case 9: 
																	P[7][2]=0;
																	i=0;
																	cont++;
																	break;
																case 10:
																	P[7][3]=0;
																	i=0;
																	cont++;
																	break;
																case 11: 
																	P[7][4]=0;
																	i=0;
																	cont++;
																	break;
																case 12: 
																	P[7][5]=0;
																	i=0;
																	cont++;
																	break;
																case 13: 
																	P[7][6]=0;
																	i=0;
																	cont++;
																	break;
																case 14: 
																	P[7][7]=0;
																	i=0;
																	cont++;
																	break;
																case 15: 
																	P[7][8]=0;
																	i=0;
																	cont++;
																	break;
																case 16: 
																	P[7][9]=0;
																	i=0;
																	cont++;
																	break;
																case 17: 
																	P[7][10]=0;
																	i=0;
																	cont++;
																	break;
																case 18: 
																	P[7][11]=0;
																	i=0;
																	cont++;
																	break;
																case 19: 
																	P[7][12]=0;
																	i=0;
																	cont++;
																	break;
																case 20: 
																	P[7][13]=0;
																	i=0;
																	cont++;
																	break;
																case 21: 
																	P[7][14]=0;
																	i=0;
																	cont++;
																	break;
																default:
																	i=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
														}
														system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
														printf("\n Generando comprobante de reservacion.\n");
														printf("\n\nIngrese su nombre completo: ");
														FILE *p;
														p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
														fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
														fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
														fputs(" Reservación a nombre de: ",p);
														scanf(" %[^\n]",&L);
														strupr(L);
														fputs(L,p);
														fputs("\n\n No. cuenta: ",p);
														printf("\nIngrese su numero de cuenta: ");
														scanf(" %[^\n]",&NoCu);
														fputs(NoCu,p);
														fputs("\n\n Día seleccionado: VIERNES",p);
														fputs("\n\n Cajón reservado: 7",p);
														fputs("\n\n Horas reservadas: ",p);
														fprintf(p,"%i", horas);
														fputs("\n\n Hora de entrada: ",p);
														fprintf(p,"%i", ho1);
														fputs("   HRS. ",p);
														fputs("\n\n Hora de salida: ",p);
														fprintf(p,"%i", ho2);
														fputs("   HRS. ",p);
														fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
														fclose(p);
														printf("\n Comprobante generado exitosamente.\n");
													}
													else{
														horas=0;
														printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
													}
												}
												else{
													if(caj==8){
														printf("\n\n¿Cuantas horas va a reservar?:\n");
														scanf("%i",&horas);
														if(horas<=15){
															printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
															cont=1;
															printf("Digite la hora: \n");
															scanf("%i",&ho1);
															switch(ho1){
																case 7:
																	P[8][0]=0;
																	cont++;
																	break;
																case 8: 
																	P[8][1]=0;
																	cont++;									
																	break;
																case 9: 
																	P[8][2]=0;
																	cont++;
																	break;
																case 10:
																	P[8][3]=0;
																	cont++;
																	break;
																case 11: 
																	P[8][4]=0;
																	cont++;
																	break;
																case 12: 
																	P[8][5]=0;
																	cont++;
																	break;
																case 13: 
																	P[8][6]=0;
																	cont++;
																	break;
																case 14: 
																	P[8][7]=0;
																	cont++;
																	break;
																case 15: 
																	P[8][8]=0;
																	cont++;
																	break;
																case 16: 
																	P[8][9]=0;
																	cont++;
																	break;
																case 17: 
																	P[8][10]=0;
																	cont++;
																	break;
																case 18: 
																	P[8][11]=0;
																	cont++;
																	break;
																case 19: 
																	P[8][12]=0;
																	cont++;
																	break;
																case 20: 
																	P[8][13]=0;
																	cont++;
																	break;
																case 21: 
																	P[8][14]=0;
																	cont++;
																	break;
																default:
																	ho1=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
															ho2=(ho1+horas);
															while(cont<=horas){
																printf("\nDigite la hora: \n");
																scanf("%i",&i);
																switch(i){
																	case 7:
																		P[8][0]=0;
																		i=0;
																		cont++;
																		break;
																	case 8: 
																		P[8][1]=0;
																		i=0;
																		cont++;
																		break;
																	case 9: 
																		P[8][2]=0;
																		i=0;
																		cont++;
																		break;
																	case 10:
																		P[8][3]=0;
																		i=0;
																		cont++;
																		break;
																	case 11: 
																		P[8][4]=0;
																		i=0;
																		cont++;
																		break;
																	case 12: 
																		P[8][5]=0;
																		i=0;
																		cont++;
																		break;
																	case 13: 
																		P[8][6]=0;
																		i=0;
																		cont++;
																		break;
																	case 14: 
																		P[8][7]=0;
																		i=0;
																		cont++;
																		break;
																	case 15: 
																		P[8][8]=0;
																		i=0;
																		cont++;
																		break;
																	case 16: 
																		P[8][9]=0;
																		i=0;
																		cont++;
																		break;
																	case 17: 
																		P[8][10]=0;
																		i=0;
																		cont++;
																		break;
																	case 18: 
																		P[8][11]=0;
																		i=0;
																		cont++;
																		break;
																	case 19: 
																		P[8][12]=0;
																		i=0;
																		cont++;
																		break;
																	case 20: 
																		P[8][13]=0;
																		i=0;
																		cont++;
																		break;
																	case 21: 
																		P[8][14]=0;
																		i=0;
																		cont++;
																		break;
																	default:
																		i=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
															}
															system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
															printf("\n Generando comprobante de reservacion.\n");
															printf("\n\nIngrese su nombre completo: ");
															FILE *p;
															p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
															fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
															fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
															fputs(" Reservación a nombre de: ",p);
															scanf(" %[^\n]",&L);
															strupr(L);
															fputs(L,p);
															fputs("\n\n No. cuenta: ",p);
															printf("\nIngrese su numero de cuenta: ");
															scanf(" %[^\n]",&NoCu);
															fputs(NoCu,p);
															fputs("\n\n Día seleccionado: VIERNES",p);
															fputs("\n\n Cajón reservado: 8",p);
															fputs("\n\n Horas reservadas: ",p);
															fprintf(p,"%i", horas);
															fputs("\n\n Hora de entrada: ",p);
															fprintf(p,"%i", ho1);
															fputs("   HRS. ",p);
															fputs("\n\n Hora de salida: ",p);
															fprintf(p,"%i", ho2);
															fputs("   HRS. ",p);
															fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
															fclose(p);
															printf("\n Comprobante generado exitosamente.\n");
														}
														else{
															horas=0;
															printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
														}
													}
													else{
														if(caj==9){
															printf("\n\n¿Cuantas horas va a reservar?:\n");
															scanf("%i",&horas);
															if(horas<=15){
																printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																cont=1;
																printf("Digite la hora: \n");
																scanf("%i",&ho1);
																switch(ho1){
																	case 7:
																		P[9][0]=0;
																		cont++;
																		break;
																	case 8: 
																		P[9][1]=0;
																		cont++;									
																		break;
																	case 9: 
																		P[9][2]=0;
																		cont++;
																		break;
																	case 10:
																		P[9][3]=0;
																		cont++;
																		break;
																	case 11: 
																		P[9][4]=0;
																		cont++;
																		break;
																	case 12: 
																		P[9][5]=0;
																		cont++;
																		break;
																	case 13: 
																		P[9][6]=0;
																		cont++;
																		break;
																	case 14: 
																		P[9][7]=0;
																		cont++;
																		break;
																	case 15: 
																		P[9][8]=0;
																		cont++;
																		break;
																	case 16: 
																		P[9][9]=0;
																		cont++;
																		break;
																	case 17: 
																		P[9][10]=0;
																		cont++;
																		break;
																	case 18: 
																		P[9][11]=0;
																		cont++;
																		break;
																	case 19: 
																		P[9][12]=0;
																		cont++;
																		break;
																	case 20: 
																		P[9][13]=0;
																		cont++;
																		break;
																	case 21: 
																		P[9][14]=0;
																		cont++;
																		break;
																	default:
																		ho1=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
																ho2=(ho1+horas);
																while(cont<=horas){
																	printf("\nDigite la hora: \n");
																	scanf("%i",&i);
																	switch(i){
																		case 7:
																			P[9][0]=0;
																			i=0;
																			cont++;
																			break;
																		case 8: 
																			P[9][1]=0;
																			i=0;
																			cont++;
																			break;
																		case 9: 
																			P[9][2]=0;
																			i=0;
																			cont++;
																			break;
																		case 10:
																			P[9][3]=0;
																			i=0;
																			cont++;
																			break;
																		case 11: 
																			P[9][4]=0;
																			i=0;
																			cont++;
																			break;
																		case 12: 
																			P[9][5]=0;
																			i=0;
																			cont++;
																			break;
																		case 13: 
																			P[9][6]=0;
																			i=0;
																			cont++;
																			break;
																		case 14: 
																			P[9][7]=0;
																			i=0;
																			cont++;
																			break;
																		case 15: 
																			P[9][8]=0;
																			i=0;
																			cont++;
																			break;
																		case 16: 
																			P[9][9]=0;
																			i=0;
																			cont++;
																			break;
																		case 17: 
																			P[9][10]=0;
																			i=0;
																			cont++;
																			break;
																		case 18: 
																			P[9][11]=0;
																			i=0;
																			cont++;
																			break;
																		case 19: 
																			P[9][12]=0;
																			i=0;
																			cont++;
																			break;
																		case 20: 
																			P[9][13]=0;
																			i=0;
																			cont++;
																			break;
																		case 21: 
																			P[9][14]=0;
																			i=0;
																			cont++;
																			break;
																		default:
																			i=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																}
																system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																printf("\n Generando comprobante de reservacion.\n");
																printf("\n\nIngrese su nombre completo: ");
																FILE *p;
																p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																fputs(" Reservación a nombre de: ",p);
																scanf(" %[^\n]",&L);
																strupr(L);
																fputs(L,p);
																fputs("\n\n No. cuenta: ",p);
																printf("\nIngrese su numero de cuenta: ");
																scanf(" %[^\n]",&NoCu);
																fputs(NoCu,p);
																fputs("\n\n Día seleccionado: VIERNES",p);
																fputs("\n\n Cajón reservado: 9",p);
																fputs("\n\n Horas reservadas: ",p);
																fprintf(p,"%i", horas);
																fputs("\n\n Hora de entrada: ",p);
																fprintf(p,"%i", ho1);
																fputs("   HRS. ",p);
																fputs("\n\n Hora de salida: ",p);
																fprintf(p,"%i", ho2);
																fputs("   HRS. ",p);
																fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																fclose(p);
																printf("\n Comprobante generado exitosamente.\n");
															}
															else{
																horas=0;
																printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
															}
														}
														else{
															if(caj==10){
																printf("\n\n¿Cuantas horas va a reservar?:\n");
																scanf("%i",&horas);
																if(horas<=15){
																	printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																	cont=1;
																	printf("Digite la hora: \n");
																	scanf("%i",&ho1);
																	switch(ho1){
																		case 7:
																			P[10][0]=0;
																			cont++;
																			break;
																		case 8: 
																			P[10][1]=0;
																			cont++;									
																			break;
																		case 9: 
																			P[10][2]=0;
																			cont++;
																			break;
																		case 10:
																			P[10][3]=0;
																			cont++;
																			break;
																		case 11: 
																			P[10][4]=0;
																			cont++;
																			break;
																		case 12: 
																			P[10][5]=0;
																			cont++;
																			break;
																		case 13: 
																			P[10][6]=0;
																			cont++;
																			break;
																		case 14: 
																			P[10][7]=0;
																			cont++;
																			break;
																		case 15: 
																			P[10][8]=0;
																			cont++;
																			break;
																		case 16: 
																			P[10][9]=0;
																			cont++;
																			break;
																		case 17: 
																			P[10][10]=0;
																			cont++;
																			break;
																		case 18: 
																			P[10][11]=0;
																			cont++;
																			break;
																		case 19: 
																			P[10][12]=0;
																			cont++;
																			break;
																		case 20: 
																			P[10][13]=0;
																			cont++;
																			break;
																		case 21: 
																			P[10][14]=0;
																			cont++;
																			break;
																		default:
																			ho1=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																	ho2=(ho1+horas);
																	while(cont<=horas){
																		printf("\nDigite la hora: \n");
																		scanf("%i",&i);
																		switch(i){
																			case 7:
																				P[10][0]=0;
																				i=0;
																				cont++;
																				break;
																			case 8: 
																				P[10][1]=0;
																				i=0;
																				cont++;
																				break;
																			case 9: 
																				P[10][2]=0;
																				i=0;
																				cont++;
																				break;
																			case 10:
																				P[10][3]=0;
																				i=0;
																				cont++;
																				break;
																			case 11: 
																				P[10][4]=0;
																				i=0;
																				cont++;
																				break;
																			case 12: 
																				P[10][5]=0;
																				i=0;
																				cont++;
																				break;
																			case 13: 
																				P[10][6]=0;
																				i=0;
																				cont++;
																				break;
																			case 14: 
																				P[10][7]=0;
																				i=0;
																				cont++;
																				break;
																			case 15: 
																				P[10][8]=0;
																				i=0;
																				cont++;
																				break;
																			case 16: 
																				P[10][9]=0;
																				i=0;
																				cont++;
																				break;
																			case 17: 
																				P[10][10]=0;
																				i=0;
																				cont++;
																				break;
																			case 18: 
																				P[10][11]=0;
																				i=0;
																				cont++;
																				break;
																			case 19: 
																				P[10][12]=0;
																				i=0;
																				cont++;
																				break;
																			case 20: 
																				P[10][13]=0;
																				i=0;
																				cont++;
																				break;
																			case 21: 
																				P[10][14]=0;
																				i=0;
																				cont++;
																				break;
																			default:
																				i=0;
																				printf("\n Hora invalida, digite de nuevo: 7-21\n");
																		}
																	}
																	system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																	printf("\n Generando comprobante de reservacion.\n");
																	printf("\n\nIngrese su nombre completo: ");
																	FILE *p;
																	p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																	fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																	fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																	fputs(" Reservación a nombre de: ",p);
																	scanf(" %[^\n]",&L);
																	strupr(L);
																	fputs(L,p);
																	fputs("\n\n No. cuenta: ",p);
																	printf("\nIngrese su numero de cuenta: ");
																	scanf(" %[^\n]",&NoCu);
																	fputs(NoCu,p);
																	fputs("\n\n Día seleccionado: VIERNES",p);
																	fputs("\n\n Cajón reservado: 10",p);
																	fputs("\n\n Horas reservadas: ",p);
																	fprintf(p,"%i", horas);
																	fputs("\n\n Hora de entrada: ",p);
																	fprintf(p,"%i", ho1);
																	fputs("   HRS. ",p);
																	fputs("\n\n Hora de salida: ",p);
																	fprintf(p,"%i", ho2);
																	fputs("   HRS. ",p);
																	fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																	fclose(p);
																	printf("\n Comprobante generado exitosamente.\n");
																}
																else{
																	horas=0;
																	printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
																}
															}
															else{
																printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-10\n");
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
     				break;
				case 6:
					printf("----------Cajones disponibles: 11 (0-10)----------\n ----------HORARIO----------\n {'   ',P[0], P[1], P[2], P[3],  P[4],  P[5],  P[6],  P[7],  P[8],  P[9], P[10],  P[11], P[12], P[13], P[14]},\n {P[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[6], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[7], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[8], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[9], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {P[10],'7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n ");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-10:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									P[0][0]=0;
									cont++;
									break;
								case 8: 
									P[0][1]=0;
									cont++;									
									break;
								case 9: 
									P[0][2]=0;
									cont++;
									break;
								case 10:
									P[0][3]=0;
									cont++;
									break;
								case 11: 
									P[0][4]=0;
									cont++;
									break;
								case 12: 
									P[0][5]=0;
									cont++;
									break;
								case 13: 
									P[0][6]=0;
									cont++;
									break;
								case 14: 
									P[0][7]=0;
									cont++;
									break;
								case 15: 
									P[0][8]=0;
									cont++;
									break;
								case 16: 
									P[0][9]=0;
									cont++;
									break;
								case 17: 
									P[0][10]=0;
									cont++;
									break;
								case 18: 
									P[0][11]=0;
									cont++;
									break;
								case 19: 
									P[0][12]=0;
									cont++;
									break;
								case 20: 
									P[0][13]=0;
									cont++;
									break;
								case 21: 
									P[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										P[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										P[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										P[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										P[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										P[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										P[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										P[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										P[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										P[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										P[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										P[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										P[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										P[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										P[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										P[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: SÁBADO",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										P[1][0]=0;
										cont++;
										break;
									case 8: 
										P[1][1]=0;
										cont++;									
										break;
									case 9: 
										P[1][2]=0;
										cont++;
										break;
									case 10:
										P[1][3]=0;
										cont++;
										break;
									case 11: 
										P[1][4]=0;
										cont++;
										break;
									case 12: 
										P[1][5]=0;
										cont++;
										break;
									case 13: 
										P[1][6]=0;
										cont++;
										break;
									case 14: 
										P[1][7]=0;
										cont++;
										break;
									case 15: 
										P[1][8]=0;
										cont++;
										break;
									case 16: 
										P[1][9]=0;
										cont++;
										break;
									case 17: 
										P[1][10]=0;
										cont++;
										break;
									case 18: 
										P[1][11]=0;
										cont++;
										break;
									case 19: 
										P[1][12]=0;
										cont++;
										break;
									case 20: 
										P[1][13]=0;
										cont++;
										break;
									case 21: 
										P[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											P[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											P[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											P[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											P[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											P[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											P[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											P[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											P[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											P[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											P[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											P[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											P[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											P[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											P[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											P[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: SÁBADO",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											P[2][0]=0;
											cont++;
											break;
										case 8: 
											P[2][1]=0;
											cont++;									
											break;
										case 9: 
											P[2][2]=0;
											cont++;
											break;
										case 10:
											P[2][3]=0;
											cont++;
											break;
										case 11: 
											P[2][4]=0;
											cont++;
											break;
										case 12: 
											P[2][5]=0;
											cont++;
											break;
										case 13: 
											P[2][6]=0;
											cont++;
											break;
										case 14: 
											P[2][7]=0;
											cont++;
											break;
										case 15: 
											P[2][8]=0;
											cont++;
											break;
										case 16: 
											P[2][9]=0;
											cont++;
											break;
										case 17: 
											P[2][10]=0;
											cont++;
											break;
										case 18: 
											P[2][11]=0;
											cont++;
											break;
										case 19: 
											P[2][12]=0;
											cont++;
											break;
										case 20: 
											P[2][13]=0;
											cont++;
											break;
										case 21: 
											P[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												P[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												P[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												P[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												P[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												P[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												P[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												P[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												P[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												P[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												P[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												P[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												P[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												P[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												P[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												P[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: SÁBADO",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												P[3][0]=0;
												cont++;
												break;
											case 8: 
												P[3][1]=0;
												cont++;									
												break;
											case 9: 
												P[3][2]=0;
												cont++;
												break;
											case 10:
												P[3][3]=0;
												cont++;
												break;
											case 11: 
												P[3][4]=0;
												cont++;
												break;
											case 12: 
												P[3][5]=0;
												cont++;
												break;
											case 13: 
												P[3][6]=0;
												cont++;
												break;
											case 14: 
												P[3][7]=0;
												cont++;
												break;
											case 15: 
												P[3][8]=0;
												cont++;
												break;
											case 16: 
												P[3][9]=0;
												cont++;
												break;
											case 17: 
												P[3][10]=0;
												cont++;
												break;
											case 18: 
												P[3][11]=0;
												cont++;
												break;
											case 19: 
												P[3][12]=0;
												cont++;
												break;
											case 20: 
												P[3][13]=0;
												cont++;
												break;
											case 21: 
												P[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													P[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													P[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													P[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													P[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													P[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													P[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													P[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													P[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													P[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													P[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													P[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													P[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													P[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													P[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													P[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: SÁBADO",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													P[4][0]=0;
													cont++;
													break;
												case 8: 
													P[4][1]=0;
													cont++;									
													break;
												case 9: 
													P[4][2]=0;
													cont++;
													break;
												case 10:
													P[4][3]=0;
													cont++;
													break;
												case 11: 
													P[4][4]=0;
													cont++;
													break;
												case 12: 
													P[4][5]=0;
													cont++;
													break;
												case 13: 
													P[4][6]=0;
													cont++;
													break;
												case 14: 
													P[4][7]=0;
													cont++;
													break;
												case 15: 
													P[4][8]=0;
													cont++;
													break;
												case 16: 
													P[4][9]=0;
													cont++;
													break;
												case 17: 
													P[4][10]=0;
													cont++;
													break;
												case 18: 
													P[4][11]=0;
													cont++;
													break;
												case 19: 
													P[4][12]=0;
													cont++;
													break;
												case 20: 
													P[4][13]=0;
													cont++;
													break;
												case 21: 
													P[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														P[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														P[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														P[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														P[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														P[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														P[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														P[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														P[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														P[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														P[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														P[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														P[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														P[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														P[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														P[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: SÁBADO",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														P[5][0]=0;
														cont++;
														break;
													case 8: 
														P[5][1]=0;
														cont++;									
														break;
													case 9: 
														P[5][2]=0;
														cont++;
														break;
													case 10:
														P[5][3]=0;
														cont++;
														break;
													case 11: 
														P[5][4]=0;
														cont++;
														break;
													case 12: 
														P[5][5]=0;
														cont++;
														break;
													case 13: 
														P[5][6]=0;
														cont++;
														break;
													case 14: 
														P[5][7]=0;
														cont++;
														break;
													case 15: 
														P[5][8]=0;
														cont++;
														break;
													case 16: 
														P[5][9]=0;
														cont++;
														break;
													case 17: 
														P[5][10]=0;
														cont++;
														break;
													case 18: 
														P[5][11]=0;
														cont++;
														break;
													case 19: 
														P[5][12]=0;
														cont++;
														break;
													case 20: 
														P[5][13]=0;
														cont++;
														break;
													case 21: 
														P[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															P[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															P[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															P[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															P[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															P[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															P[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															P[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															P[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															P[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															P[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															P[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															P[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															P[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															P[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															P[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: SÁBADO",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											if(caj==6){
												printf("\n\n¿Cuantas horas va a reservar?:\n");
												scanf("%i",&horas);
												if(horas<=15){
													printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
													cont=1;
													printf("Digite la hora: \n");
													scanf("%i",&ho1);
													switch(ho1){
														case 7:
															P[6][0]=0;
															cont++;
															break;
														case 8: 
															P[6][1]=0;
															cont++;									
															break;
														case 9: 
															P[6][2]=0;
															cont++;
															break;
														case 10:
															P[6][3]=0;
															cont++;
															break;
														case 11: 
															P[6][4]=0;
															cont++;
															break;
														case 12: 
															P[6][5]=0;
															cont++;
															break;
														case 13: 
															P[6][6]=0;
															cont++;
															break;
														case 14: 
															P[6][7]=0;
															cont++;
															break;
														case 15: 
															P[6][8]=0;
															cont++;
															break;
														case 16: 
															P[6][9]=0;
															cont++;
															break;
														case 17: 
															P[6][10]=0;
															cont++;
															break;
														case 18: 
															P[6][11]=0;
															cont++;
															break;
														case 19: 
															P[6][12]=0;
															cont++;
															break;
														case 20: 
															P[6][13]=0;
															cont++;
															break;
														case 21: 
															P[6][14]=0;
															cont++;
															break;
														default:
															ho1=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
													ho2=(ho1+horas);
													while(cont<=horas){
														printf("\nDigite la hora: \n");
														scanf("%i",&i);
														switch(i){
															case 7:
																P[6][0]=0;
																i=0;
																cont++;
																break;
															case 8: 
																P[6][1]=0;
																i=0;
																cont++;
																break;
															case 9: 
																P[6][2]=0;
																i=0;
																cont++;
																break;
															case 10:
																P[6][3]=0;
																i=0;
																cont++;
																break;
															case 11: 
																P[6][4]=0;
																i=0;
																cont++;
																break;
															case 12: 
																P[6][5]=0;
																i=0;
																cont++;
																break;
															case 13: 
																P[6][6]=0;
																i=0;
																cont++;
																break;
															case 14: 
																P[6][7]=0;
																i=0;
																cont++;
																break;
															case 15: 
																P[6][8]=0;
																i=0;
																cont++;
																break;
															case 16: 
																P[6][9]=0;
																i=0;
																cont++;
																break;
															case 17: 
																P[6][10]=0;
																i=0;
																cont++;
																break;
															case 18: 
																P[6][11]=0;
																i=0;
																cont++;
																break;
															case 19: 
																P[6][12]=0;
																i=0;
																cont++;
																break;
															case 20: 
																P[6][13]=0;
																i=0;
																cont++;
																break;
															case 21: 
																P[6][14]=0;
																i=0;
																cont++;
																break;
															default:
																i=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
													}
													system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
													printf("\n Generando comprobante de reservacion.\n");
													printf("\n\nIngrese su nombre completo: ");
													FILE *p;
													p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
													fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
													fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
													fputs(" Reservación a nombre de: ",p);
													scanf(" %[^\n]",&L);
													strupr(L);
													fputs(L,p);
													fputs("\n\n No. cuenta: ",p);
													printf("\nIngrese su numero de cuenta: ");
													scanf(" %[^\n]",&NoCu);
													fputs(NoCu,p);
													fputs("\n\n Día seleccionado: SÁBADO",p);
													fputs("\n\n Cajón reservado: 6",p);
													fputs("\n\n Horas reservadas: ",p);
													fprintf(p,"%i", horas);
													fputs("\n\n Hora de entrada: ",p);
													fprintf(p,"%i", ho1);
													fputs("   HRS. ",p);
													fputs("\n\n Hora de salida: ",p);
													fprintf(p,"%i", ho2);
													fputs("   HRS. ",p);
													fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
													fclose(p);
													printf("\n Comprobante generado exitosamente.\n");
												}
												else{
													horas=0;
													printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
												}
											}
											else{
												if(caj==7){
													printf("\n\n¿Cuantas horas va a reservar?:\n");
													scanf("%i",&horas);
													if(horas<=15){
														printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
														cont=1;
														printf("Digite la hora: \n");
														scanf("%i",&ho1);
														switch(ho1){
															case 7:
																P[7][0]=0;
																cont++;
																break;
															case 8: 
																P[7][1]=0;
																cont++;									
																break;
															case 9: 
																P[7][2]=0;
																cont++;
																break;
															case 10:
																P[7][3]=0;
																cont++;
																break;
															case 11: 
																P[7][4]=0;
																cont++;
																break;
															case 12: 
																P[7][5]=0;
																cont++;
																break;
															case 13: 
																P[7][6]=0;
																cont++;
																break;
															case 14: 
																P[7][7]=0;
																cont++;
																break;
															case 15: 
																P[7][8]=0;
																cont++;
																break;
															case 16: 
																P[7][9]=0;
																cont++;
																break;
															case 17: 
																P[7][10]=0;
																cont++;
																break;
															case 18: 
																P[7][11]=0;
																cont++;
																break;
															case 19: 
																P[7][12]=0;
																cont++;
																break;
															case 20: 
																P[7][13]=0;
																cont++;
																break;
															case 21: 
																P[7][14]=0;
																cont++;
																break;
															default:
																ho1=0;
																printf("\n Hora invalida, digite de nuevo: 7-21\n");
														}
														ho2=(ho1+horas);
														while(cont<=horas){
															printf("\nDigite la hora: \n");
															scanf("%i",&i);
															switch(i){
																case 7:
																	P[7][0]=0;
																	i=0;
																	cont++;
																	break;
																case 8: 
																	P[7][1]=0;
																	i=0;
																	cont++;
																	break;
																case 9: 
																	P[7][2]=0;
																	i=0;
																	cont++;
																	break;
																case 10:
																	P[7][3]=0;
																	i=0;
																	cont++;
																	break;
																case 11: 
																	P[7][4]=0;
																	i=0;
																	cont++;
																	break;
																case 12: 
																	P[7][5]=0;
																	i=0;
																	cont++;
																	break;
																case 13: 
																	P[7][6]=0;
																	i=0;
																	cont++;
																	break;
																case 14: 
																	P[7][7]=0;
																	i=0;
																	cont++;
																	break;
																case 15: 
																	P[7][8]=0;
																	i=0;
																	cont++;
																	break;
																case 16: 
																	P[7][9]=0;
																	i=0;
																	cont++;
																	break;
																case 17: 
																	P[7][10]=0;
																	i=0;
																	cont++;
																	break;
																case 18: 
																	P[7][11]=0;
																	i=0;
																	cont++;
																	break;
																case 19: 
																	P[7][12]=0;
																	i=0;
																	cont++;
																	break;
																case 20: 
																	P[7][13]=0;
																	i=0;
																	cont++;
																	break;
																case 21: 
																	P[7][14]=0;
																	i=0;
																	cont++;
																	break;
																default:
																	i=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
														}
														system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
														printf("\n Generando comprobante de reservacion.\n");
														printf("\n\nIngrese su nombre completo: ");
														FILE *p;
														p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
														fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
														fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
														fputs(" Reservación a nombre de: ",p);
														scanf(" %[^\n]",&L);
														strupr(L);
														fputs(L,p);
														fputs("\n\n No. cuenta: ",p);
														printf("\nIngrese su numero de cuenta: ");
														scanf(" %[^\n]",&NoCu);
														fputs(NoCu,p);
														fputs("\n\n Día seleccionado: SÁBADO",p);
														fputs("\n\n Cajón reservado: 7",p);
														fputs("\n\n Horas reservadas: ",p);
														fprintf(p,"%i", horas);
														fputs("\n\n Hora de entrada: ",p);
														fprintf(p,"%i", ho1);
														fputs("   HRS. ",p);
														fputs("\n\n Hora de salida: ",p);
														fprintf(p,"%i", ho2);
														fputs("   HRS. ",p);
														fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
														fclose(p);
														printf("\n Comprobante generado exitosamente.\n");
													}
													else{
														horas=0;
														printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
													}
												}
												else{
													if(caj==8){
														printf("\n\n¿Cuantas horas va a reservar?:\n");
														scanf("%i",&horas);
														if(horas<=15){
															printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
															cont=1;
															printf("Digite la hora: \n");
															scanf("%i",&ho1);
															switch(ho1){
																case 7:
																	P[8][0]=0;
																	cont++;
																	break;
																case 8: 
																	P[8][1]=0;
																	cont++;									
																	break;
																case 9: 
																	P[8][2]=0;
																	cont++;
																	break;
																case 10:
																	P[8][3]=0;
																	cont++;
																	break;
																case 11: 
																	P[8][4]=0;
																	cont++;
																	break;
																case 12: 
																	P[8][5]=0;
																	cont++;
																	break;
																case 13: 
																	P[8][6]=0;
																	cont++;
																	break;
																case 14: 
																	P[8][7]=0;
																	cont++;
																	break;
																case 15: 
																	P[8][8]=0;
																	cont++;
																	break;
																case 16: 
																	P[8][9]=0;
																	cont++;
																	break;
																case 17: 
																	P[8][10]=0;
																	cont++;
																	break;
																case 18: 
																	P[8][11]=0;
																	cont++;
																	break;
																case 19: 
																	P[8][12]=0;
																	cont++;
																	break;
																case 20: 
																	P[8][13]=0;
																	cont++;
																	break;
																case 21: 
																	P[8][14]=0;
																	cont++;
																	break;
																default:
																	ho1=0;
																	printf("\n Hora invalida, digite de nuevo: 7-21\n");
															}
															ho2=(ho1+horas);
															while(cont<=horas){
																printf("\nDigite la hora: \n");
																scanf("%i",&i);
																switch(i){
																	case 7:
																		P[8][0]=0;
																		i=0;
																		cont++;
																		break;
																	case 8: 
																		P[8][1]=0;
																		i=0;
																		cont++;
																		break;
																	case 9: 
																		P[8][2]=0;
																		i=0;
																		cont++;
																		break;
																	case 10:
																		P[8][3]=0;
																		i=0;
																		cont++;
																		break;
																	case 11: 
																		P[8][4]=0;
																		i=0;
																		cont++;
																		break;
																	case 12: 
																		P[8][5]=0;
																		i=0;
																		cont++;
																		break;
																	case 13: 
																		P[8][6]=0;
																		i=0;
																		cont++;
																		break;
																	case 14: 
																		P[8][7]=0;
																		i=0;
																		cont++;
																		break;
																	case 15: 
																		P[8][8]=0;
																		i=0;
																		cont++;
																		break;
																	case 16: 
																		P[8][9]=0;
																		i=0;
																		cont++;
																		break;
																	case 17: 
																		P[8][10]=0;
																		i=0;
																		cont++;
																		break;
																	case 18: 
																		P[8][11]=0;
																		i=0;
																		cont++;
																		break;
																	case 19: 
																		P[8][12]=0;
																		i=0;
																		cont++;
																		break;
																	case 20: 
																		P[8][13]=0;
																		i=0;
																		cont++;
																		break;
																	case 21: 
																		P[8][14]=0;
																		i=0;
																		cont++;
																		break;
																	default:
																		i=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
															}
															system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
															printf("\n Generando comprobante de reservacion.\n");
															printf("\n\nIngrese su nombre completo: ");
															FILE *p;
															p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
															fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
															fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
															fputs(" Reservación a nombre de: ",p);
															scanf(" %[^\n]",&L);
															strupr(L);
															fputs(L,p);
															fputs("\n\n No. cuenta: ",p);
															printf("\nIngrese su numero de cuenta: ");
															scanf(" %[^\n]",&NoCu);
															fputs(NoCu,p);
															fputs("\n\n Día seleccionado: SÁBADO",p);
															fputs("\n\n Cajón reservado: 8",p);
															fputs("\n\n Horas reservadas: ",p);
															fprintf(p,"%i", horas);
															fputs("\n\n Hora de entrada: ",p);
															fprintf(p,"%i", ho1);
															fputs("   HRS. ",p);
															fputs("\n\n Hora de salida: ",p);
															fprintf(p,"%i", ho2);
															fputs("   HRS. ",p);
															fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
															fclose(p);
															printf("\n Comprobante generado exitosamente.\n");
														}
														else{
															horas=0;
															printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
														}
													}
													else{
														if(caj==9){
															printf("\n\n¿Cuantas horas va a reservar?:\n");
															scanf("%i",&horas);
															if(horas<=15){
																printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																cont=1;
																printf("Digite la hora: \n");
																scanf("%i",&ho1);
																switch(ho1){
																	case 7:
																		P[9][0]=0;
																		cont++;
																		break;
																	case 8: 
																		P[9][1]=0;
																		cont++;									
																		break;
																	case 9: 
																		P[9][2]=0;
																		cont++;
																		break;
																	case 10:
																		P[9][3]=0;
																		cont++;
																		break;
																	case 11: 
																		P[9][4]=0;
																		cont++;
																		break;
																	case 12: 
																		P[9][5]=0;
																		cont++;
																		break;
																	case 13: 
																		P[9][6]=0;
																		cont++;
																		break;
																	case 14: 
																		P[9][7]=0;
																		cont++;
																		break;
																	case 15: 
																		P[9][8]=0;
																		cont++;
																		break;
																	case 16: 
																		P[9][9]=0;
																		cont++;
																		break;
																	case 17: 
																		P[9][10]=0;
																		cont++;
																		break;
																	case 18: 
																		P[9][11]=0;
																		cont++;
																		break;
																	case 19: 
																		P[9][12]=0;
																		cont++;
																		break;
																	case 20: 
																		P[9][13]=0;
																		cont++;
																		break;
																	case 21: 
																		P[9][14]=0;
																		cont++;
																		break;
																	default:
																		ho1=0;
																		printf("\n Hora invalida, digite de nuevo: 7-21\n");
																}
																ho2=(ho1+horas);
																while(cont<=horas){
																	printf("\nDigite la hora: \n");
																	scanf("%i",&i);
																	switch(i){
																		case 7:
																			P[9][0]=0;
																			i=0;
																			cont++;
																			break;
																		case 8: 
																			P[9][1]=0;
																			i=0;
																			cont++;
																			break;
																		case 9: 
																			P[9][2]=0;
																			i=0;
																			cont++;
																			break;
																		case 10:
																			P[9][3]=0;
																			i=0;
																			cont++;
																			break;
																		case 11: 
																			P[9][4]=0;
																			i=0;
																			cont++;
																			break;
																		case 12: 
																			P[9][5]=0;
																			i=0;
																			cont++;
																			break;
																		case 13: 
																			P[9][6]=0;
																			i=0;
																			cont++;
																			break;
																		case 14: 
																			P[9][7]=0;
																			i=0;
																			cont++;
																			break;
																		case 15: 
																			P[9][8]=0;
																			i=0;
																			cont++;
																			break;
																		case 16: 
																			P[9][9]=0;
																			i=0;
																			cont++;
																			break;
																		case 17: 
																			P[9][10]=0;
																			i=0;
																			cont++;
																			break;
																		case 18: 
																			P[9][11]=0;
																			i=0;
																			cont++;
																			break;
																		case 19: 
																			P[9][12]=0;
																			i=0;
																			cont++;
																			break;
																		case 20: 
																			P[9][13]=0;
																			i=0;
																			cont++;
																			break;
																		case 21: 
																			P[9][14]=0;
																			i=0;
																			cont++;
																			break;
																		default:
																			i=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																}
																system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																printf("\n Generando comprobante de reservacion.\n");
																printf("\n\nIngrese su nombre completo: ");
																FILE *p;
																p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																fputs(" Reservación a nombre de: ",p);
																scanf(" %[^\n]",&L);
																strupr(L);
																fputs(L,p);
																fputs("\n\n No. cuenta: ",p);
																printf("\nIngrese su numero de cuenta: ");
																scanf(" %[^\n]",&NoCu);
																fputs(NoCu,p);
																fputs("\n\n Día seleccionado: SÁBADO",p);
																fputs("\n\n Cajón reservado: 9",p);
																fputs("\n\n Horas reservadas: ",p);
																fprintf(p,"%i", horas);
																fputs("\n\n Hora de entrada: ",p);
																fprintf(p,"%i", ho1);
																fputs("   HRS. ",p);
																fputs("\n\n Hora de salida: ",p);
																fprintf(p,"%i", ho2);
																fputs("   HRS. ",p);
																fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																fclose(p);
																printf("\n Comprobante generado exitosamente.\n");
															}
															else{
																horas=0;
																printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
															}
														}
														else{
															if(caj==10){
																printf("\n\n¿Cuantas horas va a reservar?:\n");
																scanf("%i",&horas);
																if(horas<=15){
																	printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
																	cont=1;
																	printf("Digite la hora: \n");
																	scanf("%i",&ho1);
																	switch(ho1){
																		case 7:
																			P[10][0]=0;
																			cont++;
																			break;
																		case 8: 
																			P[10][1]=0;
																			cont++;									
																			break;
																		case 9: 
																			P[10][2]=0;
																			cont++;
																			break;
																		case 10:
																			P[10][3]=0;
																			cont++;
																			break;
																		case 11: 
																			P[10][4]=0;
																			cont++;
																			break;
																		case 12: 
																			P[10][5]=0;
																			cont++;
																			break;
																		case 13: 
																			P[10][6]=0;
																			cont++;
																			break;
																		case 14: 
																			P[10][7]=0;
																			cont++;
																			break;
																		case 15: 
																			P[10][8]=0;
																			cont++;
																			break;
																		case 16: 
																			P[10][9]=0;
																			cont++;
																			break;
																		case 17: 
																			P[10][10]=0;
																			cont++;
																			break;
																		case 18: 
																			P[10][11]=0;
																			cont++;
																			break;
																		case 19: 
																			P[10][12]=0;
																			cont++;
																			break;
																		case 20: 
																			P[10][13]=0;
																			cont++;
																			break;
																		case 21: 
																			P[10][14]=0;
																			cont++;
																			break;
																		default:
																			ho1=0;
																			printf("\n Hora invalida, digite de nuevo: 7-21\n");
																	}
																	ho2=(ho1+horas);
																	while(cont<=horas){
																		printf("\nDigite la hora: \n");
																		scanf("%i",&i);
																		switch(i){
																			case 7:
																				P[10][0]=0;
																				i=0;
																				cont++;
																				break;
																			case 8: 
																				P[10][1]=0;
																				i=0;
																				cont++;
																				break;
																			case 9: 
																				P[10][2]=0;
																				i=0;
																				cont++;
																				break;
																			case 10:
																				P[10][3]=0;
																				i=0;
																				cont++;
																				break;
																			case 11: 
																				P[10][4]=0;
																				i=0;
																				cont++;
																				break;
																			case 12: 
																				P[10][5]=0;
																				i=0;
																				cont++;
																				break;
																			case 13: 
																				P[10][6]=0;
																				i=0;
																				cont++;
																				break;
																			case 14: 
																				P[10][7]=0;
																				i=0;
																				cont++;
																				break;
																			case 15: 
																				P[10][8]=0;
																				i=0;
																				cont++;
																				break;
																			case 16: 
																				P[10][9]=0;
																				i=0;
																				cont++;
																				break;
																			case 17: 
																				P[10][10]=0;
																				i=0;
																				cont++;
																				break;
																			case 18: 
																				P[10][11]=0;
																				i=0;
																				cont++;
																				break;
																			case 19: 
																				P[10][12]=0;
																				i=0;
																				cont++;
																				break;
																			case 20: 
																				P[10][13]=0;
																				i=0;
																				cont++;
																				break;
																			case 21: 
																				P[10][14]=0;
																				i=0;
																				cont++;
																				break;
																			default:
																				i=0;
																				printf("\n Hora invalida, digite de nuevo: 7-21\n");
																		}
																	}
																	system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
																	printf("\n Generando comprobante de reservacion.\n");
																	printf("\n\nIngrese su nombre completo: ");
																	FILE *p;
																	p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
																	fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
																	fputs("\n Estacionamiento seleccionado: PRINCIPAL \n\n\n\n",p);
																	fputs(" Reservación a nombre de: ",p);
																	scanf(" %[^\n]",&L);
																	strupr(L);
																	fputs(L,p);
																	fputs("\n\n No. cuenta: ",p);
																	printf("\nIngrese su numero de cuenta: ");
																	scanf(" %[^\n]",&NoCu);
																	fputs(NoCu,p);
																	fputs("\n\n Día seleccionado: SÁBADO",p);
																	fputs("\n\n Cajón reservado: 10",p);
																	fputs("\n\n Horas reservadas: ",p);
																	fprintf(p,"%i", horas);
																	fputs("\n\n Hora de entrada: ",p);
																	fprintf(p,"%i", ho1);
																	fputs("   HRS. ",p);
																	fputs("\n\n Hora de salida: ",p);
																	fprintf(p,"%i", ho2);
																	fputs("   HRS. ",p);
																	fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
																	fclose(p);
																	printf("\n Comprobante generado exitosamente.\n");
																}
																else{
																	horas=0;
																	printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
																}
															}
															else{
																printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-10\n");
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					break;					
				default:
					d=0;
					printf("Dia invalido, ingrese de nuevo.");
					return 0;
			}
			system("cls");//Se limpia la pantalla para que aparezca el siguiente menú
			printf("¿Desea ver los cajones disponibles? SÍ(1) / NO (2):\n");
			scanf("%i",&ver);
			//strupr(ver);//Conversión a mayusculas
			if(ver==1){
				printf("--------------------------------------------Cajones disponibles:-------------------------------------------------------\n\n -------------------------------------------------HORARIO-------------------------------------------------------\n{P[0]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{P[1]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{P[2]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{P[3]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{P[4]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{P[5]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{P[6]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{P[7]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{P[8]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{P[9]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{P[10]:'%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n", P[0][0],P[0][1],P[0][2],P[0][3],P[0][4],P[0][5],P[0][6],P[0][7],P[0][8],P[0][9],P[0][10],P[0][11],P[0][12],P[0][13],P[0][14], P[1][0],P[1][1],P[1][2],P[1][3],P[1][4],P[1][5],P[1][6],P[1][7],P[1][8],P[1][9],P[1][10],P[1][11],P[1][12],P[1][13],P[1][14], P[2][0],P[2][1],P[2][2],P[2][3],P[2][4],P[2][5],P[2][6],P[2][7],P[2][8],P[2][9],P[2][10],P[2][11],P[2][12],P[2][13],P[2][14], P[3][0],P[3][1],P[3][2],P[3][3],P[3][4],P[3][5],P[3][6],P[3][7],P[3][8],P[3][9],P[3][10],P[3][11],P[3][12],P[3][13],P[3][14], P[4][0],P[4][1],P[4][2],P[4][3],P[4][4],P[4][5],P[4][6],P[4][7],P[4][8],P[4][9],P[4][10],P[4][11],P[4][12],P[4][13],P[4][14], P[5][0],P[5][1],P[5][2],P[5][3],P[5][4],P[5][5],P[5][6],P[5][7],P[5][8],P[5][9],P[5][10],P[5][11],P[5][12],P[5][13],P[5][14], P[6][0],P[6][1],P[6][2],P[6][3],P[6][4],P[6][5],P[6][6],P[6][7],P[6][8],P[6][9],P[6][10],P[6][11],P[6][12],P[6][13],P[6][14], P[7][0], P[7][1],P[7][2],P[7][3],P[7][4],P[7][5],P[7][6],P[7][7],P[7][8],P[7][9],P[7][10],P[7][11],P[7][12],P[7][13],P[7][14], P[8][0], P[8][1],P[8][2],P[8][3],P[8][4],P[8][5],P[8][6],P[8][7],P[8][8],P[8][9],P[8][10],P[8][11],P[8][12],P[8][13],P[8][14], P[9][0], P[9][1],P[9][2],P[9][3],P[9][4],P[9][5],P[9][6],P[9][7],P[9][8],P[9][9],P[9][10],P[9][11],P[9][12],P[9][13],P[9][14], P[10][0], P[10][1],P[10][2],P[10][3],P[10][4],P[10][5],P[10][6],P[10][7],P[10][8],P[10][9],P[10][10],P[10][11],P[10][12],P[10][13],P[10][14]);
				printf("Gracias por su reservacion, vuelva pronto.");
			}
			else{
				if(ver==2){
					printf("Gracias por su reservacion, vuelva pronto.");
				}
				else{
					printf("Opcion invalida, gracias por su reservacion.");
				}
			}
			break;	
		case 2:
			A[0][0]=7, A[0][1]=8, A[0][2]=9, A[0][3]=10, A[0][4]=11, A[0][5]=12, A[0][6]=13, A[0][7]=14, A[0][8]=15, A[0][9]=16, A[0][10]=17, A[0][11]=18, A[0][12]=19, A[0][13]=20, A[0][14]=21;
			A[1][0]=7, A[1][1]=8, A[1][2]=9, A[1][3]=10, A[1][4]=11, A[1][5]=12, A[1][6]=13, A[1][7]=14, A[1][8]=15, A[1][9]=16, A[1][10]=17, A[1][11]=18, A[1][12]=19, A[1][13]=20, A[1][14]=21;
			A[2][0]=7, A[2][1]=8, A[2][2]=9, A[2][3]=10, A[2][4]=11, A[2][5]=12, A[2][6]=13, A[2][7]=14, A[2][8]=15, A[2][9]=16, A[2][10]=17, A[2][11]=18, A[2][12]=19, A[2][13]=20, A[2][14]=21;
			A[3][0]=7, A[3][1]=8, A[3][2]=9, A[3][3]=10, A[3][4]=11, A[3][5]=12, A[3][6]=13, A[3][7]=14, A[3][8]=15, A[3][9]=16, A[3][10]=17, A[3][11]=18, A[3][12]=19, A[3][13]=20, A[3][14]=21;
			A[4][0]=7, A[4][1]=8, A[4][2]=9, A[4][3]=10, A[4][4]=11, A[4][5]=12, A[4][6]=13, A[4][7]=14, A[4][8]=15, A[4][9]=16, A[4][10]=17, A[4][11]=18, A[4][12]=19, A[4][13]=20, A[4][14]=21;
			A[5][0]=7, A[5][1]=8, A[5][2]=9, A[5][3]=10, A[5][4]=11, A[5][5]=12, A[5][6]=13, A[5][7]=14, A[5][8]=15, A[5][9]=16, A[5][10]=17, A[5][11]=18, A[5][12]=19, A[5][13]=20, A[5][14]=21;
			printf("\nSeleccione el dia al que va a reservar:\n 1. Lunes\n 2. Martes\n 3. Miercoles\n 4. Jueves\n 5. Viernes\n 6. Sabado\n\n");
			scanf("%i",&d);
			system("cls");//Se limpia la pantalla para que aparezca el siguiente menú
			switch(d){
				case 1:
					printf("----------Cajones disponibles: 6 (0-5)----------\n ----------HORARIO----------\n {'   ',A[0], A[1], A[2], A[3],  A[4],  A[5],  A[6],  A[7],  A[8],  A[9], A[10],  A[11], A[12], A[13], A[14]},\n {A[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-5:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									A[0][0]=0;
									cont++;
									break;
								case 8: 
									A[0][1]=0;
									cont++;									
									break;
								case 9: 
									A[0][2]=0;
									cont++;
									break;
								case 10:
									A[0][3]=0;
									cont++;
									break;
								case 11: 
									A[0][4]=0;
									cont++;
									break;
								case 12: 
									A[0][5]=0;
									cont++;
									break;
								case 13: 
									A[0][6]=0;
									cont++;
									break;
								case 14: 
									A[0][7]=0;
									cont++;
									break;
								case 15: 
									A[0][8]=0;
									cont++;
									break;
								case 16: 
									A[0][9]=0;
									cont++;
									break;
								case 17: 
									A[0][10]=0;
									cont++;
									break;
								case 18: 
									A[0][11]=0;
									cont++;
									break;
								case 19: 
									A[0][12]=0;
									cont++;
									break;
								case 20: 
									A[0][13]=0;
									cont++;
									break;
								case 21: 
									A[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										A[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										A[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										A[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										A[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										A[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										A[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										A[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										A[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										A[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										A[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										A[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										A[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										A[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										A[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										A[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: LUNES",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										A[1][0]=0;
										cont++;
										break;
									case 8: 
										A[1][1]=0;
										cont++;									
										break;
									case 9: 
										A[1][2]=0;
										cont++;
										break;
									case 10:
										A[1][3]=0;
										cont++;
										break;
									case 11: 
										A[1][4]=0;
										cont++;
										break;
									case 12: 
										A[1][5]=0;
										cont++;
										break;
									case 13: 
										A[1][6]=0;
										cont++;
										break;
									case 14: 
										A[1][7]=0;
										cont++;
										break;
									case 15: 
										A[1][8]=0;
										cont++;
										break;
									case 16: 
										A[1][9]=0;
										cont++;
										break;
									case 17: 
										A[1][10]=0;
										cont++;
										break;
									case 18: 
										A[1][11]=0;
										cont++;
										break;
									case 19: 
										A[1][12]=0;
										cont++;
										break;
									case 20: 
										A[1][13]=0;
										cont++;
										break;
									case 21: 
										A[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											A[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											A[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											A[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											A[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											A[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											A[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											A[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											A[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											A[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											A[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											A[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											A[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											A[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											A[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											A[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: LUNES",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar más de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											A[2][0]=0;
											cont++;
											break;
										case 8: 
											A[2][1]=0;
											cont++;									
											break;
										case 9: 
											A[2][2]=0;
											cont++;
											break;
										case 10:
											A[2][3]=0;
											cont++;
											break;
										case 11: 
											A[2][4]=0;
											cont++;
											break;
										case 12: 
											A[2][5]=0;
											cont++;
											break;
										case 13: 
											A[2][6]=0;
											cont++;
											break;
										case 14: 
											A[2][7]=0;
											cont++;
											break;
										case 15: 
											A[2][8]=0;
											cont++;
											break;
										case 16: 
											A[2][9]=0;
											cont++;
											break;
										case 17: 
											A[2][10]=0;
											cont++;
											break;
										case 18: 
											A[2][11]=0;
											cont++;
											break;
										case 19: 
											A[2][12]=0;
											cont++;
											break;
										case 20: 
											A[2][13]=0;
											cont++;
											break;
										case 21: 
											A[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												A[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												A[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												A[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												A[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												A[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												A[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												A[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												A[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												A[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												A[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												A[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												A[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												A[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												A[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												A[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: LUNES",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												A[3][0]=0;
												cont++;
												break;
											case 8: 
												A[3][1]=0;
												cont++;									
												break;
											case 9: 
												A[3][2]=0;
												cont++;
												break;
											case 10:
												A[3][3]=0;
												cont++;
												break;
											case 11: 
												A[3][4]=0;
												cont++;
												break;
											case 12: 
												A[3][5]=0;
												cont++;
												break;
											case 13: 
												A[3][6]=0;
												cont++;
												break;
											case 14: 
												A[3][7]=0;
												cont++;
												break;
											case 15: 
												A[3][8]=0;
												cont++;
												break;
											case 16: 
												A[3][9]=0;
												cont++;
												break;
											case 17: 
												A[3][10]=0;
												cont++;
												break;
											case 18: 
												A[3][11]=0;
												cont++;
												break;
											case 19: 
												A[3][12]=0;
												cont++;
												break;
											case 20: 
												A[3][13]=0;
												cont++;
												break;
											case 21: 
												A[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													A[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													A[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													A[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													A[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													A[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													A[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													A[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													A[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													A[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													A[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													A[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													A[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													A[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													A[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													A[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: LUNES",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													A[4][0]=0;
													cont++;
													break;
												case 8: 
													A[4][1]=0;
													cont++;									
													break;
												case 9: 
													A[4][2]=0;
													cont++;
													break;
												case 10:
													A[4][3]=0;
													cont++;
													break;
												case 11: 
													A[4][4]=0;
													cont++;
													break;
												case 12: 
													A[4][5]=0;
													cont++;
													break;
												case 13: 
													A[4][6]=0;
													cont++;
													break;
												case 14: 
													A[4][7]=0;
													cont++;
													break;
												case 15: 
													A[4][8]=0;
													cont++;
													break;
												case 16: 
													A[4][9]=0;
													cont++;
													break;
												case 17: 
													A[4][10]=0;
													cont++;
													break;
												case 18: 
													A[4][11]=0;
													cont++;
													break;
												case 19: 
													A[4][12]=0;
													cont++;
													break;
												case 20: 
													A[4][13]=0;
													cont++;
													break;
												case 21: 
													A[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														A[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														A[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														A[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														A[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														A[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														A[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														A[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														A[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														A[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														A[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														A[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														A[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														A[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														A[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														A[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: LUNES",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														A[5][0]=0;
														cont++;
														break;
													case 8: 
														A[5][1]=0;
														cont++;									
														break;
													case 9: 
														A[5][2]=0;
														cont++;
														break;
													case 10:
														A[5][3]=0;
														cont++;
														break;
													case 11: 
														A[5][4]=0;
														cont++;
														break;
													case 12: 
														A[5][5]=0;
														cont++;
														break;
													case 13: 
														A[5][6]=0;
														cont++;
														break;
													case 14: 
														A[5][7]=0;
														cont++;
														break;
													case 15: 
														A[5][8]=0;
														cont++;
														break;
													case 16: 
														A[5][9]=0;
														cont++;
														break;
													case 17: 
														A[5][10]=0;
														cont++;
														break;
													case 18: 
														A[5][11]=0;
														cont++;
														break;
													case 19: 
														A[5][12]=0;
														cont++;
														break;
													case 20: 
														A[5][13]=0;
														cont++;
														break;
													case 21: 
														A[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															A[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															A[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															A[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															A[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															A[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															A[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															A[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															A[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															A[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															A[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															A[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															A[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															A[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															A[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															A[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: LUNES",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-5");
										}
									}
								}
							}
						}
					}
					break;
				case 2:
					printf("----------Cajones disponibles: 6 (0-5)----------\n ----------HORARIO----------\n {'   ',A[0], A[1], A[2], A[3],  A[4],  A[5],  A[6],  A[7],  A[8],  A[9], A[10],  A[11], A[12], A[13], A[14]},\n {A[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-5:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									A[0][0]=0;
									cont++;
									break;
								case 8: 
									A[0][1]=0;
									cont++;									
									break;
								case 9: 
									A[0][2]=0;
									cont++;
									break;
								case 10:
									A[0][3]=0;
									cont++;
									break;
								case 11: 
									A[0][4]=0;
									cont++;
									break;
								case 12: 
									A[0][5]=0;
									cont++;
									break;
								case 13: 
									A[0][6]=0;
									cont++;
									break;
								case 14: 
									A[0][7]=0;
									cont++;
									break;
								case 15: 
									A[0][8]=0;
									cont++;
									break;
								case 16: 
									A[0][9]=0;
									cont++;
									break;
								case 17: 
									A[0][10]=0;
									cont++;
									break;
								case 18: 
									A[0][11]=0;
									cont++;
									break;
								case 19: 
									A[0][12]=0;
									cont++;
									break;
								case 20: 
									A[0][13]=0;
									cont++;
									break;
								case 21: 
									A[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										A[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										A[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										A[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										A[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										A[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										A[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										A[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										A[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										A[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										A[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										A[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										A[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										A[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										A[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										A[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: MARTES",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										A[1][0]=0;
										cont++;
										break;
									case 8: 
										A[1][1]=0;
										cont++;									
										break;
									case 9: 
										A[1][2]=0;
										cont++;
										break;
									case 10:
										A[1][3]=0;
										cont++;
										break;
									case 11: 
										A[1][4]=0;
										cont++;
										break;
									case 12: 
										A[1][5]=0;
										cont++;
										break;
									case 13: 
										A[1][6]=0;
										cont++;
										break;
									case 14: 
										A[1][7]=0;
										cont++;
										break;
									case 15: 
										A[1][8]=0;
										cont++;
										break;
									case 16: 
										A[1][9]=0;
										cont++;
										break;
									case 17: 
										A[1][10]=0;
										cont++;
										break;
									case 18: 
										A[1][11]=0;
										cont++;
										break;
									case 19: 
										A[1][12]=0;
										cont++;
										break;
									case 20: 
										A[1][13]=0;
										cont++;
										break;
									case 21: 
										A[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											A[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											A[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											A[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											A[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											A[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											A[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											A[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											A[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											A[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											A[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											A[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											A[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											A[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											A[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											A[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: MARTES",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar más de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											A[2][0]=0;
											cont++;
											break;
										case 8: 
											A[2][1]=0;
											cont++;									
											break;
										case 9: 
											A[2][2]=0;
											cont++;
											break;
										case 10:
											A[2][3]=0;
											cont++;
											break;
										case 11: 
											A[2][4]=0;
											cont++;
											break;
										case 12: 
											A[2][5]=0;
											cont++;
											break;
										case 13: 
											A[2][6]=0;
											cont++;
											break;
										case 14: 
											A[2][7]=0;
											cont++;
											break;
										case 15: 
											A[2][8]=0;
											cont++;
											break;
										case 16: 
											A[2][9]=0;
											cont++;
											break;
										case 17: 
											A[2][10]=0;
											cont++;
											break;
										case 18: 
											A[2][11]=0;
											cont++;
											break;
										case 19: 
											A[2][12]=0;
											cont++;
											break;
										case 20: 
											A[2][13]=0;
											cont++;
											break;
										case 21: 
											A[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												A[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												A[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												A[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												A[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												A[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												A[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												A[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												A[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												A[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												A[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												A[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												A[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												A[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												A[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												A[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: MARTES",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												A[3][0]=0;
												cont++;
												break;
											case 8: 
												A[3][1]=0;
												cont++;									
												break;
											case 9: 
												A[3][2]=0;
												cont++;
												break;
											case 10:
												A[3][3]=0;
												cont++;
												break;
											case 11: 
												A[3][4]=0;
												cont++;
												break;
											case 12: 
												A[3][5]=0;
												cont++;
												break;
											case 13: 
												A[3][6]=0;
												cont++;
												break;
											case 14: 
												A[3][7]=0;
												cont++;
												break;
											case 15: 
												A[3][8]=0;
												cont++;
												break;
											case 16: 
												A[3][9]=0;
												cont++;
												break;
											case 17: 
												A[3][10]=0;
												cont++;
												break;
											case 18: 
												A[3][11]=0;
												cont++;
												break;
											case 19: 
												A[3][12]=0;
												cont++;
												break;
											case 20: 
												A[3][13]=0;
												cont++;
												break;
											case 21: 
												A[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													A[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													A[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													A[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													A[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													A[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													A[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													A[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													A[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													A[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													A[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													A[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													A[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													A[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													A[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													A[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: MARTES",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													A[4][0]=0;
													cont++;
													break;
												case 8: 
													A[4][1]=0;
													cont++;									
													break;
												case 9: 
													A[4][2]=0;
													cont++;
													break;
												case 10:
													A[4][3]=0;
													cont++;
													break;
												case 11: 
													A[4][4]=0;
													cont++;
													break;
												case 12: 
													A[4][5]=0;
													cont++;
													break;
												case 13: 
													A[4][6]=0;
													cont++;
													break;
												case 14: 
													A[4][7]=0;
													cont++;
													break;
												case 15: 
													A[4][8]=0;
													cont++;
													break;
												case 16: 
													A[4][9]=0;
													cont++;
													break;
												case 17: 
													A[4][10]=0;
													cont++;
													break;
												case 18: 
													A[4][11]=0;
													cont++;
													break;
												case 19: 
													A[4][12]=0;
													cont++;
													break;
												case 20: 
													A[4][13]=0;
													cont++;
													break;
												case 21: 
													A[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														A[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														A[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														A[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														A[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														A[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														A[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														A[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														A[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														A[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														A[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														A[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														A[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														A[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														A[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														A[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: MARTES",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														A[5][0]=0;
														cont++;
														break;
													case 8: 
														A[5][1]=0;
														cont++;									
														break;
													case 9: 
														A[5][2]=0;
														cont++;
														break;
													case 10:
														A[5][3]=0;
														cont++;
														break;
													case 11: 
														A[5][4]=0;
														cont++;
														break;
													case 12: 
														A[5][5]=0;
														cont++;
														break;
													case 13: 
														A[5][6]=0;
														cont++;
														break;
													case 14: 
														A[5][7]=0;
														cont++;
														break;
													case 15: 
														A[5][8]=0;
														cont++;
														break;
													case 16: 
														A[5][9]=0;
														cont++;
														break;
													case 17: 
														A[5][10]=0;
														cont++;
														break;
													case 18: 
														A[5][11]=0;
														cont++;
														break;
													case 19: 
														A[5][12]=0;
														cont++;
														break;
													case 20: 
														A[5][13]=0;
														cont++;
														break;
													case 21: 
														A[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															A[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															A[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															A[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															A[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															A[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															A[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															A[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															A[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															A[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															A[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															A[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															A[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															A[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															A[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															A[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: MARTES",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-5");
										}
									}
								}
							}
						}
					}
	                break;                        
				case 3:
					printf("----------Cajones disponibles: 6 (0-5)----------\n ----------HORARIO----------\n {'   ',A[0], A[1], A[2], A[3],  A[4],  A[5],  A[6],  A[7],  A[8],  A[9], A[10],  A[11], A[12], A[13], A[14]},\n {A[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-5:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									A[0][0]=0;
									cont++;
									break;
								case 8: 
									A[0][1]=0;
									cont++;									
									break;
								case 9: 
									A[0][2]=0;
									cont++;
									break;
								case 10:
									A[0][3]=0;
									cont++;
									break;
								case 11: 
									A[0][4]=0;
									cont++;
									break;
								case 12: 
									A[0][5]=0;
									cont++;
									break;
								case 13: 
									A[0][6]=0;
									cont++;
									break;
								case 14: 
									A[0][7]=0;
									cont++;
									break;
								case 15: 
									A[0][8]=0;
									cont++;
									break;
								case 16: 
									A[0][9]=0;
									cont++;
									break;
								case 17: 
									A[0][10]=0;
									cont++;
									break;
								case 18: 
									A[0][11]=0;
									cont++;
									break;
								case 19: 
									A[0][12]=0;
									cont++;
									break;
								case 20: 
									A[0][13]=0;
									cont++;
									break;
								case 21: 
									A[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										A[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										A[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										A[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										A[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										A[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										A[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										A[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										A[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										A[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										A[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										A[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										A[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										A[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										A[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										A[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: MIÉRCOLES",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										A[1][0]=0;
										cont++;
										break;
									case 8: 
										A[1][1]=0;
										cont++;									
										break;
									case 9: 
										A[1][2]=0;
										cont++;
										break;
									case 10:
										A[1][3]=0;
										cont++;
										break;
									case 11: 
										A[1][4]=0;
										cont++;
										break;
									case 12: 
										A[1][5]=0;
										cont++;
										break;
									case 13: 
										A[1][6]=0;
										cont++;
										break;
									case 14: 
										A[1][7]=0;
										cont++;
										break;
									case 15: 
										A[1][8]=0;
										cont++;
										break;
									case 16: 
										A[1][9]=0;
										cont++;
										break;
									case 17: 
										A[1][10]=0;
										cont++;
										break;
									case 18: 
										A[1][11]=0;
										cont++;
										break;
									case 19: 
										A[1][12]=0;
										cont++;
										break;
									case 20: 
										A[1][13]=0;
										cont++;
										break;
									case 21: 
										A[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											A[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											A[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											A[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											A[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											A[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											A[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											A[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											A[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											A[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											A[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											A[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											A[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											A[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											A[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											A[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: MIÉRCOLES",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar más de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											A[2][0]=0;
											cont++;
											break;
										case 8: 
											A[2][1]=0;
											cont++;									
											break;
										case 9: 
											A[2][2]=0;
											cont++;
											break;
										case 10:
											A[2][3]=0;
											cont++;
											break;
										case 11: 
											A[2][4]=0;
											cont++;
											break;
										case 12: 
											A[2][5]=0;
											cont++;
											break;
										case 13: 
											A[2][6]=0;
											cont++;
											break;
										case 14: 
											A[2][7]=0;
											cont++;
											break;
										case 15: 
											A[2][8]=0;
											cont++;
											break;
										case 16: 
											A[2][9]=0;
											cont++;
											break;
										case 17: 
											A[2][10]=0;
											cont++;
											break;
										case 18: 
											A[2][11]=0;
											cont++;
											break;
										case 19: 
											A[2][12]=0;
											cont++;
											break;
										case 20: 
											A[2][13]=0;
											cont++;
											break;
										case 21: 
											A[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												A[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												A[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												A[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												A[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												A[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												A[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												A[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												A[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												A[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												A[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												A[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												A[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												A[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												A[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												A[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: MIÉRCOLES",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												A[3][0]=0;
												cont++;
												break;
											case 8: 
												A[3][1]=0;
												cont++;									
												break;
											case 9: 
												A[3][2]=0;
												cont++;
												break;
											case 10:
												A[3][3]=0;
												cont++;
												break;
											case 11: 
												A[3][4]=0;
												cont++;
												break;
											case 12: 
												A[3][5]=0;
												cont++;
												break;
											case 13: 
												A[3][6]=0;
												cont++;
												break;
											case 14: 
												A[3][7]=0;
												cont++;
												break;
											case 15: 
												A[3][8]=0;
												cont++;
												break;
											case 16: 
												A[3][9]=0;
												cont++;
												break;
											case 17: 
												A[3][10]=0;
												cont++;
												break;
											case 18: 
												A[3][11]=0;
												cont++;
												break;
											case 19: 
												A[3][12]=0;
												cont++;
												break;
											case 20: 
												A[3][13]=0;
												cont++;
												break;
											case 21: 
												A[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													A[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													A[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													A[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													A[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													A[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													A[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													A[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													A[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													A[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													A[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													A[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													A[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													A[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													A[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													A[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: LUNES",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													A[4][0]=0;
													cont++;
													break;
												case 8: 
													A[4][1]=0;
													cont++;									
													break;
												case 9: 
													A[4][2]=0;
													cont++;
													break;
												case 10:
													A[4][3]=0;
													cont++;
													break;
												case 11: 
													A[4][4]=0;
													cont++;
													break;
												case 12: 
													A[4][5]=0;
													cont++;
													break;
												case 13: 
													A[4][6]=0;
													cont++;
													break;
												case 14: 
													A[4][7]=0;
													cont++;
													break;
												case 15: 
													A[4][8]=0;
													cont++;
													break;
												case 16: 
													A[4][9]=0;
													cont++;
													break;
												case 17: 
													A[4][10]=0;
													cont++;
													break;
												case 18: 
													A[4][11]=0;
													cont++;
													break;
												case 19: 
													A[4][12]=0;
													cont++;
													break;
												case 20: 
													A[4][13]=0;
													cont++;
													break;
												case 21: 
													A[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														A[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														A[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														A[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														A[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														A[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														A[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														A[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														A[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														A[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														A[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														A[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														A[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														A[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														A[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														A[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: MIÉRCOLES",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														A[5][0]=0;
														cont++;
														break;
													case 8: 
														A[5][1]=0;
														cont++;									
														break;
													case 9: 
														A[5][2]=0;
														cont++;
														break;
													case 10:
														A[5][3]=0;
														cont++;
														break;
													case 11: 
														A[5][4]=0;
														cont++;
														break;
													case 12: 
														A[5][5]=0;
														cont++;
														break;
													case 13: 
														A[5][6]=0;
														cont++;
														break;
													case 14: 
														A[5][7]=0;
														cont++;
														break;
													case 15: 
														A[5][8]=0;
														cont++;
														break;
													case 16: 
														A[5][9]=0;
														cont++;
														break;
													case 17: 
														A[5][10]=0;
														cont++;
														break;
													case 18: 
														A[5][11]=0;
														cont++;
														break;
													case 19: 
														A[5][12]=0;
														cont++;
														break;
													case 20: 
														A[5][13]=0;
														cont++;
														break;
													case 21: 
														A[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															A[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															A[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															A[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															A[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															A[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															A[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															A[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															A[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															A[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															A[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															A[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															A[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															A[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															A[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															A[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: MIÉRCOLES",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-5");
										}
									}
								}
							}
						}
					}
					break;
				case 4:
					printf("----------Cajones disponibles: 6 (0-5)----------\n ----------HORARIO----------\n {'   ',A[0], A[1], A[2], A[3],  A[4],  A[5],  A[6],  A[7],  A[8],  A[9], A[10],  A[11], A[12], A[13], A[14]},\n {A[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-5:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									A[0][0]=0;
									cont++;
									break;
								case 8: 
									A[0][1]=0;
									cont++;									
									break;
								case 9: 
									A[0][2]=0;
									cont++;
									break;
								case 10:
									A[0][3]=0;
									cont++;
									break;
								case 11: 
									A[0][4]=0;
									cont++;
									break;
								case 12: 
									A[0][5]=0;
									cont++;
									break;
								case 13: 
									A[0][6]=0;
									cont++;
									break;
								case 14: 
									A[0][7]=0;
									cont++;
									break;
								case 15: 
									A[0][8]=0;
									cont++;
									break;
								case 16: 
									A[0][9]=0;
									cont++;
									break;
								case 17: 
									A[0][10]=0;
									cont++;
									break;
								case 18: 
									A[0][11]=0;
									cont++;
									break;
								case 19: 
									A[0][12]=0;
									cont++;
									break;
								case 20: 
									A[0][13]=0;
									cont++;
									break;
								case 21: 
									A[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										A[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										A[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										A[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										A[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										A[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										A[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										A[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										A[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										A[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										A[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										A[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										A[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										A[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										A[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										A[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: JUEVES",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										A[1][0]=0;
										cont++;
										break;
									case 8: 
										A[1][1]=0;
										cont++;									
										break;
									case 9: 
										A[1][2]=0;
										cont++;
										break;
									case 10:
										A[1][3]=0;
										cont++;
										break;
									case 11: 
										A[1][4]=0;
										cont++;
										break;
									case 12: 
										A[1][5]=0;
										cont++;
										break;
									case 13: 
										A[1][6]=0;
										cont++;
										break;
									case 14: 
										A[1][7]=0;
										cont++;
										break;
									case 15: 
										A[1][8]=0;
										cont++;
										break;
									case 16: 
										A[1][9]=0;
										cont++;
										break;
									case 17: 
										A[1][10]=0;
										cont++;
										break;
									case 18: 
										A[1][11]=0;
										cont++;
										break;
									case 19: 
										A[1][12]=0;
										cont++;
										break;
									case 20: 
										A[1][13]=0;
										cont++;
										break;
									case 21: 
										A[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											A[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											A[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											A[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											A[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											A[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											A[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											A[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											A[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											A[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											A[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											A[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											A[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											A[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											A[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											A[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: JUEVES",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar más de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											A[2][0]=0;
											cont++;
											break;
										case 8: 
											A[2][1]=0;
											cont++;									
											break;
										case 9: 
											A[2][2]=0;
											cont++;
											break;
										case 10:
											A[2][3]=0;
											cont++;
											break;
										case 11: 
											A[2][4]=0;
											cont++;
											break;
										case 12: 
											A[2][5]=0;
											cont++;
											break;
										case 13: 
											A[2][6]=0;
											cont++;
											break;
										case 14: 
											A[2][7]=0;
											cont++;
											break;
										case 15: 
											A[2][8]=0;
											cont++;
											break;
										case 16: 
											A[2][9]=0;
											cont++;
											break;
										case 17: 
											A[2][10]=0;
											cont++;
											break;
										case 18: 
											A[2][11]=0;
											cont++;
											break;
										case 19: 
											A[2][12]=0;
											cont++;
											break;
										case 20: 
											A[2][13]=0;
											cont++;
											break;
										case 21: 
											A[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												A[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												A[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												A[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												A[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												A[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												A[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												A[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												A[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												A[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												A[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												A[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												A[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												A[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												A[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												A[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: JUEVES",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												A[3][0]=0;
												cont++;
												break;
											case 8: 
												A[3][1]=0;
												cont++;									
												break;
											case 9: 
												A[3][2]=0;
												cont++;
												break;
											case 10:
												A[3][3]=0;
												cont++;
												break;
											case 11: 
												A[3][4]=0;
												cont++;
												break;
											case 12: 
												A[3][5]=0;
												cont++;
												break;
											case 13: 
												A[3][6]=0;
												cont++;
												break;
											case 14: 
												A[3][7]=0;
												cont++;
												break;
											case 15: 
												A[3][8]=0;
												cont++;
												break;
											case 16: 
												A[3][9]=0;
												cont++;
												break;
											case 17: 
												A[3][10]=0;
												cont++;
												break;
											case 18: 
												A[3][11]=0;
												cont++;
												break;
											case 19: 
												A[3][12]=0;
												cont++;
												break;
											case 20: 
												A[3][13]=0;
												cont++;
												break;
											case 21: 
												A[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													A[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													A[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													A[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													A[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													A[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													A[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													A[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													A[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													A[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													A[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													A[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													A[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													A[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													A[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													A[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: JUEVES",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													A[4][0]=0;
													cont++;
													break;
												case 8: 
													A[4][1]=0;
													cont++;									
													break;
												case 9: 
													A[4][2]=0;
													cont++;
													break;
												case 10:
													A[4][3]=0;
													cont++;
													break;
												case 11: 
													A[4][4]=0;
													cont++;
													break;
												case 12: 
													A[4][5]=0;
													cont++;
													break;
												case 13: 
													A[4][6]=0;
													cont++;
													break;
												case 14: 
													A[4][7]=0;
													cont++;
													break;
												case 15: 
													A[4][8]=0;
													cont++;
													break;
												case 16: 
													A[4][9]=0;
													cont++;
													break;
												case 17: 
													A[4][10]=0;
													cont++;
													break;
												case 18: 
													A[4][11]=0;
													cont++;
													break;
												case 19: 
													A[4][12]=0;
													cont++;
													break;
												case 20: 
													A[4][13]=0;
													cont++;
													break;
												case 21: 
													A[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														A[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														A[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														A[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														A[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														A[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														A[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														A[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														A[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														A[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														A[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														A[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														A[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														A[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														A[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														A[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: JUEVES",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														A[5][0]=0;
														cont++;
														break;
													case 8: 
														A[5][1]=0;
														cont++;									
														break;
													case 9: 
														A[5][2]=0;
														cont++;
														break;
													case 10:
														A[5][3]=0;
														cont++;
														break;
													case 11: 
														A[5][4]=0;
														cont++;
														break;
													case 12: 
														A[5][5]=0;
														cont++;
														break;
													case 13: 
														A[5][6]=0;
														cont++;
														break;
													case 14: 
														A[5][7]=0;
														cont++;
														break;
													case 15: 
														A[5][8]=0;
														cont++;
														break;
													case 16: 
														A[5][9]=0;
														cont++;
														break;
													case 17: 
														A[5][10]=0;
														cont++;
														break;
													case 18: 
														A[5][11]=0;
														cont++;
														break;
													case 19: 
														A[5][12]=0;
														cont++;
														break;
													case 20: 
														A[5][13]=0;
														cont++;
														break;
													case 21: 
														A[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															A[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															A[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															A[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															A[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															A[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															A[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															A[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															A[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															A[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															A[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															A[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															A[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															A[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															A[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															A[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: JUEVES",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-5");
										}
									}
								}
							}
						}
					}
					break;              
				case 5:
					printf("----------Cajones disponibles: 6 (0-5)----------\n ----------HORARIO----------\n {'   ',A[0], A[1], A[2], A[3],  A[4],  A[5],  A[6],  A[7],  A[8],  A[9], A[10],  A[11], A[12], A[13], A[14]},\n {A[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-5:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									A[0][0]=0;
									cont++;
									break;
								case 8: 
									A[0][1]=0;
									cont++;									
									break;
								case 9: 
									A[0][2]=0;
									cont++;
									break;
								case 10:
									A[0][3]=0;
									cont++;
									break;
								case 11: 
									A[0][4]=0;
									cont++;
									break;
								case 12: 
									A[0][5]=0;
									cont++;
									break;
								case 13: 
									A[0][6]=0;
									cont++;
									break;
								case 14: 
									A[0][7]=0;
									cont++;
									break;
								case 15: 
									A[0][8]=0;
									cont++;
									break;
								case 16: 
									A[0][9]=0;
									cont++;
									break;
								case 17: 
									A[0][10]=0;
									cont++;
									break;
								case 18: 
									A[0][11]=0;
									cont++;
									break;
								case 19: 
									A[0][12]=0;
									cont++;
									break;
								case 20: 
									A[0][13]=0;
									cont++;
									break;
								case 21: 
									A[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										A[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										A[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										A[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										A[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										A[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										A[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										A[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										A[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										A[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										A[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										A[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										A[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										A[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										A[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										A[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: VIERNES",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										A[1][0]=0;
										cont++;
										break;
									case 8: 
										A[1][1]=0;
										cont++;									
										break;
									case 9: 
										A[1][2]=0;
										cont++;
										break;
									case 10:
										A[1][3]=0;
										cont++;
										break;
									case 11: 
										A[1][4]=0;
										cont++;
										break;
									case 12: 
										A[1][5]=0;
										cont++;
										break;
									case 13: 
										A[1][6]=0;
										cont++;
										break;
									case 14: 
										A[1][7]=0;
										cont++;
										break;
									case 15: 
										A[1][8]=0;
										cont++;
										break;
									case 16: 
										A[1][9]=0;
										cont++;
										break;
									case 17: 
										A[1][10]=0;
										cont++;
										break;
									case 18: 
										A[1][11]=0;
										cont++;
										break;
									case 19: 
										A[1][12]=0;
										cont++;
										break;
									case 20: 
										A[1][13]=0;
										cont++;
										break;
									case 21: 
										A[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											A[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											A[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											A[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											A[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											A[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											A[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											A[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											A[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											A[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											A[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											A[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											A[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											A[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											A[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											A[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: VIERNES",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar más de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											A[2][0]=0;
											cont++;
											break;
										case 8: 
											A[2][1]=0;
											cont++;									
											break;
										case 9: 
											A[2][2]=0;
											cont++;
											break;
										case 10:
											A[2][3]=0;
											cont++;
											break;
										case 11: 
											A[2][4]=0;
											cont++;
											break;
										case 12: 
											A[2][5]=0;
											cont++;
											break;
										case 13: 
											A[2][6]=0;
											cont++;
											break;
										case 14: 
											A[2][7]=0;
											cont++;
											break;
										case 15: 
											A[2][8]=0;
											cont++;
											break;
										case 16: 
											A[2][9]=0;
											cont++;
											break;
										case 17: 
											A[2][10]=0;
											cont++;
											break;
										case 18: 
											A[2][11]=0;
											cont++;
											break;
										case 19: 
											A[2][12]=0;
											cont++;
											break;
										case 20: 
											A[2][13]=0;
											cont++;
											break;
										case 21: 
											A[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												A[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												A[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												A[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												A[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												A[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												A[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												A[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												A[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												A[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												A[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												A[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												A[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												A[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												A[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												A[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: VIERNES",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												A[3][0]=0;
												cont++;
												break;
											case 8: 
												A[3][1]=0;
												cont++;									
												break;
											case 9: 
												A[3][2]=0;
												cont++;
												break;
											case 10:
												A[3][3]=0;
												cont++;
												break;
											case 11: 
												A[3][4]=0;
												cont++;
												break;
											case 12: 
												A[3][5]=0;
												cont++;
												break;
											case 13: 
												A[3][6]=0;
												cont++;
												break;
											case 14: 
												A[3][7]=0;
												cont++;
												break;
											case 15: 
												A[3][8]=0;
												cont++;
												break;
											case 16: 
												A[3][9]=0;
												cont++;
												break;
											case 17: 
												A[3][10]=0;
												cont++;
												break;
											case 18: 
												A[3][11]=0;
												cont++;
												break;
											case 19: 
												A[3][12]=0;
												cont++;
												break;
											case 20: 
												A[3][13]=0;
												cont++;
												break;
											case 21: 
												A[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													A[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													A[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													A[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													A[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													A[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													A[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													A[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													A[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													A[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													A[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													A[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													A[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													A[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													A[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													A[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: VIERNES",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													A[4][0]=0;
													cont++;
													break;
												case 8: 
													A[4][1]=0;
													cont++;									
													break;
												case 9: 
													A[4][2]=0;
													cont++;
													break;
												case 10:
													A[4][3]=0;
													cont++;
													break;
												case 11: 
													A[4][4]=0;
													cont++;
													break;
												case 12: 
													A[4][5]=0;
													cont++;
													break;
												case 13: 
													A[4][6]=0;
													cont++;
													break;
												case 14: 
													A[4][7]=0;
													cont++;
													break;
												case 15: 
													A[4][8]=0;
													cont++;
													break;
												case 16: 
													A[4][9]=0;
													cont++;
													break;
												case 17: 
													A[4][10]=0;
													cont++;
													break;
												case 18: 
													A[4][11]=0;
													cont++;
													break;
												case 19: 
													A[4][12]=0;
													cont++;
													break;
												case 20: 
													A[4][13]=0;
													cont++;
													break;
												case 21: 
													A[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														A[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														A[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														A[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														A[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														A[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														A[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														A[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														A[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														A[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														A[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														A[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														A[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														A[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														A[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														A[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: VIERNES",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														A[5][0]=0;
														cont++;
														break;
													case 8: 
														A[5][1]=0;
														cont++;									
														break;
													case 9: 
														A[5][2]=0;
														cont++;
														break;
													case 10:
														A[5][3]=0;
														cont++;
														break;
													case 11: 
														A[5][4]=0;
														cont++;
														break;
													case 12: 
														A[5][5]=0;
														cont++;
														break;
													case 13: 
														A[5][6]=0;
														cont++;
														break;
													case 14: 
														A[5][7]=0;
														cont++;
														break;
													case 15: 
														A[5][8]=0;
														cont++;
														break;
													case 16: 
														A[5][9]=0;
														cont++;
														break;
													case 17: 
														A[5][10]=0;
														cont++;
														break;
													case 18: 
														A[5][11]=0;
														cont++;
														break;
													case 19: 
														A[5][12]=0;
														cont++;
														break;
													case 20: 
														A[5][13]=0;
														cont++;
														break;
													case 21: 
														A[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															A[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															A[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															A[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															A[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															A[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															A[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															A[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															A[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															A[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															A[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															A[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															A[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															A[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															A[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															A[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: VIERNES",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
											}
										}
										else{
											printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-5");
										}
									}
								}
							}
						}
					}
					break;
				case 6:
					printf("----------Cajones disponibles: 6 (0-5)----------\n ----------HORARIO----------\n {'   ',A[0], A[1], A[2], A[3],  A[4],  A[5],  A[6],  A[7],  A[8],  A[9], A[10],  A[11], A[12], A[13], A[14]},\n {A[0], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[1], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[2], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[3], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[4], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n {A[5], '7',  '8',  '9',  '10',  '11',  '12',  '13',  '14',  '15',  '16',  '17',  '18',  '19',  '20',  '21'},\n");
					printf("\n\n\nIngrese el numero del cajon que desee reservar. 0-5:\n");
					scanf("%i",&caj);
					if(caj==0){
						printf("\n\n¿Cuantas horas va a reservar?:\n");
						scanf("%i",&horas);
						if(horas<=15){
							printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
							cont=1;
							printf("Digite la hora: \n");
							scanf("%i",&ho1);
							switch(ho1){
								case 7:
									A[0][0]=0;
									cont++;
									break;
								case 8: 
									A[0][1]=0;
									cont++;									
									break;
								case 9: 
									A[0][2]=0;
									cont++;
									break;
								case 10:
									A[0][3]=0;
									cont++;
									break;
								case 11: 
									A[0][4]=0;
									cont++;
									break;
								case 12: 
									A[0][5]=0;
									cont++;
									break;
								case 13: 
									A[0][6]=0;
									cont++;
									break;
								case 14: 
									A[0][7]=0;
									cont++;
									break;
								case 15: 
									A[0][8]=0;
									cont++;
									break;
								case 16: 
									A[0][9]=0;
									cont++;
									break;
								case 17: 
									A[0][10]=0;
									cont++;
									break;
								case 18: 
									A[0][11]=0;
									cont++;
									break;
								case 19: 
									A[0][12]=0;
									cont++;
									break;
								case 20: 
									A[0][13]=0;
									cont++;
									break;
								case 21: 
									A[0][14]=0;
									cont++;
									break;
								default:
									ho1=0;
									printf("\n Hora invalida, digite de nuevo: 7-21\n");
							}
							ho2=(ho1+horas);
							while(cont<=horas){
								printf("\nDigite la hora: \n");
								scanf("%i",&i);
								switch(i){
									case 7:
										A[0][0]=0;
										i=0;
										cont++;
										break;
									case 8: 
										A[0][1]=0;
										i=0;
										cont++;
										break;
									case 9: 
										A[0][2]=0;
										i=0;
										cont++;
										break;
									case 10:
										A[0][3]=0;
										i=0;
										cont++;
										break;
									case 11: 
										A[0][4]=0;
										i=0;
										cont++;
										break;
									case 12: 
										A[0][5]=0;
										i=0;
										cont++;
										break;
									case 13: 
										A[0][6]=0;
										i=0;
										cont++;
										break;
									case 14: 
										A[0][7]=0;
										i=0;
										cont++;
										break;
									case 15: 
										A[0][8]=0;
										i=0;
										cont++;
										break;
									case 16: 
										A[0][9]=0;
										i=0;
										cont++;
										break;
									case 17: 
										A[0][10]=0;
										i=0;
										cont++;
										break;
									case 18: 
										A[0][11]=0;
										i=0;
										cont++;
										break;
									case 19: 
										A[0][12]=0;
										i=0;
										cont++;
										break;
									case 20: 
										A[0][13]=0;
										i=0;
										cont++;
										break;
									case 21: 
										A[0][14]=0;
										i=0;
										cont++;
										break;
									default:
										i=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
							}
							system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
							printf("\n Generando comprobante de reservacion.\n");
							printf("\n\nIngrese su nombre completo: ");
							FILE *p;
							p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
							fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
							fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
							fputs(" Reservación a nombre de: ",p);
							scanf(" %[^\n]",&L);
							strupr(L);
							fputs(L,p);
							fputs("\n\n No. cuenta: ",p);
							printf("\nIngrese su numero de cuenta: ");
							scanf(" %[^\n]",&NoCu);
							fputs(NoCu,p);
							fputs("\n\n Día seleccionado: SÁBADO",p);
							fputs("\n\n Cajón reservado: 0",p);
							fputs("\n\n Horas reservadas: ",p);
							fprintf(p,"%i", horas);
							fputs("\n\n Hora de entrada: ",p);
							fprintf(p,"%i", ho1);
							fputs("   HRS. ",p);
							fputs("\n\n Hora de salida: ",p);
							fprintf(p,"%i", ho2);
							fputs("   HRS. ",p);
							fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
							fclose(p);
							printf("\n Comprobante generado exitosamente.\n");
						}
						else{
							horas=0;
							printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
						}
					}
					else{
						if(caj==1){
							printf("\n\n¿Cuantas horas va a reservar?:\n");
							scanf("%i",&horas);
							if(horas<=15){
								printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
								cont=1;
								printf("Digite la hora: \n");
								scanf("%i",&ho1);
								switch(ho1){
									case 7:
										A[1][0]=0;
										cont++;
										break;
									case 8: 
										A[1][1]=0;
										cont++;									
										break;
									case 9: 
										A[1][2]=0;
										cont++;
										break;
									case 10:
										A[1][3]=0;
										cont++;
										break;
									case 11: 
										A[1][4]=0;
										cont++;
										break;
									case 12: 
										A[1][5]=0;
										cont++;
										break;
									case 13: 
										A[1][6]=0;
										cont++;
										break;
									case 14: 
										A[1][7]=0;
										cont++;
										break;
									case 15: 
										A[1][8]=0;
										cont++;
										break;
									case 16: 
										A[1][9]=0;
										cont++;
										break;
									case 17: 
										A[1][10]=0;
										cont++;
										break;
									case 18: 
										A[1][11]=0;
										cont++;
										break;
									case 19: 
										A[1][12]=0;
										cont++;
										break;
									case 20: 
										A[1][13]=0;
										cont++;
										break;
									case 21: 
										A[1][14]=0;
										cont++;
										break;
									default:
										ho1=0;
										printf("\n Hora invalida, digite de nuevo: 7-21\n");
								}
								ho2=(ho1+horas);
								while(cont<=horas){
									printf("\nDigite la hora: \n");
									scanf("%i",&i);
									switch(i){
										case 7:
											A[1][0]=0;
											i=0;
											cont++;
											break;
										case 8: 
											A[1][1]=0;
											i=0;
											cont++;
											break;
										case 9: 
											A[1][2]=0;
											i=0;
											cont++;
											break;
										case 10:
											A[1][3]=0;
											i=0;
											cont++;
											break;
										case 11: 
											A[1][4]=0;
											i=0;
											cont++;
											break;
										case 12: 
											A[1][5]=0;
											i=0;
											cont++;
											break;
										case 13: 
											A[1][6]=0;
											i=0;
											cont++;
											break;
										case 14: 
											A[1][7]=0;
											i=0;
											cont++;
											break;
										case 15: 
											A[1][8]=0;
											i=0;
											cont++;
											break;
										case 16: 
											A[1][9]=0;
											i=0;
											cont++;
											break;
										case 17: 
											A[1][10]=0;
											i=0;
											cont++;
											break;
										case 18: 
											A[1][11]=0;
											i=0;
											cont++;
											break;
										case 19: 
											A[1][12]=0;
											i=0;
											cont++;
											break;
										case 20: 
											A[1][13]=0;
											i=0;
											cont++;
											break;
										case 21: 
											A[1][14]=0;
											i=0;
											cont++;
											break;
										default:
											i=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
								}
								system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
								printf("\n Generando comprobante de reservacion.\n");
								printf("\n\nIngrese su nombre completo: ");
								FILE *p;
								p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
								fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
								fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
								fputs(" Reservación a nombre de: ",p);
								scanf(" %[^\n]",&L);
								strupr(L);
								fputs(L,p);
								fputs("\n\n No. cuenta: ",p);
								printf("\nIngrese su numero de cuenta: ");
								scanf(" %[^\n]",&NoCu);
								fputs(NoCu,p);
								fputs("\n\n Día seleccionado: SÁBADO",p);
								fputs("\n\n Cajón reservado: 1",p);
								fputs("\n\n Horas reservadas: ",p);
								fprintf(p,"%i", horas);
								fputs("\n\n Hora de entrada: ",p);
								fprintf(p,"%i", ho1);
								fputs("   HRS. ",p);
								fputs("\n\n Hora de salida: ",p);
								fprintf(p,"%i", ho2);
								fputs("   HRS. ",p);
								fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
								fclose(p);
								printf("\n Comprobante generado exitosamente.\n");
							}
							else{
								horas=0;
								printf("\nCantidad de horas invalida. No puede reservar más de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
							}
						}
						else{
							if(caj==2){
								printf("\n\n¿Cuantas horas va a reservar?:\n");
								scanf("%i",&horas);
								if(horas<=15){
									printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
									cont=1;
									printf("Digite la hora: \n");
									scanf("%i",&ho1);
									switch(ho1){
										case 7:
											A[2][0]=0;
											cont++;
											break;
										case 8: 
											A[2][1]=0;
											cont++;									
											break;
										case 9: 
											A[2][2]=0;
											cont++;
											break;
										case 10:
											A[2][3]=0;
											cont++;
											break;
										case 11: 
											A[2][4]=0;
											cont++;
											break;
										case 12: 
											A[2][5]=0;
											cont++;
											break;
										case 13: 
											A[2][6]=0;
											cont++;
											break;
										case 14: 
											A[2][7]=0;
											cont++;
											break;
										case 15: 
											A[2][8]=0;
											cont++;
											break;
										case 16: 
											A[2][9]=0;
											cont++;
											break;
										case 17: 
											A[2][10]=0;
											cont++;
											break;
										case 18: 
											A[2][11]=0;
											cont++;
											break;
										case 19: 
											A[2][12]=0;
											cont++;
											break;
										case 20: 
											A[2][13]=0;
											cont++;
											break;
										case 21: 
											A[2][14]=0;
											cont++;
											break;
										default:
											ho1=0;
											printf("\n Hora invalida, digite de nuevo: 7-21\n");
									}
									ho2=(ho1+horas);
									while(cont<=horas){
										printf("\nDigite la hora: \n");
										scanf("%i",&i);
										switch(i){
											case 7:
												A[2][0]=0;
												i=0;
												cont++;
												break;
											case 8: 
												A[2][1]=0;
												i=0;
												cont++;
												break;
											case 9: 
												A[2][2]=0;
												i=0;
												cont++;
												break;
											case 10:
												A[2][3]=0;
												i=0;
												cont++;
												break;
											case 11: 
												A[2][4]=0;
												i=0;
												cont++;
												break;
											case 12: 
												A[2][5]=0;
												i=0;
												cont++;
												break;
											case 13: 
												A[2][6]=0;
												i=0;
												cont++;
												break;
											case 14: 
												A[2][7]=0;
												i=0;
												cont++;
												break;
											case 15: 
												A[2][8]=0;
												i=0;
												cont++;
												break;
											case 16: 
												A[2][9]=0;
												i=0;
												cont++;
												break;
											case 17: 
												A[2][10]=0;
												i=0;
												cont++;
												break;
											case 18: 
												A[2][11]=0;
												i=0;
												cont++;
												break;
											case 19: 
												A[2][12]=0;
												i=0;
												cont++;
												break;
											case 20: 
												A[2][13]=0;
												i=0;
												cont++;
												break;
											case 21: 
												A[2][14]=0;
												i=0;
												cont++;
												break;
											default:
												i=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
									}
									system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
									printf("\n Generando comprobante de reservacion.\n");
									printf("\n\nIngrese su nombre completo: ");
									FILE *p;
									p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
									fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
									fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
									fputs(" Reservación a nombre de: ",p);
									scanf(" %[^\n]",&L);
									strupr(L);
									fputs(L,p);
									fputs("\n\n No. cuenta: ",p);
									printf("\nIngrese su numero de cuenta: ");
									scanf(" %[^\n]",&NoCu);
									fputs(NoCu,p);
									fputs("\n\n Día seleccionado: SÁBADO",p);
									fputs("\n\n Cajón reservado: 2",p);
									fputs("\n\n Horas reservadas: ",p);
									fprintf(p,"%i", horas);
									fputs("\n\n Hora de entrada: ",p);
									fprintf(p,"%i", ho1);
									fputs("   HRS. ",p);
									fputs("\n\n Hora de salida: ",p);
									fprintf(p,"%i", ho2);
									fputs("   HRS. ",p);
									fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
									fclose(p);
									printf("\n Comprobante generado exitosamente.\n");
								}
								else{
									horas=0;
									printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
								}
							}
							else{
								if(caj==3){
									printf("\n\n¿Cuantas horas va a reservar?:\n");
									scanf("%i",&horas);
									if(horas<=15){
										printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
										cont=1;
										printf("Digite la hora: \n");
										scanf("%i",&ho1);
										switch(ho1){
											case 7:
												A[3][0]=0;
												cont++;
												break;
											case 8: 
												A[3][1]=0;
												cont++;									
												break;
											case 9: 
												A[3][2]=0;
												cont++;
												break;
											case 10:
												A[3][3]=0;
												cont++;
												break;
											case 11: 
												A[3][4]=0;
												cont++;
												break;
											case 12: 
												A[3][5]=0;
												cont++;
												break;
											case 13: 
												A[3][6]=0;
												cont++;
												break;
											case 14: 
												A[3][7]=0;
												cont++;
												break;
											case 15: 
												A[3][8]=0;
												cont++;
												break;
											case 16: 
												A[3][9]=0;
												cont++;
												break;
											case 17: 
												A[3][10]=0;
												cont++;
												break;
											case 18: 
												A[3][11]=0;
												cont++;
												break;
											case 19: 
												A[3][12]=0;
												cont++;
												break;
											case 20: 
												A[3][13]=0;
												cont++;
												break;
											case 21: 
												A[3][14]=0;
												cont++;
												break;
											default:
												ho1=0;
												printf("\n Hora invalida, digite de nuevo: 7-21\n");
										}
										ho2=(ho1+horas);
										while(cont<=horas){
											printf("\nDigite la hora: \n");
											scanf("%i",&i);
											switch(i){
												case 7:
													A[3][0]=0;
													i=0;
													cont++;
													break;
												case 8: 
													A[3][1]=0;
													i=0;
													cont++;
													break;
												case 9: 
													A[3][2]=0;
													i=0;
													cont++;
													break;
												case 10:
													A[3][3]=0;
													i=0;
													cont++;
													break;
												case 11: 
													A[3][4]=0;
													i=0;
													cont++;
													break;
												case 12: 
													A[3][5]=0;
													i=0;
													cont++;
													break;
												case 13: 
													A[3][6]=0;
													i=0;
													cont++;
													break;
												case 14: 
													A[3][7]=0;
													i=0;
													cont++;
													break;
												case 15: 
													A[3][8]=0;
													i=0;
													cont++;
													break;
												case 16: 
													A[3][9]=0;
													i=0;
													cont++;
													break;
												case 17: 
													A[3][10]=0;
													i=0;
													cont++;
													break;
												case 18: 
													A[3][11]=0;
													i=0;
													cont++;
													break;
												case 19: 
													A[3][12]=0;
													i=0;
													cont++;
													break;
												case 20: 
													A[3][13]=0;
													i=0;
													cont++;
													break;
												case 21: 
													A[3][14]=0;
													i=0;
													cont++;
													break;
												default:
													i=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
										}
										system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
										printf("\n Generando comprobante de reservacion.\n");
										printf("\n\nIngrese su nombre completo: ");
										FILE *p;
										p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
										fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
										fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
										fputs(" Reservación a nombre de: ",p);
										scanf(" %[^\n]",&L);
										strupr(L);
										fputs(L,p);
										fputs("\n\n No. cuenta: ",p);
										printf("\nIngrese su numero de cuenta: ");
										scanf(" %[^\n]",&NoCu);
										fputs(NoCu,p);
										fputs("\n\n Día seleccionado: SÁBADO",p);
										fputs("\n\n Cajón reservado: 3",p);
										fputs("\n\n Horas reservadas: ",p);
										fprintf(p,"%i", horas);
										fputs("\n\n Hora de entrada: ",p);
										fprintf(p,"%i", ho1);
										fputs("   HRS. ",p);
										fputs("\n\n Hora de salida: ",p);
										fprintf(p,"%i", ho2);
										fputs("   HRS. ",p);
										fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
										fclose(p);
										printf("\n Comprobante generado exitosamente.\n");
									}
									else{
										horas=0;
										printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
									}
								}
								else{
									if(caj==4){
										printf("\n\n¿Cuantas horas va a reservar?:\n");
										scanf("%i",&horas);
										if(horas<=15){
											printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
											cont=1;
											printf("Digite la hora: \n");
											scanf("%i",&ho1);
											switch(ho1){
												case 7:
													A[4][0]=0;
													cont++;
													break;
												case 8: 
													A[4][1]=0;
													cont++;									
													break;
												case 9: 
													A[4][2]=0;
													cont++;
													break;
												case 10:
													A[4][3]=0;
													cont++;
													break;
												case 11: 
													A[4][4]=0;
													cont++;
													break;
												case 12: 
													A[4][5]=0;
													cont++;
													break;
												case 13: 
													A[4][6]=0;
													cont++;
													break;
												case 14: 
													A[4][7]=0;
													cont++;
													break;
												case 15: 
													A[4][8]=0;
													cont++;
													break;
												case 16: 
													A[4][9]=0;
													cont++;
													break;
												case 17: 
													A[4][10]=0;
													cont++;
													break;
												case 18: 
													A[4][11]=0;
													cont++;
													break;
												case 19: 
													A[4][12]=0;
													cont++;
													break;
												case 20: 
													A[4][13]=0;
													cont++;
													break;
												case 21: 
													A[4][14]=0;
													cont++;
													break;
												default:
													ho1=0;
													printf("\n Hora invalida, digite de nuevo: 7-21\n");
											}
											ho2=(ho1+horas);
											while(cont<=horas){
												printf("\nDigite la hora: \n");
												scanf("%i",&i);
												switch(i){
													case 7:
														A[4][0]=0;
														i=0;
														cont++;
														break;
													case 8: 
														A[4][1]=0;
														i=0;
														cont++;
														break;
													case 9: 
														A[4][2]=0;
														i=0;
														cont++;
														break;
													case 10:
														A[4][3]=0;
														i=0;
														cont++;
														break;
													case 11: 
														A[4][4]=0;
														i=0;
														cont++;
														break;
													case 12: 
														A[4][5]=0;
														i=0;
														cont++;
														break;
													case 13: 
														A[4][6]=0;
														i=0;
														cont++;
														break;
													case 14: 
														A[4][7]=0;
														i=0;
														cont++;
														break;
													case 15: 
														A[4][8]=0;
														i=0;
														cont++;
														break;
													case 16: 
														A[4][9]=0;
														i=0;
														cont++;
														break;
													case 17: 
														A[4][10]=0;
														i=0;
														cont++;
														break;
													case 18: 
														A[4][11]=0;
														i=0;
														cont++;
														break;
													case 19: 
														A[4][12]=0;
														i=0;
														cont++;
														break;
													case 20: 
														A[4][13]=0;
														i=0;
														cont++;
														break;
													case 21: 
														A[4][14]=0;
														i=0;
														cont++;
														break;
													default:
														i=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
											}
											system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
											printf("\n Generando comprobante de reservacion.\n");
											printf("\n\nIngrese su nombre completo: ");
											FILE *p;
											p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
											fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
											fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
											fputs(" Reservación a nombre de: ",p);
											scanf(" %[^\n]",&L);
											strupr(L);
											fputs(L,p);
											fputs("\n\n No. cuenta: ",p);
											printf("\nIngrese su numero de cuenta: ");
											scanf(" %[^\n]",&NoCu);
											fputs(NoCu,p);
											fputs("\n\n Día seleccionado: SÁBADO",p);
											fputs("\n\n Cajón reservado: 4",p);
											fputs("\n\n Horas reservadas: ",p);
											fprintf(p,"%i", horas);
											fputs("\n\n Hora de entrada: ",p);
											fprintf(p,"%i", ho1);
											fputs("   HRS. ",p);
											fputs("\n\n Hora de salida: ",p);
											fprintf(p,"%i", ho2);
											fputs("   HRS. ",p);
											fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
											fclose(p);
											printf("\n Comprobante generado exitosamente.\n");
										}
										else{
											horas=0;
											printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");
										}
									}
									else{
										if(caj==5){
											printf("\n\n¿Cuantas horas va a reservar?:\n");
											scanf("%i",&horas);
											if(horas<=15){
												printf("\n\nIngrese las horas que va a reservar con notacion 24 hrs.\n Ejemplo: si es en la mañana: 9, si es en la tarde/noche: 21.\n Presione ENTER para continuar.\n");  
												cont=1;
												printf("Digite la hora: \n");
												scanf("%i",&ho1);
												switch(ho1){
													case 7:
														A[5][0]=0;
														cont++;
														break;
													case 8: 
														A[5][1]=0;
														cont++;									
														break;
													case 9: 
														A[5][2]=0;
														cont++;
														break;
													case 10:
														A[5][3]=0;
														cont++;
														break;
													case 11: 
														A[5][4]=0;
														cont++;
														break;
													case 12: 
														A[5][5]=0;
														cont++;
														break;
													case 13: 
														A[5][6]=0;
														cont++;
														break;
													case 14: 
														A[5][7]=0;
														cont++;
														break;
													case 15: 
														A[5][8]=0;
														cont++;
														break;
													case 16: 
														A[5][9]=0;
														cont++;
														break;
													case 17: 
														A[5][10]=0;
														cont++;
														break;
													case 18: 
														A[5][11]=0;
														cont++;
														break;
													case 19: 
														A[5][12]=0;
														cont++;
														break;
													case 20: 
														A[5][13]=0;
														cont++;
														break;
													case 21: 
														A[5][14]=0;
														cont++;
														break;
													default:
														ho1=0;
														printf("\n Hora invalida, digite de nuevo: 7-21\n");
												}
												ho2=(ho1+horas);
												while(cont<=horas){
													printf("\nDigite la hora: \n");
													scanf("%i",&i);
													switch(i){
														case 7:
															A[5][0]=0;
															i=0;
															cont++;
															break;
														case 8: 
															A[5][1]=0;
															i=0;
															cont++;
															break;
														case 9: 
															A[5][2]=0;
															i=0;
															cont++;
															break;
														case 10:
															A[5][3]=0;
															i=0;
															cont++;
															break;
														case 11: 
															A[5][4]=0;
															i=0;
															cont++;
															break;
														case 12: 
															A[5][5]=0;
															i=0;
															cont++;
															break;
														case 13: 
															A[5][6]=0;
															i=0;
															cont++;
															break;
														case 14: 
															A[5][7]=0;
															i=0;
															cont++;
															break;
														case 15: 
															A[5][8]=0;
															i=0;
															cont++;
															break;
														case 16: 
															A[5][9]=0;
															i=0;
															cont++;
															break;
														case 17: 
															A[5][10]=0;
															i=0;
															cont++;
															break;
														case 18: 
															A[5][11]=0;
															i=0;
															cont++;
															break;
														case 19: 
															A[5][12]=0;
															i=0;
															cont++;
															break;
														case 20: 
															A[5][13]=0;
															i=0;
															cont++;
															break;
														case 21: 
															A[5][14]=0;
															i=0;
															cont++;
															break;
														default:
															i=0;
															printf("\n Hora invalida, digite de nuevo: 7-21\n");
													}
												}
												system("cls");//Se limpia la pantalla para que aparezca el siguiente proceso
												printf("\n Generando comprobante de reservacion.\n");
												printf("\n\nIngrese su nombre completo: ");
												FILE *p;
												p=fopen("COMPROBANTE DE RESERVACIÓN.txt","w+t");
												fputs("\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t ESTACIONAMIENTO DE LA FACULTAD DE INGENIERÍA\n \t\t\t\t\t COMPROBANTE DE RESERVACIÓN\n",p); 
												fputs("\n Estacionamiento seleccionado: ANEXO \n\n\n\n",p);
												fputs(" Reservación a nombre de: ",p);
												scanf(" %[^\n]",&L);
												strupr(L);
												fputs(L,p);
												fputs("\n\n No. cuenta: ",p);
												printf("\nIngrese su numero de cuenta: ");
												scanf(" %[^\n]",&NoCu);
												fputs(NoCu,p);
												fputs("\n\n Día seleccionado: SÁBADO",p);
												fputs("\n\n Cajón reservado: 5",p);
												fputs("\n\n Horas reservadas: ",p);
												fprintf(p,"%i", horas);
												fputs("\n\n Hora de entrada: ",p);
												fprintf(p,"%i", ho1);
												fputs("   HRS. ",p);
												fputs("\n\n Hora de salida: ",p);
												fprintf(p,"%i", ho2);
												fputs("   HRS. ",p);
												fputs("\n\n\n\n\n\n Gracias por su reservación. ",p);
												fclose(p);
												printf("\n Comprobante generado exitosamente.\n");
											}
											else{
												horas=0;
												printf("\nCantidad de horas invalida. No puede reservar mas de 15 horas.\n Ingrese nuevamente la cantidad de horas.\n");	
											}
										}
										else{
											printf("Numero de cajon incorrecto, vuelva a ingresarlo. 0-5");
										}
									}
								}
							}
						}
					}
					break;					
				default:
					d=0;
					printf("Dia invalido, ingrese de nuevo.");
					return 0;
			}
			system("cls");//Se limpia la pantalla para que aparezca el siguiente menú
			printf("¿Desea ver los cajones disponibles? SÍ(1) / NO(2):\n");
			scanf("%i",&ver);
			if(ver==1){
				printf("--------------------------------------------Cajones disponibles:-------------------------------------------------------\n\n -------------------------------------------------HORARIO-------------------------------------------------------\n{A[0]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{A[1]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{A[2]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{A[3]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{A[4]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},\n{A[5]: '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i',  '%i'},", A[0][0],A[0][1],A[0][2],A[0][3],A[0][4],A[0][5],A[0][6],A[0][7],A[0][8],A[0][9],A[0][10],A[0][11],A[0][12],A[0][13],A[0][14], A[1][0],A[1][1],A[1][2],A[1][3],A[1][4],A[1][5],A[1][6],A[1][7],A[1][8],A[1][9],A[1][10],A[1][11],A[1][12],A[1][13],A[1][14], A[2][0],A[2][1],A[2][2],A[2][3],A[2][4],A[2][5],A[2][6],A[2][7],A[2][8],A[2][9],A[2][10],A[2][11],A[2][12],A[2][13],A[2][14], A[3][0],A[3][1],A[3][2],A[3][3],A[3][4],A[3][5],A[3][6],A[3][7],A[3][8],A[3][9],A[3][10],A[3][11],A[3][12],A[3][13],A[3][14], A[4][0],A[4][1],A[4][2],A[4][3],A[4][4],A[4][5],A[4][6],A[4][7],A[4][8],A[4][9],A[4][10],A[4][11],A[4][12],A[4][13],A[4][14], A[5][0],A[5][1],A[5][2],A[5][3],A[5][4],A[5][5],A[5][6],A[5][7],A[5][8],A[5][9],A[5][10],A[5][11],A[5][12],A[5][13],A[5][14]);
				printf("\n\n\nGracias por su reservacion, vuelva pronto.");
			}
			else{
				if(ver==2){
					printf("\n\n\nGracias por su reservacion, vuelva pronto.");
				}
				else{
					printf("\n\n\nOpcion invalida, gracias por su reservacion.");
				}
			}
			break;
		default:
			printf("\n\n\nOpcion invalida. Vuelva pronto.");
	}
	return 0;
}
