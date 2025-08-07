#include <stdio.h>
#include <string.h>

int login(void)
{
    char user[20], pass[20];

    printf("=========== Login ===========\n");
    printf("Username: ");
    scanf("%19s", user);
    printf("Password: ");
    scanf("%19s", pass);

    if (strcmp(user, "admin") == 0 && strcmp(pass, "1234") == 0)
    {
        printf("Login successful.\n");
        return 1;
    }
    return 0;
}

int main(){

    login();

}