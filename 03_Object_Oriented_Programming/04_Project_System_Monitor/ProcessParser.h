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
#include "util.h"
#include "constants.h"
using namespace std;

class ProcessParser
{
    public:
    static string getCmd(string pid);
    static vector<string> getPidList();
    static string getVmSize(string pid);
    static string getCpuPercent(string pid);
    static long int getSysUpTime();
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

string ProcessParser::getCpuPercent(string pid)
{
    string line;
    string value;
    float result;
    ifstream stream = Util::getStream((Path::basePath()+ pid + "/" + Path::statPath()));
    getline(stream, line);
    string str = line;
    istringstream buf(str);
    istream_iterator<string> beg(buf), end;
    vector<string> values(beg, end); // done!
    // acquiring relevant times for calculation of active occupation of CPU for selected process
    float utime = stof(ProcessParser::getProcUpTime(pid));
    float stime = stof(values[14]);
    float cutime = stof(values[15]);
    float cstime = stof(values[16]);
    float starttime = stof(values[21]);
    float uptime = ProcessParser::getSysUpTime();
    float freq = sysconf(_SC_CLK_TCK);
    float total_time = utime + stime + cutime + cstime;
    float seconds = uptime - (starttime/freq);
    result = 100.0*((total_time/freq)/seconds);
    return to_string(result);
}
