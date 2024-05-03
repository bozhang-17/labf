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
    int i = 0;
    int x = 0;
    
    do{
        i++;
        x = strcmp(user_input, country_codes[i].domain);
        
    }while(x != 0 && i != 258 );

        

    if( x == 0){
    printf("%s",country_codes[i].country);

    }
    else{
        printf("domain not found");
    }


    // Do not edit below here
    return 0;
}
