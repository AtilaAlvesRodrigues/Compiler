#include "compiler.h"

int compile_file(const char *filename, const char *out_finename, int flags)
{

    struct compile_process *process = compile_process_create(filename, out_finename, flags);
    if (!process)
    {
        return COMPILER_FAILED_WITH_ERRORS;
    }

    /* AQUI ENTRA A ANÁLISE LEXICA */

    /* AQUI ENTRA O PARSING DO CODIGO */

    /* AQUI ENTRA A GERACAO DE CODIGO */

    return COMPILER_FILE_COMPILED_OK;
}