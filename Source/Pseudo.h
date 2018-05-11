#pragma once
#include <iostream>
#include <vector>
using namespace std;

//Crear el programa
#define PROGRAMA int main() {
#define FIN_DEL_PROGRAMA return 0; }

//Crear variables
#define CREAR_ARREGLO(tipo, nombre) vector<tipo> nombre;
#define CREAR_VARIABLE(tipo, nombre) tipo nombre;

//Tipos de variables
#define ARREGLO(tipo) vector<tipo> 
#define ENTERO int
#define DECIMAL float
#define BOOLEANO bool

//Operaciones con arreglos
#define ELEMENTO_DEL_ARREGLO(indice) [indice]
#define AÑADIR_AL_ARREGLO(arreglo, variable) arreglo.push_back(variable);

//Comparaciones
#define ES_IGUAL_A ==
#define SEA_IGUAL_QUE ES_IGUAL_A
#define NO_ES_IGUAL_A !=
#define NO_SEA_IGUAL_QUE NO_ES_IGUAL_A
#define ES_MENOR_O_IGUAL_A <=
#define SEA_MENOR_O_IGUAL_QUE ES_MENOR_O_IGUAL_A
#define ES_MAYOR_O_IGUAL_A >=
#define SEA_MAYOR_O_IGUAL_QUE ES_MAYOR_O_IGUAL_A
#define ES_MENOR_A <
#define SEA_MENOR_QUE ES_MENOR_A
#define ES_MAYOR_A >
#define SEA_MAYOR_QUE ES_MAYOR_A

//Iteraciones
#define PARA for(
#define CADA(x) auto &x :
#define EN(y) y
#define MIENTRAS while(
#define HAZ ){

//Comparaciones
#define SI if(
#define SI_NO else if(
#define ENTONCES ){

//Fin de iteraciones o comparaciones
#define FIN }

//Operaciones con variables
#define MAS +
#define MENOS -
#define POR *
#define ENTRE /
#define INCREMENTAR(x) ++x;
#define DISMINUIR(x) --;
#define RESIDUO_DE %
#define ASIGNAR_A(asignada, asignacion) asignada = asignacion;

//Entrada y salida de datos
#define IMPRIMIR cout << 
#define RECOGER_ENTRADA(dondeSeVaAGuardar) cin >> dondeSeVaAGuardar;
#define IMPRIMIR_ARREGLO(arreglo) PARA CADA(i) EN(arreglo) HAZ IMPRIMIR i FIN_DE_LINEA FIN
#define FIN_DE_LINEA << endl;

//Funciones
#define FUNCION(regreso, nombre, recibe) regreso nombre recibe {
#define REGRESA_UN(tipoDeVariable) tipoDeVariable
#define NOMBRE_DE_FUNCION(nombre) nombre
#define RECIBE(...) (__VA_ARGS__)
#define RETORNAR(x) return x;
#define USAR_FUNCION(nombre, ...) nombre(__VA_ARGS__);

//Pausar el programa
#define PAUSAR_PROGRAMA system("pause");

//Generación de numeros aleatorios
#define NUMERO_ALEATORIO(min, max) ((rand() % (max - min)) + min)