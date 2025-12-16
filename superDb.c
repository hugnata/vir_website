#include <stdio.h>
#include <stdlib.h>

#define DATABASE_FILE_NAME "queried_name.txt"

int find_username(FILE * f, char * username) {
    
}


int main(int argc, char* argv[]) {
    if(argc < 2) {
        fprintf(stderr, "[ERROR] Missing argument : username\n");
        fprintf(stdout, "USAGE : ./superDB <username\n");
        exit(-1);
    }
    FILE * f = fopen(DATABASE_FILE_NAME, "rw");

}