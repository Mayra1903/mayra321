#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
int main(){
  int Socket1, creatSocket;
  char buffer[1024];
  struct sockaddr_in serverAddr;
  struct sockaddr_storage serverStorage;
  socklen_t addr_size;

  
    Socket1 = socket(PF_INET, SOCK_STREAM, 0);
     serverAddr.sin_family = AF_INET;
     serverAddr.sin_port = htons(7891);
     serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
     memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);  
     bind(Socket1, (struct sockaddr *) &serverAddr, sizeof(serverAddr));

    if(listen(Socket1,5)==0)
{
    printf("Listen\n");}
    else

{
    printf("Errors occur\n");}
     creatSocket = accept(Socket1, (struct sockaddr *) &serverStorage, &addr_size);

  strcpy(buffer,"Hello World\n");
  send(creatSocket,buffer,13,0);

  return 0;
}