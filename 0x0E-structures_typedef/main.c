#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("poppy", 3.5, "Bob");
    print_dog(my_dog);
    return (0);
}
