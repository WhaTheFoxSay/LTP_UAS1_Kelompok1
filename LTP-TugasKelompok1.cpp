#include <stdio.h>

#include <iostream>

using namespace std;



class suhu


{

public :

	float c, k, f, r;

      void celcius ()

      {

	cout<<"PROGRAM C++ KONVERSI SUHU DARI CELCIUS\n";
	cout<<"Masukan Suhu : ";
	cin>>c;

	k = c+273.15;
	f = (c*1.8)+32;
	r = c*0.8;

	cout<<"\nHasil Celcius Ke Kelvin     : "<<k;
	cout<<"\nHasil Celcius Ke Fahrenheit : "<<f;
	cout<<"\nHasil Celcius Ke Reamur    : "<<r;

            cout<<endl;

      }


      void kelvin ()

      {

	cout<<"PROGRAM C++ KONVERSI SUHU DARI KELVIN\n";
	cout<<"Masukan Suhu : ";
	cin>>k;

	c = k-273.15;
	f = k*1.8-459.67;
	r = (k-273.15)*0.8;

	cout<<"\nHasil Kelvin Ke Celcius     : "<<c;
	cout<<"\nHasil Kelvin Ke Fahrenheit : "<<f;
	cout<<"\nHasil Kelvin Ke Reamur    : "<<r;

            cout<<endl;

      }


      void fahrenheit ()

      {

	cout<<"PROGRAM C++ KONVERSI SUHU DARI FAHRENHEIT\n";
	cout<<"Masukan Suhu : ";
	cin>>f;

	c = (f-32)/1.8;
	k = (f+459.67)/1.8;
	r = (f-32)*0.44;

	cout<<"\nHasil Fahrenheit Ke Celcius     : "<<c;
	cout<<"\nHasil Fahrenheit Ke Kelvin : "<<k;
	cout<<"\nHasil Fahrenheit Ke Reamur    : "<<r;

            cout<<endl;

      }
	  
	        void reamur ()

      {

	cout<<"PROGRAM C++ KONVERSI SUHU DARI REAMUR\n";
	cout<<"Masukan Suhu : ";
	cin>>r;

	c = r/0.8;
	k = r/0.8 + 273.15;
	f = r*2.25+32;

	cout<<"\nHasil Reamur Ke Celcius     : "<<c;
	cout<<"\nHasil Reamur Ke Kelvin : "<<k;
	cout<<"\nHasil Reamur Ke Fahrenheit    : "<<f;

            cout<<endl;

      }

};

int main()

{

      int pilihan;

      atas :

      suhu x;

      cout<<"================================================================================"<<endl;

      cout<<"\t\t_ \t\t\t"<<endl;

      cout<<"\t\tObject Oriented Programming ( OOP ) C++ \t\t\t"<<endl;

      cout<<"================================================================================"<<endl;

      cout<<" Menu Pilihan "<<endl;

      cout<<" 1. KONVERSI SUHU DARI CELCIUS "<<endl;

      cout<<" 2. KONVERSI SUHU DARI KELVIN "<<endl;

      cout<<" 3. KONVERSI SUHU DARI FAHRENHEIT "<<endl;
	  
	  cout<<" 4. KONVERSI SUHU DARI REAMUR "<<endl;

      cout<<" 5. Exit Program "<<endl;

      cout<<endl;

      cout<<" Input Nomor Menu Pilihan = ";cin>>pilihan;

      cout<<endl;


      switch (pilihan)

      {

      case 1 : x.celcius ();

            goto atas;

            break;

      case 2 : x.kelvin ();

            goto atas;

            break;

      case 3 : x.fahrenheit ();

            goto atas;

            break;
			
      case 4 : x.reamur ();

            goto atas;

            break;			

      case 5 : exit:

            cout<<" Anda Kembali ke Halaman Program "<<endl;

            break;

      default: cout <<"Anda Salah Input Pilihan"<<endl;

            goto atas;


      }

      system ("pause");

      return 0;

}
