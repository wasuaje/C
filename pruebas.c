#include <stdio.h>
struct emp
{          
	int eno;
	char name[20];
	float sal;
};
int main()
{
	struct emp e;
           
	printf("Introducir el número de empleado    :"); scanf("%d", &e.eno);
	printf("Introducir el nombre de empleado    :"); scanf("%s", e.name);
	printf("Escriba el salario del empleado     :"); scanf("%d", &e.sal);
	printf("\n\nLos detalles del empleado son los siguientes.:\n");
	printf("%d    %s      %d\n", e.eno, e.name, e.sal);
	return 0;
}
