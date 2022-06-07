COLLEEN_PATH = Colleen/Colleen.c
GRACE_PATH = Grace/Grace.c
SULLY_PATH = Sully/Sully.c

COLLEEN_OBJECTS = $(COLLEEN_PATH:%.c=%.o)
GRACE_OBJECTS = $(GRACE_PATH:%.c=%.o)
SULLY_OBJECTS = $(SULLY_PATH:%.c=%.o)

CFLAGS= -Wall -Wextra -Werror

all: Colleen Grace Sully

Colleen: $(COLLEEN_OBJECTS)
	gcc $(CFLAGS) $(COLLEEN_OBJECTS) -o Colleen/Colleen

Grace: $(GRACE_OBJECTS)
	gcc $(CFLAGS) $(GRACE_OBJECTS) -o Grace/Grace

Sully: $(SULLY_OBJECTS)
	gcc $(CFLAGS) $(SULLY_OBJECTS) -o Sully/Sully

clean:
	rm -rf $(COLLEEN_OBJECTS) $(GRACE_OBJECTS) $(SULLY_OBJECTS)

fclean: clean
	rm -rf Colleen/Colleen Grace/Grace Sully/Sully Grace/Grace_kid.c Sully/Sully_0.c Sully/Sully_1.c Sully/Sully_2.c Sully/Sully_3.c Sully/Sully_4.c

re: fclean all

.PHONY: all clean fclean re
