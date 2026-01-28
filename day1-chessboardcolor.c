ques-https://d8it4huxumps7.cloudfront.net/uploads/courseDetails/628db68ec030d_picture_1.png
Above is the standard representation of a chessboard.

This could be imagined as a 2D cartesian plane, with the x axis being represented by the alphabets and y axis by the numbers.

Given coordinates in the form of string, print if that cell is white or black.

Input Format
First line contains a string s.

Output Format
White or Black.

Solution-
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
