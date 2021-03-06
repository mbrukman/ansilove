/*
 * strtolower.c
 * Ansilove 4.1.0
 * https://www.ansilove.org
 *
 * Copyright (c) 2011-2020 Stefan Vogt, Brian Cassidy, and Frederic Cambus
 * All rights reserved.
 *
 * Ansilove is licensed under the BSD 2-Clause License.
 * See LICENSE file for details.
 */

#include <ctype.h>
#include "strtolower.h"

char *
strtolower(char *str)
{
	char *p = str;

	while (*p) {
		*p = tolower((unsigned char)*p);
		p++;
	}

	return str;
}
