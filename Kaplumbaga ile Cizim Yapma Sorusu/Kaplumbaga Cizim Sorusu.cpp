#include <iostream>
#include <string>
using namespace std;

#define BOYUT 50
/*
Kisisel kullanicilar arasinda oldukça popüler olan Logo dili, kaplumbaga grafiklerini 
de popüler yapmistir. Bir C programi kontrolünde, mekanik bir kaplumbaganin bir odada 
yürüdügünü düsünün. Kaplumbaga yukari ya da asagi pozisyonda olmak üzere bir kalem 
tutmaktadir. Kalem yukari pozisyonda ise, kaplumbaga yürürken, yürüdügü yolu çizmektedir. 
Kalem asagi pozisyondayken ise hiçbir sey çizmeden serbestçe yürür. Bu problemle 
kaplumbaganin hareketlerini gerçekleyeceksiniz. 
50’ye 50’lik yer isminde ve ilk degerleri 0 olan bir dizi kullanin. Emirleri, bu emirleri içeren 
bir diziden okuyun. Kalem asagi veya yukari pozisyondayken, kaplumbaganin her hareketini 
yani o andaki konumunu saklayin. Kaplumbaga her zaman 0’a 0’dan baslasin. Kaplumbagaya 
verilecek komutlar asagidadir. 

Emir Anlami
1 		Kalem yukari
2 		Kalem asagi
3 		Saga dön
4       Sola dön
5,10   ileri 10 adim at	 (ya da 10’dan büyük bir sayi)
6 50’ye 50’lik diziyi yazdir.
9 Verinin sonu


*/
class Alan{
private:
	int alan[BOYUT][BOYUT];
	bool aktifMi;
	int pozx,pozy;
	int eksen;// 0= +x(sag)  1= +y(ust) 2=-x(sol)  3= -y(alt)
public:
	
	Alan(){
		for(int i=0;i<50;i++){
			for(int j=0;j<50;j++){
				alan[i][j]=0;
			}	
		}
		alan[0][0]=1;
		aktifMi=true;
		pozx=0;
		pozy=0;
		eksen=3;
	}
	void aktif(){
		alan[pozy][pozx]=1;
		cout<< "Aktif edildi\n";
		aktifMi=true; 
	}
	void deaktif(){
		alan[pozy][pozx]=0;
		cout<< "Deaktif edildi\n";
	 	aktifMi=false; 
	}
	void eksenSag(){
		eksen--;
		if(eksen==-1)
			eksen=3;
	}
	void eksenSol(){
		eksen++;
		if(eksen==4)
			eksen=0;
	}
	void adim(int n){
		
			if ( eksen==0 and pozx+n<50  and aktifMi ){//sag
				
				for (int i=0;i<n;i++){
					pozx++;
					alan[pozy][pozx]=1;
					
					}
					cout << n << "adim saga gidildi\n";
			}
			
			else if ( eksen==0 and pozx+n<50  and !aktifMi ){//sag kalem kapali
				pozx+=n;
				cout << n << "adim saga gidildi\n";
			}
			
			else if ( eksen==1 and pozy-n>=0  and aktifMi ){//ust
				
				for (int i=0;i<n;i++){
					pozy--;
					alan[pozy][pozx]=1;
					
				}
				cout << n << "adim uste gidildi\n";
			} 
			
			else if ( eksen==1 and pozy-n>=0  and !aktifMi ){//ust kalem kapali
				pozy-=n;
				cout << n << "adim uste gidildi\n";
			}
			
			else if ( eksen==2 and pozx-n>=0  and aktifMi ){ //sol
				
				for (int i=0;i<n;i++){
					pozx--;
					alan[pozy][pozx]=1;
					
					}
					cout << n << "adim sola gidildi\n";
			}
			
			else if ( eksen==2 and pozx-n>=0  and !aktifMi ){ //sol kalem kapali 
				pozx-=n;
				cout << n << "adim sola gidildi\n";
			}
			
			else if ( eksen==3 and pozy+n<50 and aktifMi ){//alt
				
				for (int i=0;i<n;i++){
					pozy++;
					alan[pozy][pozx]=1;
					
					}
					cout << n << "adim alta gidildi\n";
			}
			
			else if ( eksen==3 and pozy+n<50 and !aktifMi ){//alt kalem kapali
				pozy+=n;
				cout << n << "adim alta gidildi\n";
			}
			
			else
				cout<< "Alanin sinirlarini astiniz.Islem gerceklesmedi !\n";
			}
			
				
	
	
	
	void goster(){
		cout << " 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0\n";
		for(int i=0;i<50;i++){
			for(int j=0;j<50;j++){
				if(alan[i][j]==0)
					cout<< "  ";
				else
					cout<<" X";
			}
			cout<<"\n";
		}
		cout << " 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0\n";	
	}
};

int main(){
	Alan alan ;
	int cevap=0;
	cout << "Kaplumbaga cizim programina hos geldiniz.\n";
	cout << "Kaplumbagamiz 50 50 lik alanda 0 0 kordinatindan baslar\n kaplumbaga asagi dogru bakar.\nKALEM AKTIFTIR\n";
	
	
	
	while(1){
		cout << "\n\n\n 	EMIRLERIN ANLAMI	\n\n";
		cout << "1 Kalem yukari(Aktif)\n"; 
		cout << "2 Kalem asagi(Deaktif)\n";
		cout << "3 Saga don\n";
		cout << "4 Sola don\n";
		cout << "5 daha sonra 10. ileri 10 adim at (ya da 10’dan buyuk bir sayi)\n";
		cout << "6 50'ye 50'lik diziyi yazdir.\n";
		cout << "9 Verinin sonu\n";
		cout << "\nHangi islemi yapacaksiniz ?\n";
		cin >> cevap;
		switch(cevap){
			case 1:{
				alan.aktif();
				break;
			}
			case 2:{
				alan.deaktif();
				break;
			}
			case 3:{
				alan.eksenSag();
				break;
			}
			case 4:{
				alan.eksenSol();
				break;
			}
			case 5:{
				cout << "Kac adim gidilecegini yaziniz.\n";
				cin >> cevap;
				alan.adim(cevap);
				break;
			}
			case 6:{
				alan.goster();
				break;
			}
			
			case 9:{
				cevap=-1;
				break;
			}
			default:{
				cout<< "Yanlis islem.\n";
				break;
			}
			
	}// switch sonu;
	if(cevap==-1)
		break;
		
	}// while sonu
	return 0;	
}
