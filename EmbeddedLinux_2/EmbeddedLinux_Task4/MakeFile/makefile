fileSrc1 = ../SrcCode/APP/main.c

fileSrc2 = ../SrcCode/MCAL/Lib/DIO.c
fileObj2 = ../SrcCode/MCAL/Lib/DIO.o

fileSrc3 = ../SrcCode/MCAL/Lib/Port.c
fileObj3 = ../SrcCode/MCAL/Lib/Port.o

fileSrc4 = ../SrcCode/MCAL/Lib/Port_Config.c
fileObj4 = ../SrcCode/MCAL/Lib/Port_Config.o

allObjs = $(fileObj2) $(fileObj3) $(fileObj4) 

CC = avr-gcc
FinalTargetName=../SrcCode/APP/main.elf
Library= ../SrcCode/MCAL/Lib/libmcal.a
lib= -L../SrcCode/MCAL/Lib/ -lmcal
includes= -I../SrcCode/MCAL/Include/ -I../SrcCode/LIB/
Linking= -static
Target=atmega32

$(FinalTargetName) : CFLAG = 
$(allObjs): CFLAG = -c

$(FinalTargetName) : $(allObjs) $(Library)
	$(CC) -mmcu=$(Target) $(Linking) $(fileSrc1) -o $(FinalTargetName) $(lib) $(includes)

$(fileObj2) : $(fileSrc2) 
	$(CC) $(CFLAG) $(fileSrc2) $(includes) -o $(fileObj2)
$(fileObj3) : $(fileSrc3) 
	$(CC) $(CFLAG) $(fileSrc3) $(includes) -o $(fileObj3) 
$(fileObj4) : $(fileSrc4) 
	$(CC) $(CFLAG) $(fileSrc4) $(includes) -o $(fileObj4) 

$(Library) : $(allObjs)
	avr-ar -rcs $(Library) $(allObjs)

.PHONY: clean

clean: 
	rm -f ../SrcCode/MCAL/Lib/*.o ../SrcCode/MCAL/Lib/*.a ../SrcCode/APP/*.elf 

