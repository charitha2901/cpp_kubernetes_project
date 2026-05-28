#include <iostream>
#include <ctime>
#include <cstdlib>

#include "src/server_monitor.h"

using namespace std;

int main() {

    srand(time(0));

    cout << "Starting Server Monitor..."
         << endl;

    ServerMonitor monitor;

    monitor.monitorServer();

    return 0;
}
