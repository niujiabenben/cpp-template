#include <glog/logging.h>

int main(int argc, char *argv[]) {
  google::InitGoogleLogging(argv[0]);
  google::LogToStderr();

  return 0;
}
