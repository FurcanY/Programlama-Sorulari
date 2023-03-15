#include <iostream>
using namespace std;


/*
(Hanoi’nin kuleleri) Bütün bilgisayar bilimcileri mutlaka bazi klasik problemlerle ugrasmislardir. 
Bunlarin en ünlüsü Hanoi'nin kuleleridir. Bir efsaneye göre uzak dogudaki 
din adamlari bir grup diski bir çubuktan digerine tasimaya çalismaktadirlar.
Ilk grupta 64 disk vardir ve çubuga an altta en büyük disk olmak üzere büyükten küçüge dogru dizilmislerdir. 
Din adamlari bu diskleri ilk çubuktan digerine, her seferinde yalniz bir disk tasimak ve küçük 
diskin üzerine hiç bir zaman büyük disk koymamak kosuluyla tasimak zorundadirlar. 
Üçüncü bir çubuk ise diskleri geçici olarak tasimak için kullanilmaktadir. Din adamlari bu isi 
bitirdiginde dünyanin sonu gelecektir. 
Din adamlarinin diskleri birinci çubuktan üçüncü çubuga tasiyacaklarini kabul edelim ve her 
diskin transferi için bir algoritma yazalim. 
Eger bu probleme klasik yöntemlerle yaklasacak olursak diskleri tasimada hemen ümitsizlige 
düseriz ama probleme yineleme mantigiyla yaklasacak olursak problem daha çözülebilir bir 
hale gelecektir.
 n tane diski tasimak n-1 tane diski tasimak gibi asagidaki gibi düsünülebilir.
1. n - 1 diski 1. çubuktan 2. çubuga, 3 çubugu geçici olarak kullanarak tasi
2. en son(en büyük) diski 1. çubuktan 3. çubuga tasi
3. n-1 diski 2. çubuktan 3. çubuga 1. çubugu geçici olarak kullanarak tasi.
Islem, son görev olan n = 1 diskide tasindiginda biter. Bu görev ise geçici bir çubuk kullanilmadan basarilir.
Hanoi'nin kuleleri problemini çözen bir program yaziniz. Yineleme fonksiyonunu dört 
parametre ile kullaniniz.
1. Tasinacak disk sayisi
2. Disklerin ilk bulundugu çubuk
3. Disklerin tasinacagi çubuk
4. Disklerin tasinmasinda kullanilacak geçici çubuk

*/

void hanoi(int n,int baslangic, int ara,int bitis){
	if(n==1){
		cout<< baslangic <<" numarali cubuktan "<<bitis<<" numarali cubuga yerlestir\n";
		return;		//Islem bitisi cunku son disk tasindi
	}
	hanoi(n-1,baslangic,ara,bitis);
	hanoi(1,baslangic,bitis,ara);
	hanoi(n-1,ara,bitis,baslangic);
		
}

int main(){
	
int disk,cubuk1(1),cubuk2(2),cubuk3(3);// degerleri kacinci cubuk oldugunu gosterir.
cout<< "cubuk1 disklerin oldugu cubuktur.\ncubuk3 disklerin tasinmak istendigi cubuktur.\ncubuk2 gecici olarak kullanilan cubuktur.\n";
cout<< "Disk sayisini giriniz.\n";
cin>>disk;
hanoi(disk,cubuk1,cubuk2,cubuk3);
	






}
