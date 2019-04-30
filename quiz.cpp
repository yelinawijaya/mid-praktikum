#include <iostream.h>
#include <conio.h>

main()
{
char nama[30],nim[8];
int A,B,C,D,E,totalnt,nilaim,nilaif,na,totalt;
cout<<"Masukkan Nama: ";cin>>nama;
cout<<"Masukkan NIM: "; cin>>nim;
cout<<"Masukkan nilai tugas 1: ";cin>>A;
cout<<"Masukkan nilai tugas 2: ";cin>>B;
cout<<"Masukkan nilai tugas 3: ";cin>>C;
cout<<"Masukkan nilai mid: ";cin>>D;
cout<<"Masukkan nilai final: ";cin>>E;
totalnt=(A+B+C)/3;
totalt=totalnt*20/100;
nilaim=D*40/100;
nilaif=E*40/100;
na=totalt+nilaim+nilaif;

cout<<"\n Menghitung Nilai Huruf";
cout<<"\n Nama Mahasiswa= " <<nama;
cout<<"\n NIM= "<<nim;
cout<<"\n Nilai Akhir Mahasiswa = "<<na;
cout<<"\n Nilai Akhir Mahasiswa = "<<na;
clrscr();
if (na>= 80 && 100)
	cout<<"Nilai Huruf A";
else if (na>=70 && 79)
	cout<<"Nilai Huruf B";
else if (na>= 60 && 69)
	cout<<"Nilai Huruf C";     
else if (na>= 50 && 59)
	cout<<"Nilai Huruf D";
else if (na<= 0 && 50)
	cout<<"Nilai Huruf E";
getch();
}
