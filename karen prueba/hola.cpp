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
int n,mayor,menor;
double b;
double acumula=0.0;
cout <<"Cuantos numeros quiere ingresar: " << endl;
cin >> n;
for (int cont=0,valor; n>cont; cont =cont+1){
  cout <<"Ingrese un numero: "<< endl;
  cin>>valor;
  if(cont==1){
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
    b=mayor+menor//2;
;cout<<"El promedio es"<<b;}

