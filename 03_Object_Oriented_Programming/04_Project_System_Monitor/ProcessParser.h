#include<iostream>
#include<math.h>
#include<thread>
#include<chrono>
#include<algorithm>
#include<iterator>
#include<vector>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
#include<sstream>
#include<stdexcept>
#include<cerrno>
#include<cstring>
#include<dirent.h>
#include<time.h>
#include<unistd.h>

using namespace std;

class ProcessParser
{
    public:
    static string getCmd(string pid);
    static vector<string> getPidList();
    static string getVmSize(string pid);
    static string getCpuPercent(string pid);
    static long int getSysupTime();
    static string getProcUpTime(string pid);
    static string getProcUser(string pid);
    static vector<string> getSysCpuPercent(string coreNumber="");
    static float getSysRamPercent();
    static string getSysKernelVersion();
    static int getTotalThreads();
    static int getTotalNumberOfProcesses();
    static int getNumberOfRunningProcesses();
    static string getOsName();
    static string printCpuStats(vector<string> values1, vector<string> values2);
};
