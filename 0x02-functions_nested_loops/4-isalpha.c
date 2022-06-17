#include "main.h"

/**
* _isalpha - checking for alphabets
* @c: a fundamental requirement to check on charaters
* Return: returns 0 or 1 depends on condition
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
