FROM ubuntu:22.04
MAINTAINER YJK
RUN apt-get update && apt-get install -y xinetd
RUN useradd -m chal
RUN chown -R root:root /home/chal
RUN chmod -R 755 /home/chal
CMD ["/usr/sbin/xinetd", "-dontfork"]
