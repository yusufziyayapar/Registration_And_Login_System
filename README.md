# Registration_And_Login_System
-------------------------------------
              ENGLISH
-------------------------------------
First of all, its usage is as follows:

-When we open the program, we cannot log in directly because we have to register first.


-After registration, the program gives us our username.
Our username is created automatically, to explain briefly, it assigns the word up to the '@' sign of the email we enter as username.


-When the recording process is finished, the program terminates with exit code 0.


-If the recording process is finished, if it sends you to the menu, the file where your information is stored would not have been created and the program must be terminated for it to be created.


-Reopen the program


-Login with username and password.
If your username is correct and your password is wrong, it warns that your password is incorrect and throws you back to the menu.


-It detects which of your user name and password is wrong, and throws you back to the menu in all kinds of options. For example, your password is correct but your username is incorrect. It gives you this information and throws you back to the menu. If your two information cannot be found in the system, it will give a user not found warning and send you to the menu again.


-Once you register, a save file is created and the program runs.


-If you press the "Delete all accounts" option, the file with the created registration information will be deleted. You can use it to delete your account. If you run the program after this process and select the login option, the login screen will not appear because the login option only activates when it can find the program save file, that is, the "save1.txt" file. In short, if you register, the file is created and the login screen becomes active.


-The fwrite() function writes all information in "binary", so you can't read it, in short, the computer writes it in its own language.


-------------------------------------
              TURKISH
-------------------------------------
??ncelikle kullan??m?? ????yledir :

-Program?? a????nca direkt olarak giri?? yapam??yoruz ????nk?? ??ncelikle kay??t olmam??z laz??m.


-Kay??t olduktan sonra program bize kullan??c?? ad??m??z?? veriyor. 
Kullan??c?? ad??m??z otomatik olu??uyor k??saca a????klamak gerekirse girdi??imiz emailin '@' i??aretine kadar olan kelimeyi username olarak at??yor.


-Kay??t i??lemi bitince program ????k???? kodu 0 ile sonland??r??l??yor.
Kay??t  i??lemi biter bitmez sizi menuye atsayd?? bilgilerinizin sakland?????? dosya olu??mam???? oluyor ve olu??mas?? i??in program??n sonlanmas?? laz??m. 


-Program?? tekrar a????yoruz


-Kullan??c?? ad?? ve ??ifre ile giri?? yap??yoruz. 
Kullan??c?? ad??n??z do??ru ??ifreniz yanl???? ise ??ifreniz yanl????t??r diye uyar?? veriyor ve sizi menuye geriye at??yor.


-Kullan??c?? ad??n??z ve ??ifrenizden hangisinin yanl???? oldu??unu tespit ediyor her t??rl?? se??enekte sizi menuye geri at??yor ??rnek olarak ??ifreniz do??ru ama kullan??c?? ad??n??z hatal?? size bu bilgiyi vererek menuye geri at??yor. E??er iki bilginizde sistemde kay??tl?? bulunam??yorsa kullan??c?? bulunamad?? uyar??s?? verir ve sizi  yine menuye  atar.


-Bir kere kay??t oldu??unuzda save dosyas?? olu??ur ve program ??al??????r. 


-Delete all accounts se??ene??ine basarsan??z olu??turulan kay??t bilgilerinin oldu??u dosya silinir hesab??n??z?? silmek i??in onu kullanabilirsiniz. E??er bu i??lemden sonra program?? ??al????t??r??p giri?? se??ene??ini se??erseniz giri?? yapma ekran?? gelmeyecektir ????nk??  giri?? se??ene??i sadece program kay??t dosyas??n?? yani "save1.txt" dosyas??n?? bulabildi??i zaman aktif etmektedir. K??sacas?? ya kay??t olursan??z dosya olu??ur giri?? ekran?? aktifle??ir.


-"save1.txt" dosyas??na girdi??inizde sa??ma semboller g??rebilirsiniz. fwrite() i??levi t??m bilgileri "binary" olarak yazar, bu nedenle okuyamazs??n??z, k??sacas?? bilgisayar kendi dilinde yazar.
