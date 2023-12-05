#ifndef simplecommand_h
#define simplecommand_h
#include "command.h"
/**
 * Some commands can implement simple operations on their own.
 */
class SimpleCommand : public Command {
private:
	std::string pay_load_;

public:
	explicit SimpleCommand(std::string);
	void Execute() const override;
};

#endif