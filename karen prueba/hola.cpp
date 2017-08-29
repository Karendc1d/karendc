#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}


#include 
int main(void)
{
for (int j=2;j<=100;j++){//por definicion el 1 no es primo, se empieza en 2
int a=0;
for(int i=1;i<=100;i++)//divide a j entre los números del 1 al 100
{
    if(j%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
    a++;
}
if (a==2){ 
printf("%d\n", j);
}
 }
}
