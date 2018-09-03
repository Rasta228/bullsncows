default: bin/bullsncows

test: bin/bnc_test
	bin/bnc_test

bin/bullsncows: build/main.o build/rules.o build/printMas.o build/numberBreaking.o build/isNonRepeating.o build/howManyCows.o build/howManyBulls.o build/game.o
	gcc -Wall -Werror build/main.o build/rules.o build/printMas.o build/numberBreaking.o build/isNonRepeating.o build/howManyCows.o build/howManyBulls.o build/game.o -o bin/bullsncows

bin/bnc_test: build/main_test.o build/rules.o build/printMas.o build/numberBreaking.o build/isNonRepeating.o build/howManyCows.o build/howManyBulls.o build/game.o
	gcc -Wall -Werror build/main_test.o build/rules.o build/printMas.o build/numberBreaking.o build/isNonRepeating.o build/howManyCows.o build/howManyBulls.o build/game.o -o bin/bnc_test

build/main.o: src/main.c
	gcc -std=c99 -Wall -Werror -c src/main.c -o build/main.o

build/rules.o: src/rules.c
	gcc -std=c99 -Wall -Werror -c src/rules.c -o build/rules.o

build/printMas.o: src/printMas.c
	gcc -std=c99 -Wall -Werror -c src/printMas.c -o build/printMas.o

build/numberBreaking.o: src/numberBreaking.c
	gcc -std=c99 -Wall -Werror -c src/numberBreaking.c -o build/numberBreaking.o

build/isNonRepeating.o: src/isNonRepeating.c
	gcc -std=c99 -Wall -Werror -c src/isNonRepeating.c -o build/isNonRepeating.o

build/howManyCows.o: src/howManyCows.c
	gcc -std=c99 -Wall -Werror -c src/howManyCows.c -o build/howManyCows.o

build/howManyBulls.o: src/howManyBulls.c
	gcc -std=c99 -Wall -Werror -c src/howManyBulls.c -o build/howManyBulls.o

build/game.o: src/game.c
	gcc -std=c99 -Wall -Werror -c src/game.c -o build/game.o

build/main_test.o: test/main.c
	gcc -std=c99 -I thirdparty -I src -c test/main.c -o build/main_test.o

.PHONY : clean
clean:
	rm -rf build/*.o
