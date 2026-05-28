#include "server_monitor.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

ServerMonitor::ServerMonitor() {
    running = true;
}

int ServerMonitor::getCPUUsage() {
    return rand() % 100;
}

int ServerMonitor::getMemoryUsage() {
    return 1000 + rand() % 8000;
}

void ServerMonitor::writeLog(string message) {

    ofstream file("server_log.txt", ios::app);

    time_t now = time(0);

    file << ctime(&now)
         << " : "
         << message
         << endl;

    file.close();
}

void ServerMonitor::displayStatus(int cpu, int memory) {

    cout << "\n===== SERVER STATUS =====\n";

    cout << "CPU Usage: "
         << cpu
         << "%"
         << endl;

    cout << "Memory Usage: "
         << memory
         << " MB"
         << endl;
}

void ServerMonitor::checkAlerts(int cpu, int memory) {

    if (cpu > 80) {

        cout << "ALERT: High CPU Usage!"
             << endl;

        writeLog("WARNING: High CPU Usage");
    }

    if (memory > 7000) {

        cout << "ALERT: High Memory Usage!"
             << endl;

        writeLog("WARNING: High Memory Usage");
    }
}

void ServerMonitor::monitorServer() {

    while (running) {

        int cpu = getCPUUsage();
        int memory = getMemoryUsage();

        displayStatus(cpu, memory);

        string logMessage =
            "CPU=" +
            to_string(cpu) +
            "% Memory=" +
            to_string(memory) +
            "MB";

        writeLog(logMessage);

        checkAlerts(cpu, memory);

        for (long i = 0; i < 1000000000; i++) {
        }
    }
}

void ServerMonitor::stopMonitoring() {
    running = false;
}
