# Hanoi-Sorusu
Hanoi disk tasima probleminin recursive fonksiyonu ile kodlanmasi


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



NOT: Kodda disklerin yerleri sorudakinden farkli yerlestirilmistir. Soruda ana mantigini anlatmak icin cubuklar soylenimstir.
