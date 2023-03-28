#include <stdio.h>
#include <stdlib.h>

int main() {
    // What are all the fields in FILE struct and why - use ChatGPT or Google
    FILE *fp;

    // Learn about file descriptors (This is related to Everything in Linux is a File (or Process) )
    fp = fopen("example.txt", "w");

    // What is NULL and why it exists in C?
    if (fp == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    // Extra task -  how can you implement printf using fprintf
    fprintf(fp, "This is an example file.\n");

    // Watch the valigrind video and see if you don't do the below operation of closing the file
    // use ChatGPT to learn how all these things work behind the scenes
    fclose(fp);

    return 0;
}
