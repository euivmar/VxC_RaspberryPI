OBJS = TrainAndTest.o
CC = g++
DEBUG = -g
INC_PATH = -I/home/pi/raspicam-0.1.3/src
CFLAGS = -Wall -c $(DEBUG) $(INC_PATH)
LFLAGS = -Wall $(DEBUG) -L/home/pi/raspicam-0.1.3/build/src

TrainAndTest: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -lopencv_imgcodecs -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_ml -lraspicam -lraspicam_cv -o TrainAndTest

TrainAndTest.o: TrainAndTest.cpp
	$(CC) $(CFLAGS) TrainAndTest.cpp

info:
	@echo OBJS = $(OBJS)
	@echo CC = $(CC)info:
	@echo OBJS = $(OBJS)
	@echo CC = $(CC)
	@echo DEBUG = $(DEBUG)
	@echo INC_PATH = $(INC_PATH)
	@echo CFLAGS = $(CFLAGS)
	@echo LFLAGS = $(LFLAGS)
	@echo DEBUG = $(DEBUG)
	@echo INC_PATH = $(INC_PATH)
	@echo CFLAGS = $(CFLAGS)
	@echo LFLAGS = $(LFLAGS)