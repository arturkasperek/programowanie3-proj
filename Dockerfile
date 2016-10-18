FROM node:6.8.0
#install cmake
RUN apt-get update -qq && apt-get install -qq -y \
    build-essential=11.7 \
    make=4.0-8.1

RUN curl -sSL https://cmake.org/files/v3.4/cmake-3.4.0-Linux-x86_64.tar.gz | tar -xzC /opt
RUN ln -s /opt/cmake-3.4.0-Linux-x86_64/bin/cmake /usr/bin/cmake

RUN apt-get install -qq -y pkg-config libssl-dev libsasl2-dev

RUN wget https://github.com/mongodb/mongo-c-driver/releases/download/1.4.2/mongo-c-driver-1.4.2.tar.gz
RUN tar xzf mongo-c-driver-1.4.2.tar.gz
WORKDIR mongo-c-driver-1.4.2
RUN ./configure
RUN make
RUN make install
WORKDIR /

#RUN git clone https://github.com/mongodb/mongo-c-driver.git
#WORKDIR mongo-c-driver
#RUN git checkout "x.y.z"
#RUN ./autogen.sh
#RUN make
#RUN make install
#WORKDIR /

#install mongodb cpp driver
RUN curl -OL https://github.com/mongodb/mongo-cxx-driver/archive/r3.0.1.tar.gz
RUN tar -xzf r3.0.1.tar.gz
WORKDIR mongo-cxx-driver-r3.0.1/build
RUN cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local ..
RUN make && make install

# Create app directory
RUN mkdir -p /usr/src/app
VOLUME /usr/src/app
WORKDIR /usr/src/app

EXPOSE 3000
RUN echo '321'
RUN ls
RUN pwd
COPY entrypoint.sh /entrypoint.sh
RUN chmod 777 /entrypoint.sh
COPY package.json .
ENTRYPOINT ["/entrypoint.sh"]
