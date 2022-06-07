COMPILE = gcc -Wall -Wextra -Werror

all: Colleen Grace Sully

Colleen: Colleen.c
	$(COMPILE) Colleen/Colleen.c -o Colleen
Grace: Grace.c
	$(COMPILE) Grace/Grace.c -o Grace
Sully: Sully.c
	$(COMPILE) Sully/Sully.c -o Sully

clean:
	rm Sully/Sully_1.c Sully/Sully_2.c Sully/Sully_3.c Sully/Sully_4.c Sully/Sully_5.c

fclean: clean
	rm Colleen/Colleen Grace/Grace Sully/Sully

re: fclean all
