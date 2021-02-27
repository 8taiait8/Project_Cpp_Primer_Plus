############
# File_Dir
INCLUDE_DIR=$(ROOT_DIR)/include
C_FLAGS= -c -std=c++11
#子目录的Makefile直接读取其子目录就行
SUBDIRS=$(shell ls -l | grep ^d | awk '{print $$9}')
#以下同根目录下的makefile的相同代码的解释
CUR_SOURCE=${wildcard *.cpp}
CUR_OBJS=${patsubst %.cpp, %.o, $(CUR_SOURCE)}
all:$(SUBDIRS) $(CUR_OBJS)
$(SUBDIRS):ECHO
	make -C $@
$(CUR_OBJS):%.o:%.cpp
	$(CC) -I$(INCLUDE_DIR) $(C_FLAGS) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@
	cp *.hpp $(INCLUDE_DIR)
ECHO:
	@echo $(SUBDIRS)
############
