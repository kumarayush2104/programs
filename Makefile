all:
	./.build.sh

new:
	./.new.sh

reset:
	./.remove.sh

custom:
	./.custom.sh

keyclear:
	rm -rfv include/keychain/*
