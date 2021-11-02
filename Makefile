all:
	./.build.sh

new:
	./.new.sh

clean:
	./.remove.sh
	rm -rfv include/keychain/*

custom:
	./.custom.sh
