# Registration_And_Login_System

First of all, its usage is as follows:

-When we open the program, we cannot log in directly because we have to register first.


 -After registration, the program gives us our username.
 
 
-Our username is created automatically, to explain, it assigns the word up to the '@' sign of the email we enter as username.


- When the recording process is finished, the program terminates with exit code 0.


-If the recording process is finished, if it sends you to the menu, 

the file where your information is stored would not have been created and the program must be terminated for it to be created.


- Reopen the program


-Login with username and password.


-If your username is correct and your password is wrong, it warns that your password is incorrect and throws you back to the menu.

- It detects which of your user name and password is wrong, and throws you back to the menu in all kinds of options. For example, your password is correct but your username is incorrect. 

It gives you this information and throws you back to the menu. 

If your two information cannot be found in the system, it will give a user not found warning and send you to the menu again.


- When you register once, a save file is created.

If you press the -Delete all accounts option, the file containing the created registration information will be deleted. If you run the program after this process and select the login option, the login screen will not appear because the login option is only active when the program can find the save1.txt file. When you enter the "save1.txt" file, you can see ridiculous symbols. 
The fwrite() function writes all information in " binary", so you can't read it, in short, the computer writes it in its own language.


-In short, if you register, the file is created and the login screen becomes active.