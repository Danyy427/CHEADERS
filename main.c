#include "main.h"
#include "function.h"
#include "stdio.h"
#include "definitions.h"

/*

Selam

Header filelarını kullanmak istemenin bi iki nedeni olabilir.

Bunlardan ilki yazdığın functionların prototypler'ını oluşturmak:

Aşağıda bi subtract function'ı tanımladık ama C'de normal şartlar altında o fonksiyonu main'in 
içinde kullanamayız çünkü main'in aşağısında tanımladık. Henüz tanımlanmamış şeyleri kullanmak
ölüm cezası yemene neden olur. sj zbab. Neyse o yüzden subtract fonksyionunun prototype'ını 
oluşturduk ve main.h dosyasına koyduk. Bu prototype'ı oraya koymak zorunlu değil aslında ama
boş boş yer kaplamasın diye koymak isteyebilirsin. Burada main.h dosyasına bak ***

Header file'larının ikinci işlevi başka bir C dosyasında tanımlanmış bir fonksyionun veya 
variable'ın prototype'ını/declaration'ını almak olabilir. Mesela function.c dosyasına git.

Aklıma gelen son işlevi ise diğer türlü definition gibi şeyleri tutmak
O da zaten kolay definitions.h e git.
*/

int main()
{

    printf("Hello, world!\n");

    printf("5 - 3 = %d\n", subtract(5, 3));

    printf("5 + 3 = %d\n", add(5, 3));

    printf("PI is %f\n", PI);

    printf("Magical Number is %d", magicalNumber);

    return 0;
}

int subtract(int a, int b)
{
    return a - b;
}