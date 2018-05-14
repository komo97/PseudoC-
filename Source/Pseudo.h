#pragma once
#include <iostream>
#include <vector>
using namespace std;

//Crear el programa
#define PROGRAMA int main() {
#define FIN_DEL_PROGRAMA return 0; }
#define FORZAR_TERMINACION_DEL_PROGRAMA exit(-1);

//Crear variables
#define CREAR_ARREGLO(tipo, nombre) vector<tipo> nombre;
#define CREAR_VARIABLE(tipo, nombre) tipo nombre;
#define APUNTADOR_DE(tipoDeVariable) tipoDeVariable*
#define REFERENCIA &
#define POR_REFERENCIA REFERENCIA
#define ALOCAR_MEMORIA(variable, tipo, ...) variable = new tipo(__VA_ARGS__);
#define DESTRUIR_VARIABLE(variable) delete variable;

//Tipos de variables
#define ARREGLO(tipo) vector<tipo> 
#define ENTERO int
#define DECIMAL float
#define BOOLEANO bool
#define LETRA char
#define ORACION string

//Operaciones con arreglos
#define ELEMENTO_DEL_ARREGLO(indice) [indice]
#define AGREGAR_AL_ARREGLO(arreglo, variable) arreglo.push_back(variable);

//Comparaciones entre variables
#define ES_IGUAL_A ==
#define SEA_IGUAL_QUE ES_IGUAL_A
#define ES_IGUAL_QUE ES_IGUAL_A
#define NO_ES_IGUAL_A !=
#define NO_ES_IGUAL_QUE NO_ES_IGUAL_A
#define NO_SEA_IGUAL_QUE NO_ES_IGUAL_A
#define ES_MENOR_O_IGUAL_A <=
#define ES_MENOR_O_IGUAL_QUE ES_MENOR_O_IGUAL_A
#define SEA_MENOR_O_IGUAL_QUE ES_MENOR_O_IGUAL_A
#define ES_MAYOR_O_IGUAL_A >=
#define ES_MAYOR_O_IGUAL_QUE ES_MAYOR_O_IGUAL_A
#define SEA_MAYOR_O_IGUAL_QUE ES_MAYOR_O_IGUAL_A
#define ES_MENOR_A <
#define ES_MENOR_QUE ES_MENOR_A
#define SEA_MENOR_QUE ES_MENOR_A
#define ES_MAYOR_A >
#define ES_MAYOR_QUE ES_MAYOR_A
#define SEA_MAYOR_QUE ES_MAYOR_A

//Constantes
#define NULO nullptr
#define VERDADERO true
#define FALSO false

//Operadores logicos
#define Y &&
#define O ||
#define NO !

//Operadores binarios
#define Y_BINARIO &
#define O_BINARIO |
#define MOVER_A_LA_IZQUIERDA << 
#define MOVER_A_LA_DERECHA >> 

//Iteraciones
#define PARA for(
#define CADA(x) auto &x :
#define MIENTRAS while(
#define HAZ ){
#define FIN_DE_LA_ITERACION }
#define TERMINAR_LA_ITERERACION break;

//Comparaciones
#define SI if(
#define SI_NO else if(
#define ENTONCES ){
#define FIN_DE_LA_COMPROBACION }
#define TERMINAR_LA_COMPROBACION FIN_DE_LA_COMPROBACION

//Operaciones con variables
#define ES = 
#define MAS +
#define MENOS -
#define POR *
#define ENTRE /
#define INCREMENTAR(x) ++x;
#define DISMINUIR(x) --;
#define RESIDUO_DE %
#define ASIGNAR_A(asignada, asignacion) asignada = asignacion;
#define DATOS_DE_APUNTADOR(variable) *variable
#define ACCESO_A_MIEMBROS_DE_APUNTADOR ->
#define ACCESO_A_MIEMBROS_DE_DATOS .
#define CON_EL_VALOR_DE(val) val
#define EL_VALOR_DE(val) val

//Entrada y salida de datos
#define IMPRIMIR cout << 
#define RECOGER_ENTRADA(dondeSeVaAGuardar) cin >> dondeSeVaAGuardar;
#define IMPRIMIR_ARREGLO(arreglo) PARA CADA(i) EN(arreglo) HAZ IMPRIMIR i FIN_DE_LINEA FIN
#define FIN_DE_LA_LINEA << endl;
#define TERMINAR_LA_LINEA FIN_DE_LA_LINEA

//Funciones
#define FUNCION(regreso, nombre, recibe) regreso nombre recibe {
#define DECLARAR_FUNCION(nombre, regreso, recibe) regreso nombre recibe;
#define FUNCION_DE_CLASE(nombre, regreso, recibe, clase) regreso clase::nombre recibe {
#define QUE_REGRESA_UN(tipoDeVariable) tipoDeVariable
#define NOMBRE_DE_FUNCION(nombre) nombre
#define Y_RECIBE(...) (__VA_ARGS__)
#define RECIBE(...) (__VA_ARGS__)
#define REGRESAR_VALOR(x) return x;
#define LLAMAR_FUNCION(nombre, ...) nombre(__VA_ARGS__);
#define FIN_DE_LA_FUNCION }
#define LLAMADO(nombre) nombre
#define LLAMADA(nombre) nombre

//Estructuras
#define ESTRUCTURA(nombre) typedef struct nombre{
#define FIN_DE_LA_ESTRUCTURA(nombre) }nombre;
#define LLENAR_ESTRUCTURA(variable, ...) variable = { __VA_ARGS__ };

//Clases
#define HEREDA_DE : 
#define CLASE_PUBLICA(nombre) public nombre
#define CLASE_PRIVADA(nombre) private nombre
#define CLASE_PROTEGIDA(nombre) protected nombre
#define CLASE(nombre, ...) class nombre __VA_ARGS__ {
#define CONSTRUCTOR(clase, ...) clase (__VA_ARGS__){
#define FIN_DEL_CONSTRUCTOR }
#define DECLARAR_CONSTRUCTOR(clase, ...) clase (__VA_ARGS__);
#define IMPLEMENTAR_CONSTRUCTOR(clase, ...) clase::clase (__VA_ARGS__) {
#define DESTRUCTOR(clase, ...) ~clase (__VA_ARGS__){
#define FIN_DEL_DESTRUCTOR }
#define DECLARAR_DESTRUCTOR(clase, ...) ~clase (__VA_ARGS__);
#define IMPLEMENTAR_DESTRUCTOR(clase, ...) clase::~clase (__VA_ARGS__) {
#define ACCESO_PUBLICO public:
#define ACCESO_PRIVADO private:
#define ACCESO_PROTEGIDO protected:
#define FIN_DE_LA_CLASE };
#define Y_LE_PERTENECE_A_LA_CLASE(nombre) nombre

//Pausar el programa
#define PAUSAR_EL_PROGRAMA  cin.ignore( numeric_limits<streamsize>::max(), '\n' ) ;

//Generación de numeros aleatorios
#define NUMERO_ALEATORIO_EN_RANGO(min, max) ((rand() % (max - min)) + min)
#define NUMERO_ALEATORIO rand()

//Enumeraciones
#define ENUMERACION(nombre) typedef enum nombre {
#define FIN_DE_LA_ENUMERACION(nombre) }nombre;

//Expresiones vacias
#define LUEGO 
#define LUGARES 
#define DESPUES
#define UN
#define CON_TIPO
#define QUE
#define LA
#define EL
#define EN 
#define DE
#define COMO_UN

#define ADEMAS_DE ,