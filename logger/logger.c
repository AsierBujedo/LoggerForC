/*
 * logger.c
 *
 *  Created on: 19 mar. 2022
 *      Author: asier
 */

#include "logger.h"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static FILE *f;

void openLogger(char name[]) {
	f = fopen(name, "w");
	fprintf(f,
			"------------------------------\nLog file\n------------------------------\n");
	fprintf(stderr,
			"\n------------------------------\nLog file\n------------------------------\n");
}

int closeLogger() {
	fprintf(f, "\n\nCODE: EOF - END OF FILE");
	return fclose(f);
}

void logFile(LEVEL l, char desc[]) {

	if (l == INFO) {
		char buffer[100];
		strcat(strcpy(buffer, "\n[INFO]   "), desc);
		fprintf(f, buffer);
		fprintf(stderr, buffer);
	} else if (l == WARN) {
		char buffer[100];
		strcat(strcpy(buffer, "\n[WARN]   "), desc);
		fprintf(f, buffer);
		fprintf(stderr, buffer);
	} else if (l == ERRORL) {
		char buffer[100];
		strcat(strcpy(buffer, "\n[ERROR]   "), desc);
		fprintf(f, buffer);
		fprintf(stderr, buffer);
	} else if (l == END) {
		char buffer[100];
		strcat(strcpy(buffer, "\n[END]   "), desc);
		fprintf(f, buffer);
		fprintf(stderr, buffer);
	}
}
