#pragma once

#include <iostream>
#include <string>

namespace clox {

void error(Token token, const std::string& message);

void report(int line, const std::string& message, const std::string& where);

}