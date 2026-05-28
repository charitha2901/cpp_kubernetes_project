#ifndef SERVER_MONITOR_H
#define SERVER_MONITOR_H

#include <string>

class ServerMonitor {

private:
    bool running;

public:

    ServerMonitor();

    int getCPUUsage();

    int getMemoryUsage();

    void writeLog(std::string message);

    void displayStatus(int cpu, int memory);

    void checkAlerts(int cpu, int memory);

    void monitorServer();

    void stopMonitoring();
};

#endif
