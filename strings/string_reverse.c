#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int n = strlen(str);
    
    for (int i = 0; i < n / 2; i++) {
        // Swap characters
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string to reverse: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline if present
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    printf("Original string: %s\n", str);
    
    reverseString(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
