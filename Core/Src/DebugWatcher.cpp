#include <DebugWatcher.h>

int debugCounter = 0;
void debugWatcherLoop(){
	debugCounter++;
}

bool booleanWatcher = false;
void setBoolean(bool setV){
	booleanWatcher = setV;
}

int integerWatcher = -1;
void setInteger(int setV){
	integerWatcher = setV;
}
