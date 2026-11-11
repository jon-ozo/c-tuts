#include <stdio.h>
#include <sys/socket.h>

#define IP "172.66.147.243";
#define PORT "80"; 

int main()
{
	int sock = socket(PF_INET, SOCK_STREAM, 0);
	printf("%d\n", sock);

	return 0;
}
