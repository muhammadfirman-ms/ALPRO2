#include<iostream>

using namespace std;



void ubah(char *kalimat)

{

    int i;

    for(i=0;i<15;i++)

   {

        if(kalimat[i]>=65&&kalimat[i]<=90)

       {

                kalimat[i]=kalimat[i]+32;

       }

        else if(kalimat[i]>=97&&kalimat[i]<=122)

       {

                 kalimat[i]=kalimat[i]-32;

       }

   }

}



int main()

{

         char kalimat[15];

         cout<<"Masukkan kalimat : ";

         cin>>kalimat;

         ubah(kalimat);

         cout<<"Hasil : "<<kalimat;;

      return 0;

}
