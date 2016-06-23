OBJS = practica1.o
CC = g++
DEBUG = -g
INC_PATH = -I/home/pi/raspicam-0.1.3/src
CFLAGS = -Wall -c $(DEBUG) $(INC_PATH)
LFLAGS = -Wall $(DEBUG) -L/home/pi/raspicam-0.1.3/build/src

practica1: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -lopencv_xphoto -lopencv_imgcodecs -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_ml -lraspicam -lraspicam_cv -o practica1

practica1.o: practica1.cpp
	$(CC) $(CFLAGS) practica1.cpp

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