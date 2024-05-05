// Includes
#include <stdio.h>
#include <string.h>
#include "domains.h"

// Main function 
int main(void) {

    // Read user input
    #define LEN 4
    char user_input[LEN];
    printf("Enter a domain including the . (e.g. .uk): ");
    fgets(user_input, LEN, stdin);
    
    // Enter your code under here
    // Use strcmp(user_input, country_codes[0].domain) to compare the text in user_input to the text in country_codes[0].domain.
    if (user_input[0] != '.') {
        printf("Error! The first character entered should be a .");
        return 0;
    }
    // Loop through the array of ccTLDs to find a match
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
    
    // Do not edit below here
    return 0;
}