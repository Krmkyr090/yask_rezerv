/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int rezerv;
    int tuketim= 250;
    int yagis= 20;
    double buharlasma= 0.03;
    double GNT;
    double SDS;
        
    GNT=tuketim-yagis+(rezerv*buharlasma);
    SDS=rezerv/GNT;
    
    cout<<"rezerv miktarını girin";
    cin>>rezerv;
    if(rezerv>=100){
        cout<<"rezerv miktarı 100 den büyük olamaz";
    }
    else if(rezerv>=70){
        cout<<"normal mod: günlük tüketim değişmeyecek";
    }
    else if(rezerv<=70 & rezerv>=30){
        cout<<"tasarruf modu: tüketim yüzde 20 azaltırılacak";
        tuketim=(tuketim*20/100);
        cout<<tuketim;
    }
    else if(rezerv<=30){
        cout<<"acil durum modu: tüketim yüzde 40 azaltırılacaktır";
        tuketim=(tuketim*40/100);
        cout<<tuketim;
    }
    else{
        cout<<"hatalı giriş";
    }
    
    return 0;
}