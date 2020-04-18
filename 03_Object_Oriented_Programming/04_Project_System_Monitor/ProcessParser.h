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
#include "Util.h"
#include "constants.h"
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

//Reading /proc/[PID]/status for memory status of specific process
string ProcessParser::getVmSize(string pid)
{
    string line;
    //Declaring search attribute for file
    string name="VmData";
    string value;
    float result;

    //opening stream for specific file
    ifstream stream=Util::getStream((Path::basePath()+ pid + Path::statusPath()));  

    while(getline(stream, line))
    {
        //searching line by line
        if(line.compare(0, name.size(), name)==0)
        {
            //slicing string line on ws for values using sstream
            istringstream buf(line);
            istream_iterator<string> beg(buf), end;
            vector<string> values(beg, end);

            //conversion KB->GB
            result=(stof(values[1])/float(1024));
            break;
        }
    };
    return to_string(result);
}