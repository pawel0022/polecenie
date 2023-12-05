#ifndef complexcommand_h
#define complexcommand_h
#include "receiver.h"
/**
 * However, some commands can delegate more complex operations to other objects,
 * called "receivers."
 */
class ComplexCommand : public Command {
	/**
	 * @var Receiver
	 */
private:
	Receiver *receiver_;
	/**
	 * Context data, required for launching the receiver's methods.
	 */
	std::string a_;
	std::string b_;
	/**
	 * Complex commands can accept one or several receiver objects along with any
	 * context data via the constructor.
	 */
public:
	ComplexCommand(Receiver*, std::string, std::string);
	/**
	 * Commands can delegate to any methods of a receiver.
	 */
	void Execute() const override;
};
#endif