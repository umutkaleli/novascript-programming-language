build: novascript

novascript:
	flex novascript.l
	gcc -o novascript lex.yy.c novascript.c -I.
	rm lex.yy.c
	./novascript
clean:
	rm -f novascript