
#include <stdio.h>
#include <string.h>

const char* determine_color(const char* s) {
    // Write your logic here to determine the color based on the string s.
    // Return "Black" or "White" based on the problem statement.
    if(s[0]=='a' ||s[0]=='c'|| s[0]=='e'||s[0]=='g'){
        if((s[1]-'0')%2==0)
        return "White";
        else
        return "Black";
    }
    else{
        if((s[1]-'0')%2==0)
        return "Black";
        else
        return"White";
    }
    return NULL;
}

int main() {
    char s[256];
    scanf("%s", s);
    const char* result = determine_color(s);
    printf("%s\n", result);
    return 0;
}
