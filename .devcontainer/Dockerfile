FROM mcr.Microsoft.com/devcontainers/base:ubuntu

#Install C++ build tools
RUN apt-get update && apt-get install -y \
  build-essential \
  gdb \
  cmake \
  make \
  clang \
  git \
  nano \
  vim \
  htop \
  pkg-config \
  && apt-get clean

#Optinal
#ncurses
RUN apt-get install -y libncurses5-dev libncursesw5-dev

#For SFML
RUN apt-get install -y  libsfml-dev
