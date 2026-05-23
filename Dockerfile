FROM gcc:12

WORKDIR /app

COPY . .

RUN apt-get update && \
    apt-get install -y cmake libgtest-dev && \
    cmake -B build && \
    cmake --build build

CMD ["./build/app"]