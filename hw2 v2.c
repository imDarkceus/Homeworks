#include <stdio.h>
main(){
printf("%s","SL NO");
printf("%10s","Item");
printf("%23s","Quantity");
printf("%10s","Price");
printf("%15s","Total Cost\n");
printf("------------------------------------------------------------------------\n");
// 1st line
printf("%d",1);

printf("%23s","Resistor(220 ohm)");
printf("%10d",5);
printf("%13.2f",1.20);
printf("%10.2f\n",6.00);
//2nd line
printf("%d",2);
printf("%23s","Resistor(10K ohm)");
printf("%10d",3);
printf("%13.2f",1.20);
printf("%10.2f\n",3.60);
//3rd line
printf("%d",3);
printf("%26s","Capacitor(2.2mF,15V)");
printf("%7d",2);
printf("%13.2f",5.50);
printf("%10.2f\n",11.00);
//4th line
printf("%d",4);
printf("%27s","Battery(18650,Li-ion)");
printf("%6d",1);
printf("%13.2f",360.00);
printf("%10.2f\n",360.00);
// 5th line
printf("%d",5);
printf("%11s","Wires");
printf("%22c",'-');
printf("%13.2f",20.00);
printf("%10.2f\n",20.00);
}
