// Includes
#include <stdio.h>
#include <string.h>
#include "domains.h"

// Main function 
int main(void) {
    
    // Read user input
    #define MAX_LEN 100
    char user_input[MAX_LEN];
    printf("Enter a domain including the . (e.g. .uk): ");
    fgets(user_input, MAX_LEN, stdin);
    
    // Remove newline character from user input
    user_input[strcspn(user_input, "\n")] = '\0';
	
    // Loop through the array of ccTLDs to find a match
    int found = 0;
    for (int i = 0; i < 258; i++) {
        if (strcmp(user_input, country_codes[i].domain) == 0) {
            printf("This is the domain for: %s\n", country_codes[i].country);
            found = 1;
            break;
        }
    }

    // If no match is found, display "Domain not found"
    if (!found) {
        printf("Domain not found.\n");
    }

    // Do not edit below here
    return 0;
}