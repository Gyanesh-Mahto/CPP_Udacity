#pragma once
#include<string>
using namespace std;

class Path
{
    public:
    static string basePath()
    {
        return "/proc/";
    }

    static string cmdPath()
    {
        return "/cmdline";
    }

    static string statusPath()
    {
        return "/status";
    }

    static string statPath()
    {
        return "stat";
    }

    static string upTime()
    {
        return "uptime";
    }

    static string versionPath()
    {
        return "version";
    }
};