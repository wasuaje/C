/* Circulo.c: calcula el área de un círculo.
   Ejemplo para mostrar etapas de compilación.
*/
#define PI 3.1416

main()
{
  float area, radio;

  radio = 10;
  area = PI * (radio * radio);
  printf("Circulo. ");
  printf("%s%f ", "Area de circulo radio 10: ", area);

} 
