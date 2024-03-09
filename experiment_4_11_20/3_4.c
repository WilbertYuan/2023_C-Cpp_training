#include <stdio.h>  

int main() {
    char a, b, c, d; // 'C' for honest, 'L' for lying, 'D' for broke the vase  
    char statements[] = { 'C', 'L', 'C', 'C', 'L', 'C', 'L', 'C' }; // Student a, b, c, d responses  
    int i;
    for (i = 0; i < 8; i++) {
        switch (statements[i]) {
        case 'C': a = statements[i]; break; // Student a's response to his honesty  
        case 'L': a = 'D'; break; // Student a's response to his dishonesty (lying)  
        case 'D': a = 'D'; break; // Student a's response to his guilt (breaking the vase)  
        }
    }
    for (i = 0; i < 8; i++) {
        switch (statements[i]) {
        case 'C': b = statements[i]; break; // Student b's response to his honesty  
        case 'L': b = 'D'; break; // Student b's response to his dishonesty (lying)  
        case 'D': b = 'D'; break; // Student b's response to his guilt (breaking the vase)  
        }
    }
    for (i = 0; i < 8; i++) {
        switch (statements[i]) {
        case 'C': c = statements[i]; break; // Student c's response to his honesty  
        case 'L': c = 'D'; break; // Student c's response to his dishonesty (lying)  
        case 'D': c = 'D'; break; // Student c's response to his guilt (breaking the vase)  
        }
    }
    for (i = 0; i < 8; i++) { // Student d's responses are already correct as they are. They are not influenced by the other students' responses.  
        switch (statements[i]) {
        case 'C': d = statements[i]; break; // Student d's response to his honesty  
        case 'L': d = 'D'; break; // Student d's response to his dishonesty (lying)  
        case 'D': d = 'D'; break; // Student d's response to his guilt (breaking the vase)  
        }
    }
    if ((a == 'D' && b == 'C' && c == 'C' && d == 'C') ||
        (a == 'C' && b == 'D' && c == 'C' && d == 'C') ||
        (a == 'C' && b == 'C' && c == 'D' && d == 'C') ||
        (a == 'C' && b == 'C' && c == 'C' && d == 'D')) {
        printf("The vase was broken by student A.\n");
    }
    else if ((a == 'C' && b == 'D' && c == 'C' && d == 'C') ||
        (a == 'C' && b == 'C' && c == 'D' && d == 'C') ||
        (a == 'C' && b == 'C' && c == 'C' && d == 'D')) {
        printf("The vase was broken by student B.\n");
    }
    else if ((a == 'L' && b == 'C' && c == 'L' && d == 'C') ||
        (a == 'C' && b == 'L' && c == 'L' && d == 'C') ||
        (a == 'C' && b == 'C' && c == 'L' && d == 'C') ||
        (a == 'C' && b == 'C' && c == 'C' && d == 'L')) {printf("The vase was broken by student C.\n");}
    else if ((a == 'C' && b == 'C' && c == 'C' && d == 'C') ||
        (a == 'C' && b == 'C' && c == 'L' && d == 'C') ||
        (a == 'C' && b == 'L' && c == 'C' && d == 'C') ||
        (a == 'L' && b == 'C' && c == 'C' && d == 'C')) {
        printf("The vase was broken by student D.\n");
    }
    else {
        printf("The vase was not broken by any of the students.\n");
    }
    return 0;
}

