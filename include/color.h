red() {
	printf("\033[1;31m");
}

green() {
	printf("\033[1;32m");
}

yellow() {
	printf("\033[1;33m");
}

cyan() {
	printf("\033[1;36m");
}

white() {
	printf("\033[1;37m");
}

italic() {
	printf("\033[3;37m");
}

underline() {
	printf("\033[4;37m");
}

blink() {
	printf("\033[5;37m");
}

//stop_blink() {
//	printf("\x1b[0m\x1b[5;1f");
//}

stop_blink() {
	printf("\033[0m\033[1;1");
}
