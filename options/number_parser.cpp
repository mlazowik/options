#include <stdexcept>
#include <string-utils/utils.h>

#include "number_parser.h"

NumberParser::NumberParser(StringParser stringParser)
        : stringParser(stringParser) { }

void NumberParser::setDefaultValue(int value) {
    this->value = value;
}

void NumberParser::parse() {
    this->stringParser.parse();

    std::string numberString = this->stringParser.getValue();

    this->value = String::toInt(numberString);
}

int NumberParser::getValue() const {
    return this->value;
}