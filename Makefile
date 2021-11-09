all:
	./script/build.sh

new:
	./script/new.sh

clean:
	./script/remove.sh
	rm -rfv include/keychain/*

custom:
	./script/custom.sh
