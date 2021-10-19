#include "function.h"

int magicalNumber = 31;

/*

Burada add diye bir fonksiyon tanımladık ve bi de magicalNumber diye bir değişken var
Biz bunları main.c'den kullanmak isteseydik direkt olarak kullanamazdık. Bunun için iki
şey yapmamız lazım. Birincisi bunların bir prototype'ını/declaration'ını oluşturmak. 

function.h dosyasına git

*/

int add(int a, int b)
{
    return a + b;
}