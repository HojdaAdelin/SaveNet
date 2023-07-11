#include "Include.h"

std::string ConvertString(String^ str) {

	return marshal_as<std::string>(str);

}