#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 int NIM,kode;
 char nomer[15];
 char nama[50];
 char prodi[50];
 char jeniskelamin[50];
 char lagi;
 ulang :
 clrscr();
 cout<<" Program Input Data Mahasiswa "<<endl;
 cout<<"=============================="<<endl;
 cout<<endl;
 cout<<" Masukkan NIM  : ";
 cin>>NIM;
 cout<<" Masukkan Nama : ";
 cin>>nama;
 pil :

 cout<<" Pilih Kode Prodi (1, 2, 3)"<<endl;
 cout<<" 1. D3 Komputer Akuntansi"<<endl;
 cout<<" 2. D3 Manajemen Informatika"<<endl;
 cout<<" 3. S1 Informatika"<<endl;
 cout<<" Masukkan Kode Prodi : ";
 cin>>kode;
 switch(kode)
 { 	case 1 :
      {
      	strcpy(prodi,"D3 Komputer Akuntansi");
         break;
      }
      case 2 :
      {
      	strcpy(prodi,"D3 Manajemen Informatika");
         break;
      }
      case 3 :
      {
      	strcpy(prodi,"S1 Informatika");
         break;
      }
 		default:
      cout<<endl;
		cout<<"Kode Prodi yang Anda Masukkan Salah!!"<<endl
      <<"Tekan Sembarang Tombol untuk Mengulang!!"<<endl;
      cout<<endl;
      getch();
      goto pil;
 }

 cout<<" Masukkan Jenis Kelamin [Laki-Laki/Perempuan] : ";
 cin>>jeniskelamin;
 cout<<" Masukkan No. HP : ";
 cin>>nomer;
 cout<<endl;
 cout<<endl;
 cout<<" NIM 	       : "<<NIM<<endl;
 cout<<" Nama 	       : "<<nama<<endl;
 cout<<" Prodi	       : "<<prodi<<endl;
 cout<<" Jenis Kelamin : "<<jeniskelamin<<endl;
 cout<<" No HP         : "<<nomer<<endl;
 cout<<endl;
 cout<<"Isi Data Lagi? [Y/T]";
 cin>>lagi;
 if (lagi=='Y')
 goto ulang;}
