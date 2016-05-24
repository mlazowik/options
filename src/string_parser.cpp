#include "string_parser.h"

StringParser::StringParser(char *raw) {
    this->raw = raw;
}

void StringParser::setDefaultValue(std::string value) {
    this->value = value;
}

void StringParser::parse() {
    this->value = std::string(this->raw);
}

std::string StringParser::getValue() const {
    return this->value;
}