#ifndef TGL_TGLTOOLS_H
#define TGL_TGLTOOLS_H
#include <chrono>


#ifndef TGL_CHRONO_START
#define TGL_CHRONO_START TGL_CHRONO_START_TIME = std::chrono::high_resolution_clock::now(); TGL_CHRONO_START_LINE = __LINE__;
#endif


#ifndef TGL_CHRONO_STOP
#define TGL_CHRONO_STOP std::cout << "Time elapsed (file: "<< __FILE__ << " lines: "<< TGL_CHRONO_START_LINE << "-"<< __LINE__ << ") "<< std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - TGL_CHRONO_START_TIME).count() << "ms" << std::endl; TGL_CHRONO_COUNT++;
#endif

namespace tgl
{

static int TGL_CHRONO_COUNT = 0;
static int TGL_CHRONO_START_LINE = 0;
static std::chrono::high_resolution_clock::time_point TGL_CHRONO_START_TIME;

} // End of namespace tgl
#endif //TGL_TGLTOOLS_H
