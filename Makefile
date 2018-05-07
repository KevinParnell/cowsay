BIN_DIR = ${DESTDIR}/usr/local/bin

.PHONY: all clean
all: kevinsay

lander:
	g++ kevinsay.cpp -o kevinsay

install: kevinsay
	mkdir -p ${BIN_DIR}
	install -c -m 755 kevinsay $(BIN_DIR)

clean:
	rm -f kevinsay
