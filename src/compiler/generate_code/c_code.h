#ifndef COMPILER_GENERATE_CODE_C_CODE_H_
#define COMPILER_GENERATE_CODE_C_CODE_H_

#include "compiler/parse_table.h"
#include "compiler/lex_table.h"

namespace tree_sitter {
    namespace generate_code {
        std::string c_code(std::string name, const ParseTable &parse_table, const LexTable &lex_table);
    }
}

#endif  // COMPILER_GENERATE_CODE_C_CODE_H_
