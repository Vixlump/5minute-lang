//cstd control
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <cinttypes>
#include <cstring>

//stream control
#include <iostream>
#include <fstream>
#include <sstream>

//filesystem control
//#include <filesystem>

//variable expantion
#include <string>
#include <memory>
#include <new>
#include <map>
#include <type_traits>
//#include <cctype>

//math control
#include <cmath>
#include <complex>
#include <random>
#include <limits>
#include <functional>

//time control
#include <ctime>
#include <chrono>

//threading control
#include <thread>
#include <atomic>
#include <mutex>
#include <vector>

using namespace std;
using namespace chrono;
using namespace this_thread;

#include "deps/hash.h"
#include "deps/codex.h"
#include "deps/patchwork.h"


void index_stream() {
	do {
		line++;
		switch (active_script[line]) {
			case COREFC("print"):
				line++;
				cout<<codex_get_string(active_script[line]);
				break;
			default:
				break;
		}
	} while (line < active_script.size());
}

int main () {
	load_codex("main");
	index_stream();
	return 0;
}
