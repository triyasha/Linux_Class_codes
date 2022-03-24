
$(CC) = gcc

appl_n:	main1.o  calc_add.o   
	$(CC)	main1.o		calc_add.o		-o appl_n


main1.o:	main1.c		calc_add.h
	$(CC)   -c main1.c

add.o:		calc_add.c	calc_add.h
	$(CC)	-c calc_add.c

clean:
	rm -f *.o
