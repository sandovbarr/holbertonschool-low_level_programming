#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
        hash_table_t *ht;

        ht = hash_table_create(1024);
        hash_table_set(ht, "hetairas", "valor1");
        hash_table_set(ht, "mentioner", "valor2");
        hash_table_set(ht, "hetairas", "valor3");
        return (EXIT_SUCCESS);
}
