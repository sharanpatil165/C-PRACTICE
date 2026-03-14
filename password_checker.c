#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter a password: ");
    scanf("%s", password);

    int length = strlen(password);

    for(int i = 0; i < length; i++) {
        if(isupper(password[i]))
            hasUpper = 1;
        else if(islower(password[i]))
            hasLower = 1;
        else if(isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1;
    }

    int score = hasUpper + hasLower + hasDigit + hasSpecial;

    if(length < 6)
        printf("Password Strength: Weak\n");
    else if(score >= 3 && length >= 8)
        printf("Password Strength: Strong\n");
    else
        printf("Password Strength: Medium\n");

    return 0;
}