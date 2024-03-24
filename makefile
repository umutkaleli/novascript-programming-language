build: novascript

novascript:
	flex novascript.l
	gcc -o novascript lex.yy.c novascript.c -I.
	
run:
	./novascript
clean:
	rm lex.yy.c novascript
