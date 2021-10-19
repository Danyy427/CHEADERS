

#!/bin/bash

# Bu dosya ile run.bat dosyası arasında pek fark yok
# Gereken her şeyi ona yazdım
# Ona gitmeden önce
# Bu kodun çalışmama ihtimali çok yüksek
# run.bat bende çalışıyo gerçi ama run.sh'yi denemedim.
# Çalışmazsa bana söyle
# Bu kod dediğim de C kodu değil, compile etme kodu
# diğer koda git (run.bat)

gcc -c main.c -o main.o
gcc -c function.c -o function.o
gcc -o Program main.o function.o

# Bundan sonrası önemsiz

./Program
pause 'Press [Enter] key to continue...'


function pause(){
   read -p "$*"
}