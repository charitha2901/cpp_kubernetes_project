#include <gtest/gtest.h>

#include "../src/server_monitor.h"

TEST(ServerMonitorTest, CPUUsageRange) {

    ServerMonitor monitor;

    int cpu = monitor.getCPUUsage();

    EXPECT_GE(cpu, 0);
    EXPECT_LE(cpu, 99);
}

TEST(ServerMonitorTest, MemoryUsageRange) {

    ServerMonitor monitor;

    int memory = monitor.getMemoryUsage();

    EXPECT_GE(memory, 1000);
    EXPECT_LE(memory, 8999);
}
