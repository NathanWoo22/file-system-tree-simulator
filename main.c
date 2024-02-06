#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
    char* key;
    char* type;
    struct node *childPtr, *siblingPtr, *parentPtr;
}NODE;

NODE *new_node(char* key)
{
    NODE *node = (NODE *)malloc(sizeof(NODE));
    node->key = key;
    node->childPtr = node->siblingPtr = node->parentPtr = NULL;
    return node;
}

NODE *root, *cwd;
char word[128];
char command[16], pathname[64];
char dname[64], bname[64]; 


int main(){
    initialize();
    do{
        fgets(word, sizeof(word), stdin);
        word[strcspn(word, "\n")] = 0;
        printf(word);
        NODE* tmp = new_node(word);
    }while(strcmp(word, "quit") != 0 );
    // printf("Hello World!");
}