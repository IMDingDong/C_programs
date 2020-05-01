#include <stdio.h>
#include <ctype.h>
#include <string.h>
enum{max_buffer = 24};

int do_auth(void){
	char *username=NULL;
	char *password=NULL;

	return -1;
}

void report_error(const char *msg){
	const char *error_log = msg;
	char buffer[max_buffer];

	_snprintf(buffer, sizeof(buffer), "Error:%s", error_log);
	printf("%s\n", buffer);
}

int main(void){
	if(do_auth() == -1){
		report_error("Unable to login");
	}
	return 0;
}