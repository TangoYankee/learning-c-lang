// https://moldstud.com/articles/p-overcoming-the-pitfalls-of-pointers-in-c-development
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// https://markaicode.com/c-pointers-avoid-dangerous-dangling-and-wild-pointer-bugs/
char *createDanglingPointer() {
    char *ptr = (char*)malloc(sizeof(char) * 10);
    strcpy(ptr, "Hello");
    return ptr; // Memory still allocated
}
int main () {
    // Dangling pointer
    char *dangerous = createDanglingPointer();
    free(dangerous); // Memory freed

    // Use after free
    printf("%s\n", dangerous);

    // Null after free
    dangerous = NULL;

    printf("%p\n", dangerous);

    // Void pointers
    void *generic_ptr;
    int number = 42;
    float decimal = 3.14;

    generic_ptr = &number;
    printf("Integer: %d\n", *(int*)generic_ptr);
    generic_ptr = &decimal;
    printf("Float: %f\n", *(float*)generic_ptr);

    // Good practice: use NULL for pointers with no value
    int answer = 42;
    int *safe_ptr = NULL;
    safe_ptr = &answer;
    // free(safe_ptr);
    // printf("%p\n", safe_ptr);
    printf("%d\n", *safe_ptr);
    return 0;
}
