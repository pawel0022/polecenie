#include "invoker.h"
/**
 * The client code can parameterize an invoker with any commands.
 */


/*

	KOMENTARZ 

*/

int main() {
	Invoker *invoker = new Invoker;
	invoker->SetOnStart(new SimpleCommand("Say Hi!"));
	Receiver *receiver = new Receiver;
	invoker->SetOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
	invoker->DoSomethingImportant();

	delete invoker;
	delete receiver;

	system("pause");
	return 0;
}