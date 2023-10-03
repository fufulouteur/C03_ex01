#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2, unsigned int n);

int main() {
  int i;
  i = 3;

  char username2[40];
  char password2[40];
  char username[40];
  char password[40];

  printf("!!!HI, I AM FUFULOUTEUR!!!\nPlease, enter a username: ");
  scanf("%s", username2);
  printf("!!!COOL!!!\n");

  printf("Please, enter a password: ");
  scanf("%s", password2);
  printf("!!!IT'S A SECRET!!!\n");

  printf("\n--------------------!!!NOW "
         "CONNECT!!!---------------------\n\n");

  while (username != username2 && password != password2) {

    printf("Please, enter your login: ");
    scanf("%s", username);

    printf("Please, enter your password: ");
    scanf("%s", password);

    if (ft_strcmp(username, username2, 3) == 0 &&
        ft_strcmp(password, password2, 3) == 0) {
      printf("!!!!!!!!!!!!!!!YOU ARE NOW CONNECTED TO THE FUFULOUTEUR "
             "NETWORK!!!!!!!!!!!!!!!!\n");
      break;
    } else {
      i--;
      if (i == 0) {
        printf("!!!LOGIN FAILED!!!\n!!TRY IN 24H!!");
        break;
      }
      printf("%i\n", strcmp(username, password));
      printf("%i\n", ft_strcmp(username, password, 3));
      printf("!!!Login failed!!!\nCheck your login and or your password.\n");
    }
  }
  return 0;
}
