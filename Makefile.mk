novascript: novascript.l novascript.c
	lex novascript.l
	gcc -o novascript lex.yy.c novascript.c -I.

run: 
	./novascript
clean:
	rm novascript lex.yy.c