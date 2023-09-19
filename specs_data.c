#include "main.h"

/**
 * data_specs - data struct for specifiers and it's operations
 * @void: NULL
 * Return: always specs
 */

convert *data_specs(void)
{
	static convert specs[] = {
		{"%s", pf_string}, {"%c", pf_char}, {"%%", pf_perc},
		{"%d", pf_dec}, {"%i", pf_int}, {"%b", pf_bin}, {"%u", pf_uns},
		{"%o", pf_oct}, {"%x", pf_lhex}, {"%X", pf_uhex}, {"%S", pf_Non},
		{"%p", pf_ptr}, {"%r", pf_rev}, {"%R", pf_rever}
	};

	return (specs);
}
