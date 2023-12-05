#ifndef command_h
#define command_h
#include <iostream>
#include <string>
/**
 * The Command interface declares a method for executing a command.
 */
class Command {
public:
	virtual ~Command() {
	}
	virtual void Execute() const = 0;
};
#endif