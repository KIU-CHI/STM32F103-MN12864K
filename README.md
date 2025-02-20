Data sent from the PC via USB-CDC is transferred to the VFD shift register using SPI.  
It should probably be readable by CubeIDE.  



Dot matrix VFD: Noritake-itron MN12864K  
Controller: STM32F103C8T6

How it works:  
https://www.youtube.com/watch?v=NXZxu2gnCLk&lc=UgwOdR69hRxk6XAkEa54AaABAg  

This Python program should be able to send video:
https://github.com/KIU-CHI/SerialVideoSenderForVFD