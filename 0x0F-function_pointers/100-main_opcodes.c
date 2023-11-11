#include <udis86.h>
#include <stdio.h>
#include <stdlib.h>
/*
 */
int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int yy = 0;
	int val = argc == 2? atoi(argv[1]) : 0;

	if (argc == 2 && val >= 0)
	{
		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], val);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		for (yy = 0; ud_disassemble(&ud_obj); i++)
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}
	else if (val < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
