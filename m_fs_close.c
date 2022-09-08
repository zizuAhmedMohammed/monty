#include "monty.h"

/**
 * m_fs_close - close file stream
 * @status: status passed to exit
 * @arg: pointer to file stream
 *
 * Return: void
 */
void m_fs_close(int status, void *arg)
{
	(void)(status);
	FILE *fs = (FILE *) arg;

	fclose(fs);
}
