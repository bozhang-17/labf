#include <stdio.h>
#include <string.h>
#include "domains.h"

int main(void) {
    
    #define LEN 4
    char user_input[LEN];
    printf("Enter a domain including the . (e.g. .uk): ");
    fgets(user_input, LEN, stdin);
    
    // Check if the first character entered is a dot
    if (user_input[0] != '.') {
        printf("Error! The first character entered should be a .\n");
        return 0;
    }
    
    int i = 0;
    int x = 0;
    
    do {
        x = strcmp(user_input, country_codes[i].domain);
        i++;
    } while (x != 0 && i < 258);

    if (x == 0) {
        printf("This is the domain for: %s", country_codes[i - 1].country);
    } else {
        printf("Domain not found.");
    }

    return 0;
}