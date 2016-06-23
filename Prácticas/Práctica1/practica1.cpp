/*******************************************
				Práctica 1 VxC Raspberry pi
********************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include "/home/pi/raspicam-0.1.3/src/raspicam_cv.h"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/xphoto.hpp"


using namespace std;

int main(int argc, char **argv) {

	raspicam::RaspiCam_Cv Camera;

	Camera.set(CV_CAP_PROP_FRAME_WIDTH, 320);
	Camera.set(CV_CAP_PROP_FRAME_HEIGHT, 240);
	Camera.set(CV_CAP_PROP_BRIGHTNESS, 50);
	Camera.set(CV_CAP_PROP_CONTRAST, 50);
	Camera.set(CV_CAP_PROP_SATURATION, 50);
	Camera.set(CV_CAP_PROP_GAIN, 50);
	Camera.set(CV_CAP_PROP_FORMAT, CV_8UC3); //BGR


	cout << "Conectando a la cámara" << endl;
	bool conectada;
														//<-Completar
	if (!conectada) {											
		cerr << "Error abriendo la cámara" << endl;
		return -1;
	}
	cout << "Connectado a la cámara =" << Camera.getId() << endl;

	cv::Mat image;
	cv::Mat imageOK; //Método 1
	cv::Mat imageOK2;//Método 2
	cout << "Capturando patrón blanco" << endl;

	cv::Mat gainMatrix;
	unsigned char r, g, b;
	unsigned char blueGain = 0;
	unsigned char redGain = 0;
	unsigned char greenGain = 0;
	unsigned char maxVal = 0;

	//Capturar imagen patrón blanco														//<-Completar
	

	//Reservar matriz de ganancias del mismo tamaño que la imagen adquirida 
						//<-Completar

	//Recorrer todos los píxeles de la imagen 
	for (int i = 0; i < image.cols; i++) {
		for (int j = 0; j < image.rows; j++) {
			b = image.at<cv::Vec3b>(j, i)[0];	//Píxel j, i canal azul
			g = image.at<cv::Vec3b>(j, i)[1];	//Píxel j, i canal verde
			r = image.at<cv::Vec3b>(j, i)[2];	//Píxel j, i canal rojo

			//Calcular el valor máximo de los tres canales:
																						//<-Completar

			//Calcular la matriz de ganacias
																						//<-Completar

		}

	}


	//Bucle infinito para adquirir imágenes 
	while (1) {
		cout << "Capturando imágenes " << endl;
		//Adquirir imagen
																						//<-Completar

		//Copiar en imágenes OK e imágenes OK2 (para no modificar la original)
		imageOK = image.clone();
		imageOK2 = image.clone();


		//Corregir imagen OK con el método 1 de la matriz de ganancias (cuidado con la saturación)

		for (int i = 0; i<imageOK.cols; i++) {
			for (int j = 0; j<imageOK.rows; j++) {
				//Acceder a los pixeles de la matriz de ganancias
																				//<-Completar

				//Comprobar saturación canal azul y corregir pixel
																				//<-Completar
				//Comprobar saturación canal verde y corregir pixel
																				//<-Completar
				//Comprobar saturación canal rojo y corregir pixel
				

			}

		}

		//Corregir imagen OK 2con el método 2 dela función balanceWhite
																					//<-Completar


		//Mostrar imagen original y las 2 corregidas
																					//<-Completar
		

		if (cv::waitKey(30) == 27) //Espera 30 milisegundo y sale del bucle si detecta que se ha pulsado la tecla esc
		{
			cout << "Captura abortada por el usuario al pulsar esc" << endl;

			break;
		}

	}

	//Liberar la cámara
	Camera.release();

}
