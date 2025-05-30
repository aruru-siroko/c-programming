#include <stdio.h>
float chouhoukei (float tate, float yoko);
int main(){
float mennseki=chouhoukei(5.0,3.0); 
printf("%f\n",mennseki);
return 0;

}

float chouhoukei(float tate,float yoko){
float mennseki;
mennseki=tate*yoko;
return mennseki;

}
