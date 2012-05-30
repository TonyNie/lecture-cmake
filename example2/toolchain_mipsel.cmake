SET(CMAKE_SYSTEM_NAME Linux)
SET(CMAKE_SYSTEM_VERSION 1)
#SET(CMAKE_CROSSCOMPILING TRUE)

SET(CMAKE_C_COMPILER  /usr/local/toolchain_mipsel/bin/mipsel-linux-gcc) 
SET(CMAKE_CXX_COMPILER /usr/local/toolchain_mipsel/bin/mipsel-linux-g++)

# where is the target environment 
SET(CMAKE_FIND_ROOT_PATH  /usr/local/toolchain_mipsel)

# search for programs in the build host directories
#SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# for libraries and headers in the target directories
#SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
#SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
