/*eMacs: <prj>*/

/* fconverter: A CLI app that lets you convert text 
 *  to binary, hexadecimal, and UTF-16BE
 *
 *  by: <NopAngel>/angel¿
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* to_binary(): 
 *  convert the string to to_binary
 */
void to_binary(const char* input) {
    printf("Binary: ");
    for (int i = 0; input[i] != '\0'; i++) {
        for (int j = 7; j >= 0; j--) {
            printf("%d", (input[i] >> j) & 1);
        }
        printf(" ");
    }
    printf("\n");
}

/* to_hex(): 
 *  convert the string to hex
 */
void to_hex(const char* input) {
    printf("Hex:    ");
    for (int i = 0; input[i] != '\0'; i++) {
        printf("%02X ", (unsigned char)input[i]);
    }
    printf("\n");
}

/* to_utf16_hex(): 
 *  convert the string to utf16_hex
 */
void to_utf16_hex(const char* input) {
    printf("UTF-16BE (Hex): ");
    for (int i = 0; input[i] != '\0'; i++) {
        printf("00%02X ", (unsigned char)input[i]);
    }
    printf("\n");
}

/* main(): 
 *  main function btw
 */
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s \"text to convert\"\n", argv[0]);
        return 1;
    }

    char *text = argv[1];
    printf("Input:  %s\n", text);
    printf("------------------------------------------------------------\n");
    
    to_binary(text);
    to_hex(text);
    to_utf16_hex(text);
    
    return 0;
}
