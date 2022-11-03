#include <stdio.h>
// Klavyeden girilen 3 tam sayının ortalamasını bulur

int main() 

{

 int x,y,z;
 
 printf("3 adet tam sayi girin: ");
 scanf("%d %d %d",&x,&y,&z);
 
 double ort = (double)(x + y + z) / 3; 
 
 printf("ortalama: %.2lf",ort);

 return 0;

}