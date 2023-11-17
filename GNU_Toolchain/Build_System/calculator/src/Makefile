include .config

ifdef CONFIG_STATIC
	STATIC_FLAG := -static
endif

ifdef CONFIG_DEBUG
	CC_FLAG := -g
endif

ifdef CONFIG_ADD
	PRE_CONFIG := -DADD
endif

ifdef CONFIG_SUB
	PRE_CONFIG += -DSUB
endif

ifdef CONFIG_MUL
	PRE_CONFIG += -DMUL
endif
ifdef CONFIG_DIV
	PRE_CONFIG += -DDIV
endif

all:../bin/calculator
	echo "Build Done"

../bin/calculator:main.o
	gcc ${STATIC_FLAG}  main.o -L ../lib/ -lcalc -o ../bin/calculator

main.o:main.c
	gcc ${CC_FLAG} ${PRE_CONFIG} -I ../inc -c main.c

clean:
	rm ../bin/calculator *.o

