#include "complexcommand.h"

ComplexCommand::ComplexCommand(Receiver *receiver, std::string a, std::string b) : receiver_(receiver), a_(a), b_(b) {}

void ComplexCommand::Execute() const {
	std::cout << "ComplexCommand: Complex stuff should be done by a receiver object.\n";
	this->receiver_->DoSomething(this->a_);
	this->receiver_->DoSomethingElse(this->b_);
}