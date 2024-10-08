CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98
TARGET = BraiiiiiiinnnzzzZ
OBJS = main.o Zombie.o RandomChump.o newZombie.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS)

re: clean all

fclean : clean 
	rm -f $(TARGET)

.PHONY: all clean