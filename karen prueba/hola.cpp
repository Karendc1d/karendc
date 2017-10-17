//INT MAIN
#include <iostream>
#include <equipos.h>
#include <jugadores.h>
using namespace std;

int main(){

  Equipo x=("Bayern Munchen", Jugadores(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11));
    x.competir();

          Jugadores p1=("Neuer";"arquero";1;3);
            p1.jugar();
            p1.print();
          Jugadores p2=("Gotze";"defensa";20;6);
            p2.jugar();
            p2.print();
           Jugadores p3=("Hummels";"defensa";5;5);
            p3.jugar();
            p3.print();
           Jugadores p4=("Rafinha";"defensa";13;6);
            p4.jugar();
            p4.print();
           Jugadores p5=("Ribéry";"centrocampista";7;3);
            p5.jugar();
            p5.print();
           Jugadores p6=("Xabi";"centrocampista";14;6);
            p6.jugar();
            p6.print();
           Jugadores p7=("Kimmich";"centrocampista";32;8);
            p7.jugar();
            p7.print();
           Jugadores p8=("Lewandowski";"delantero";9;9);
            p8.jugar();
            p8.print();
           Jugadores p9=("Müller";"delantero";25;8);
            p9.jugar();
            p9.print();
           Jugadores p10=("Robben";"delantero";10;7);
            p10.jugar();
            p10.print();
           Jugadores p11=("Lahm";"ccentrocampista";21;6);
            p11.jugar();
            p11.print();

 Equipo y=("Borrusia Dortmun", Jugadores(q1,q2,q3,q4,q6,q7,q8,q9,q10,q11));

    y.competir();

           Jugadores q1=("Reus", "Delantero", 11, 8);
            q1.jugar();
            q1.print();
          Jugadores q2=("Abameyang", "Delantero centro", 17, 8);
            q2.jugar();
            q2.print();
           Jugadores q3=("Dembele", "Medio Campista", 11, 9);
            q3.jugar();
            q3.print();
           Jugadores q4=("Kagawa", "Medio Campista", 23, 7);
            q4.jugar();
            q4.print();
           Jugadores q5=("Burki", "Portero", 1, 5);
            q5.jugar();
            q5.print();
           Jugadores q6=("  Sokratis", "Defensa", 25, 5);
            q6.jugar();
            q6.print();
           Jugadores q7=("Bartra", "Defensa", 5, 6);
            q7.jugar();
            q7.print();
           Jugadores q8=("Subotic", "Defensa", 4, 4);
            q8.jugar();
            q8.print();
           Jugadores q9=("Gotze", "Delantero", 10, 9);
            q9.jugar();
            q9.print();
           Jugadores q10=("Castro", "Defensa", 27, 4);
            q10.jugar();
            q10.print();
           Jugadores q11=("Rode", "Volante", 18, 5);
            q11.jugar();
            q11.print();

  return 0;
}

            
            
            
   
            
 //DEFINICIÓN DE CLASE
            
 #ifndef JUGADORES_H
#define JUGADORES_H
#ifndef EQUIPO_H
#define EQUIPO_H
#endif // EQUIPO_H
#include <iostream>
#include <string>
using namespace std;

class Equipo{
  private:
    string nombre;
    class Jugadores;
  public:
    Equipo(string, class,class,class,class,class,class,class,class,class,class,class);
    void competir();
Equipo::Equipo(string z, class x){
  nombre= z;
  class Jugadores=x;
}
void competir(){
  cout<<"¡El equipo "<<nombre<<" competirá hoy!"<<endl;
}
};


class Jugadores{
  private:
    string name,posicion;
    int camiseta;agresividad;
  public:
    Jugadores(string,string,int, int);
    void jugar();
    void print();

Jugadores::Jugadores(string x,string y,int z, int w){
  name=x;
  posicion=y;
  camiseta=z;
  agresividad=w;
}
void Jugadores::leer(){
  cout<<"El jugador"<<name<<"juega en la posición de "<<posicion<<"con el número de camiseta"<<camiseta<<endl;
}
void Jugadores::print (){
  if (agresividad)>=5{
    cout<<"El jugador está muy agresivo,¡Cámbialo!"<<endl;
  }
  else {
    cout<<"EL jugador está calmado,déjalo jugar"<<endl;
  }
}
};












































#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}


#include<iostream>
using namespace std;

int main()
{
  int n=0,c=0,c2=0,res=0,nc=0;
  cout<<"Introducir un rango: "; cin>>n;
  for(c=1;c<=n;c++)
  {
    for(c2=1;c2<=c;c2++)
    {
      res=c%c2;
      if(res==0)
      {
        nc=nc+1;
      }
    }
    if(nc==2)
    {
      cout<<" "<<c;
    }
    nc=0;
  }
}





/*
#include<iostream>
using namespace std;

int main()
{
  int num,n,p,i;
  cout<<"Ingresa posicion";
  cin>>num;
  n=2;
  i=0;
  while (i<=num) 
  { for (p=2;n%p!=0;p=p+1);
  if(p==n)
  {i=i+1;
   if(i==num)
   cout<<n<<endl;
}
n=n+1;
}
return 0;
}
*/








#include <iostream>
using namespace std;
int main()
{
int mayor,menor;
float b,n,m;
double acumula=0.0;
m=0;
cout <<"Cuantos numeros quiere ingresar: " << endl;
cin >> n;
for (int cont=0,valor; n>cont; cont =cont+1){
  cout <<"Ingrese un numero: "<< endl;
  cin>>valor;
  m+=valor;
  if(cont==0){
    mayor=valor;
    menor= valor;
  }
  else{
    mayor=valor>mayor?valor:mayor;
    menor=valor<menor?valor:menor;
}
  }
   cout<<"El mayor es"<<mayor<<endl;
    cout<<"El menor es"<<menor<<endl;
    b=m/n;
;cout<<"El promedio es"<<b;}




/*
#include <iostream>
using namespace std;
long long accumulator=1;
int main()
{
  short number;
  cout<<"Enter a number";
  cin>>number;
  cout<<"The factorial of "<<number<<" is "; 
int accumulator =1;
for (;number>0;accumulator *= number--);
cout <<accumulator<<" ./n";
if(accumulator<0){
    cout<<"es negativo";

}

return 0;
}
*/


#include <iostream>
using namespace std;
int main()
{ 
int N;
cin>>N;
do{
  cout<<"Hello World!/n";
}while(--N>0);

return 0;
}
  
###ELSE : 
