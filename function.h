#ifndef _FUNCTION_H_
#define _FUNCTION_H_

int add(int a, int b);

extern int magicalNumber;

/*

Yukarıda add fonksiyonunun prototype'ı var, altında da şöyle bir satır var:

extern int magicalNumber;

C dosyaları compile edilirken "linking" adı verilen bişe yapılıyo. Onu da şöyle düşün
İki tane C dosyamız var, ikisini de ayrı ayrı compile ediyoruz. Daha sonra birbirlerine
erişmelerini sağlamak için onları tek bir dosyaya sıkıştırıyoruz. Bu sıkıştırma işlemini yapmadan
önce bütün tanımlamalrın çoktan yapılması lazım ki compiler, compile ederken hata vermesin.
Örneğin main.c dosyası add fonksyionunun protype'ı olmadan compile etmez. Bu header'ı include edip
add fonksiyonunu kullansa bile function.c dosyası ile "link" edilmeden de doğru bi şekilde çalışması mümkün 
değildir.

Bu yüzden şimdi linking yapıcaz
Onun için de run.bat (Windows için) veya run.sh (Mac/Linux) için dosyalarına bak.

*/

#endif