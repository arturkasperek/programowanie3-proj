FROM node:6.8.0
#install cmake
RUN apt-get update -qq && apt-get install -qq -y \
    build-essential=11.7 \
    make=4.0-8.1

RUN echo "mysql-server mysql-server/root_password password strangehat" | debconf-set-selections
RUN echo "mysql-server mysql-server/root_password_again password strangehat" | debconf-set-selections
RUN apt-get -y install mysql-server
RUN apt-get install -y mysql-client
RUN apt-get install -y libmysqlcppconn-dev

# Create app directory
RUN mkdir -p /usr/src/app
VOLUME /usr/src/app
WORKDIR /usr/src/app

EXPOSE 3000
EXPOSE 3002
COPY entrypoint.sh /entrypoint.sh
RUN chmod 777 /entrypoint.sh
COPY package.json .
ENTRYPOINT ["/entrypoint.sh"]
