#include <iostream>
#include "subject.h"
#include "observer.h"

using namespace std;

int main() {
	DataSubject dataSubject;
	DataUpdateObserver o1("Observer 1");
	DataUpdateObserver o2("Observer 2");
	dataSubject.attach(&o1);
	dataSubject.dataUpdated();
	dataSubject.attach(&o2);
	dataSubject.dataUpdated();
	dataSubject.detach(&o1);
	dataSubject.dataUpdated();
	// Was ist das Problem hier?
	return 0;
}
