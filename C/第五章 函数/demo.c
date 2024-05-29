#include <stdio.h>


void initUart()
{
	initIOStatus();
}
void initWifi()
{
	initUart();
	connectInIntert();
	printStatus();
	
}

int main()
{
	int passwd;
	y = f(x);
	
	initWifi();
	initChaosb();
	int dis;
	
	int cmd;
	cmd = getCmdFromServer();
	dis = getDistance();
	if(dis < 10){
		goBehind();
	}
	switch(cmd){
		case 1:
			goFhead();
			break;
		case 2:
			goBehind();
			break;
		case 4:
			turnLeft();
			break;
	}
	
	return 0;
}