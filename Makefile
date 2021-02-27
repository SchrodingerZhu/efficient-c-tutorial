CXX := mipsel-linux-musl-gcc
ASSEMBLYS := ${TARGET}.S

$(TARGET): $(ASSEMBLYS)
	$(CXX) $^ -static -o $@

$(ASSEMBLYS): $(TARGET).c
	$(CXX) -g $^ -S -o $@

run: $(TARGET)
	qemu-mipsel $^

clean:
	-@rm -f $(TARGET)
	-@rm -f $(ASSEMBLYS)
