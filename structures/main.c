#include <stdio.h>

struct employee {
    int id;
    int age;
    float salary;
};

int main() {
    struct employee john;
    struct employee *ptr;

    john.id = 1;
    john.age = 57;
    john.salary = 24.24;

    ptr = &john;

    printf("%d\n", ptr->age);
}
