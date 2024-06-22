#ifndef TERMINAL_H
#define TERMINAL_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <unistd.h>
#include <filesystem>

namespace fs = std::filesystem;

bool isExecutable(const std::string& path);
std::string findCommandInPath(const std::string& command, const std::vector<std::string>& pathDirs);
void enableAnsiEscapeCodes();
void clearScreen();

#endif // TERMINAL_H
