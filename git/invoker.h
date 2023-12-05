#ifndef invoker_h
#define invoker_h
#include "complexcommand.h"
/**
 * The Invoker is associated with one or several commands. It sends a request to
 * the command.
 */
class Invoker {
	/**
	 * @var Command
	 */
private:
	Command *on_start_;
	/**
	 * @var Command
	 */
	Command *on_finish_;
	/**
	 * Initialize commands.
	 */
public:
	~Invoker();

	void SetOnStart(Command *command);
	void SetOnFinish(Command *command);
	/**
	 * The Invoker does not depend on concrete command or receiver classes. The
	 * Invoker passes a request to a receiver indirectly, by executing a command.
	 */
	void DoSomethingImportant();
};
#endif