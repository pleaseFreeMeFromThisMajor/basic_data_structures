# Khai báo trình biên dịch và các flag
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Tên file đầu ra (file chạy)
TARGET = main

# Danh sách các file nguồn .cpp
SRCS = main.cpp list.cpp

# Danh sách các file object .o tương ứng
OBJS = $(SRCS:.cpp=.o)

# Target mặc định khi gõ `make`
all: $(TARGET)

# Quy tắc tạo file thực thi từ các file .o
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Quy tắc biên dịch từng file .cpp thành .o
%.o: %.cpp list.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)
	
# Lệnh dọn dẹp các file rác sau khi biên dịch
clean:
	rm -f $(OBJS) $(TARGET)   # Trên Linux/macOS hoặc Git Bash
#	del /f /q $(OBJS) $(TARGET).exe  # Nếu dùng CMD trên Windows