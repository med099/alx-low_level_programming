#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

/**
 * struct Form - type format
 * @type: type
 * @f: pointer to function
 */
struct Form
{
	char *type;
	void (*f)();
};
typedef struct Form _Form;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
