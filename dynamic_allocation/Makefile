buildH:
	ghc -O2 --make fp.hs
testH: fp
#	time ./fp 1e9
	time ./fp 1e9
buildC:
	gcc fp.c -o fpc
testC: fpc
	time ./fpc 1e9
