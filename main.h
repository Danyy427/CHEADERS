#ifndef _MAIN_H_
#define _MAIN_H_

/*

Bu bir fonksyion prototype'ı, Bu subtract fonksiyonunu tanımlamaz, sadece declare eder.
Böyle bir şey yazdığın zaman C compiler'ına bak subtract diye bi fonksiyon var ve bunu
kullanmak valid olur diyosun. Buna rağmen eğer subtract'ı tanımlamadıysan, ki biz main.c
de tanımladık, programın hataya girip ölür. Bu sadece declare eder, varlığını gösterir 
işlemin kendisini yapmaz. 

Gelmişken şu dosyanın tepesinde bişeler var

#ifndef _MAIN_H_
#define _MAIN_H_

Bunlar only-once header yapmayı sağlıyo. Eğer projende iki farklı C dosyasından bu header'ı 
alırsan onlardan sadece birinin geçerli olmasını sağlıyo, böylece bir fonksiyonu iki kere
declare etmeye çalışmıyorsun. Yani teknik olarak şunu yapmanı engelliyo

int a = 5;

int a = 8;

Burada a'yı iki kere define ettik. İki kere define etmek günah.
Aynı şekilde bir header dosyasını birden fazla kere eklemeni önlemek için şu kalıbı kullanıyosun


#ifndef XXXX
#define XXXX

// BURADA KODUN 

#endif

Burada XXXX ler istediğin her şey olabilir ama ikisin AYNI olması lazım. 

Aynı zamanda bir fonksiyonun prototype'ı şöyle yapılır.

Fonksiyonu nasıl tanımladıysan, örneğin:

int subtract(int a, int b)
{
    return a - b;
}

tanımlanmış fonksiyonun kod içermeyen ve {} den önce gelen kısmını kopyala
ve sonuna ; koy. 

Şu şekilde:

*/

int subtract(int a, int b);

/*

Tamam şimdi main.c ye geri dön.

*/

#endif