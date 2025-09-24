FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

# Устанавливаем инструменты для сборки
RUN apt-get update && apt-get install -y \
    software-properties-common \
    && add-apt-repository ppa:ubuntu-toolchain-r/test -y \
    && apt-get update \
    && apt-get install -y gcc-14 g++-14 cmake git build-essential \
    && rm -rf /var/lib/apt/lists/*

# Указываем GCC 14 по умолчанию
RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-14 100 \ 
 && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-14 100

WORKDIR /workspace

# Копируем проект внутрь контейнера
COPY . /workspace

# Сборка проекта
RUN cmake -S . -B build \
 && cmake --build build -- -j$(nproc)

# Указываем что запускать по умолчанию
CMD ["./build/tests"]