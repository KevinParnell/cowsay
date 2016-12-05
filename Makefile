BIN_DIR = ${DESTDIR}/usr/bin

.PHONY: all clean
all: cowsay

lander:
	g++ cowsay.cpp -o cowsay

install: cowsay
	mkdir -p ${BIN_DIR}
	install -c -m 755 cowsay $(BIN_DIR)

clean:
	rm -f cowsay
