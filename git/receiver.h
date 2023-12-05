#ifndef receiver_h
#define receiver_h
#include "simplecommad.h"
/**
 * The Receiver classes contain some important business logic. They know how to
 * perform all kinds of operations, associated with carrying out a request. In
 * fact, any class may serve as a Receiver.
 */
class Receiver {
public:
	void DoSomething(const std::string&);
	void DoSomethingElse(const std::string&);
};


#endif