REM Buraya bakınca 3 tane önemli satır var, gcc ile başlayanlar
REM gcc bizim compiler'ımız, yalnız bunu windows'da kullanmak
REM için MinGW diye bişe gerekiyo. Onu indirmen falan lazım uzun iş
REM bence Mac'de çalıştır.

REM her türlü, burada şunu yapıyoruz
REM ilk satırla main.c dosyasını compile ediyoruz ve bundan object file denen bişe oluşturuyoruz
REM object file'lar diğer object file'larla birleştirilebilir dosya türleridir.
REM daha sonra function.c dosyasını da object file yapıyoruz
REM üçüncü satırda da bunları birleştiriyoruz

gcc -c main.c -o main.o
gcc -c function.c -o function.o
gcc -o Program.exe main.o function.o

REM bu son iki satırın bi önemi yok İlki programı çalıştıryo
REM ikincisi de duruyo
REM şimdi main.c ye geri dön

.\Program.exe
pause