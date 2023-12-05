#include "simplecommad.h"

SimpleCommand::SimpleCommand(std::string pay_load) : pay_load_(pay_load) {}

void SimpleCommand::Execute() const {
	std::cout << "SimpleCommand: See, I can do simple things like printing (" << this->pay_load_ << ")\n";
}