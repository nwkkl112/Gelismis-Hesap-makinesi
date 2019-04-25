#include <iostream>

using namespace std;

void toplama (int sayi1,int sayi2);
void cikarma (int sayi1,int sayi2);
void carpma (int sayi1,int sayi2);
void bolme (int sayi1,int sayi2);
void faktoriyel (int sayi1);
void mutlakdeger (int sayi1);
void kuvvetalma(int tabansayi,int ustsayi);
bool kontrolalma(bool kontrolifadesi);
bool kontroldevam (bool kontrolal);


int main () {
	
int secenek,sayilar1,sayilar2;
bool kontrol=0;

cout<<"Hesap Makinesi Programina Hosgeldiniz !----Created by Samet Yucel ! \n\n**************** *************** ****************\n";

do{
	cout<<"\n\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n5-Faktoriyel\n6-Mutlak Deger\n7-Kuvvet Alma\n8-Cikis";
	cout<<"\nYapmak istediginiz Islemi Seciniz :";
	cin>>secenek;
	while(secenek <1 || secenek > 8)
	{
		cout <<"Girmeniz gereken aralik 1-8 arasinda olmalidir.";
		cin>>secenek;
	}
	
	if (secenek ==1){
		cout<<"1. Sayiyi giriniz : ";
		cin>>sayilar1;
		cout<<"2. Sayiyi giriniz : ";
		cin>>sayilar2;
		
		toplama (sayilar1,sayilar2);
	}
	else  if (secenek ==2){
		cout<<"1. Sayiyi giriniz : ";
		cin>>sayilar1;
		cout<<"2. Sayiyi giriniz : ";
		cin>>sayilar2;
		
		cikarma (sayilar1,sayilar2);
	}
		else  if (secenek ==3){
		cout<<"1. Sayiyi giriniz : ";
		cin>>sayilar1;
		cout<<"2. Sayiyi giriniz : ";
		cin>>sayilar2;
		
		carpma (sayilar1,sayilar2);
	}
		else  if (secenek ==4){
		cout<<"1. Sayiyi giriniz : ";
		cin>>sayilar1;
		cout<<"2. Sayiyi giriniz : ";
		cin>>sayilar2;
		
		bolme (sayilar1,sayilar2);
	}
		else  if (secenek ==5){
		cout<<"Faktoriyelini Almak istediginiz Sayiyi giriniz : ";
		cin>>sayilar1;	
	faktoriyel (sayilar1);
	}
		else  if (secenek ==6){
		cout<<"Mutlak Degerini Almak istediginiz Sayiyi giriniz : ";
		cin>>sayilar1;	
	mutlakdeger (sayilar1);
	}
		else  if (secenek ==7){
		cout<<"Taban sayiyi giriniz : ";
		cin>>sayilar1;
		cout<<"Kuvvetini  giriniz : ";
		cin>>sayilar2;
		
		kuvvetalma (sayilar1,sayilar2);
	}
	
	else{
		kontrolalma(kontrol);
			}
	
	
}
	
	while(kontroldevam (kontrol)); {
		cout<<"Hesap Makinesinden ciktiniz !--- IYI GUNLER..---SAMET YUCEL ";
	
	}
	
	
}
void toplama (int sayi1,int sayi2){

cout<<"Toplam = "<<sayi1+sayi2;	
	
}
void cikarma (int sayi1,int sayi2){
	
	if(sayi1 < sayi2)
cout<<"Fark= "<<sayi2-sayi1;	
else if (sayi2 < sayi1)
cout<<"Fark = "<<sayi1-sayi2;
else
cout<<"Fark = "<<sayi1-sayi2;
	
}
void carpma (int sayi1,int sayi2){

cout<<"Toplam = "<<sayi1*sayi2;	
	
}
void bolme (int sayi1,int sayi2){

cout<<"Toplam = "<<sayi1/sayi2;	
	
}
void faktoriyel (int sayi1){

   int faktoriyel =1;
	for(int i=1; i<=sayi1;i++){
	faktoriyel = faktoriyel * i;
	}
	cout<<sayi1<<"! = "<<faktoriyel;
}

void mutlakdeger (int sayi1){
	if (sayi1 < 0 ){
		sayi1 = -1*sayi1;
	}
	else{
		sayi1=sayi1*1;
	}
	cout<<"Mutlak Deger = " <<sayi1;
}

void kuvvetalma(int tabansayi,int ustsayi){
	int kayitedilensayi=tabansayi;
	for (int i=1;i<ustsayi;i++)
	{
		tabansayi=kayitedilensayi*tabansayi;
	}
	cout<<kayitedilensayi << "uzeri"<<ustsayi<<"= "<<tabansayi;
	}

bool kontrolalma(bool kontrolifadesi)
{
	kontrolifadesi=false;
	return kontrolifadesi;
}

bool kontroldevam(bool kontrolal){
	
	int devammi;
	cout<<"\nHesap makinesine devam etmek istiyormusunuz ? 1-EVET 2-HAYIR :";
	cin>>devammi;
	
	while( devammi <1 || devammi > 2){
	
	cout<< "1 veya 2 degerini seciniz ";
	cin>>devammi;
}
	if (devammi == 1  ){
		kontrolal=true;
	}
	else{
		kontrolal =false;
	}
	return kontrolal;
}






