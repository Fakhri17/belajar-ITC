#include <iostream>
using namespace std;

int Lpersegi_panjang (int p, int l){
	int luaspp;
	luaspp=p*l;
	return luaspp;
}

int Lpersegi (int s){
	int luas;
	luas=s*s;
	return luas;
}

int VKubus (int s){
	int volumeKu;
	volumeKu=s*s*s;
	return volumeKu;
}

int VBalok (int p,int l,int t){
	int volumeBa;
	volumeBa=p*l*t;
	return volumeBa;
}
int Llingkaran (int r){
	float phi=3.14;
	int luasLi;
	luasLi=phi*r*r;
	return luasLi;
	
}
int main (){
	system("Color F3");
	int pilihan,s,l,p,t,r;
	string user,pass;
	char yt;
	

	cout<<"\n\n\t\t\t ===== Form Login =====\n\n ";
	
	login :
	cout<<" Default  (admin) "<<endl;
	cout<<" Masukkan Nama User = "; cin>>user;
	cout<<" Masukkan Paswword  = "; cin>>pass;
	cout<<""<<endl<<endl;
	
	
	if (user=="admin"){
		if(pass=="admin"){
			system("cls");
			goto menu;
		}
	}
	
	else {
		system("cls");
		cout<<" \nPaswword Salah\n "<<endl;
		goto login;
	}
	

	
   
   	menu:
	cout<<"\t\t\t=============== Selamat Datang Di Aplikasi X-RPL2 ===============\n\n";
   cout<<"=================================================="<<endl;
   cout<<"|| Pilihan :                                    ||"<<endl;
    cout<<"|| 1. Luas Persegi Panjang                      ||"<<endl;
	cout<<"|| 2. Luas Persegi                              ||"<<endl;
   cout<<"|| 3. Volume Kubus                              ||"<<endl;
    cout<<"|| 4. Volume Balok                              ||"<<endl;
     cout<<"|| 5. Luas Lingkaran                            ||"<<endl;
   cout<<"==================================================\n";
   pilih:
            cout<<"\nPilih Menu : ";
            cin>>pilihan;
            cout<<endl;
    
	if(pilihan==1){
		cout<<" \t\t Luas Persegi Panjang \n";
		cout<<" Masukkan Panjang = "; cin>>p;
		cout<<" Masukkan Lebar = "; cin>>l;
		cout<<" Luas Persegi panjang = "<<Lpersegi_panjang(p,l);
	}
	
	else if(pilihan==2){
		cout<<"\t\t Luas Persegi \n";
		cout<<" Masukkan sisi = "; cin>>s;
		cout<<" Luas Persegi  = "<<Lpersegi(s);
		
	}
	
	else if(pilihan==3){
		cout<<"\t\t Volume Kubus \n ";
		cout<<" Masukkan sisi = "; cin>>s;
		cout<<" Volume Kubus = "<<VKubus(s);
	
	}
	else if(pilihan==4){
		cout<<"\t\t Volume Balok \n";
		cout<<" Masukkan Panjang = "; cin>>p;
		cout<<" Masukan Lebar    = "; cin>>l;
		cout<<" Masukkan Tinggi  = "; cin>>t;
		cout<<" Volume Balok     = "<<VBalok(p,l,t);
		
	}
	else if(pilihan==5){
		cout<<"\t\t Luas Lingkaran \n ";
		cout<<" Masukan Jari-jari = "; cin>>r;
		cout<<" Luas Lingkaran    = "<<Llingkaran(r);
	}
	else{
		system("cls");
		cout<<" \nPilihan tidak tersedia\n "<<endl;
		goto menu;
	}
	
	
	
	cout<<"\n\nIngin Kembali ke Program (y/t) ?  ";
    cin>>yt;
    system ("cls");
    if(yt=='Y'||yt=='y'){
        goto menu;
        
    }
    if(yt=='T'||yt=='t'){
        goto akhir;
    }
    akhir:
    	cout<<" \n\nTerima Kasih "<<endl;
    	
    	
    return 0;
}
