#include <iostream>

using std::std::cout;
using std::endl;

void funcion (double*u,double x_min, double dx, int n);
void evolucion_T();

void funcion(double *u, double xmin, double dx, int n)
{
  for (int i=0; i<n; i++)
  {
      double u[i];

      x= x_min + i*dx

      if (x>0.75 && x<= 1.25)
      {
        u[i]=1.0
      }
      else
      {
        u[i]=0.0

      }
  }
}

void evolucion_T(){
  int i;
  for (int i=0; i<2.0; i= i+0.1){
    k= c*dt/dx (i*dx+dx)
  }
  int main(){
     double *u;
	   double dx=0.1, dt=0.01;
	   double x_min=0.0, x_max=2.0;
	   double T=0.5,c=1.0;
     double x_max=2.0,xmin=0.0;

     int x;
     evolucion_T();
  }
}
