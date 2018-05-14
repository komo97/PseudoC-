#include "Source\Pseudo.h"

Clase(llamada(Testerino))
Acceso_publico
	Crear_variable(con_tipo de entero, llamada(test))
	Crear_variable(con_tipo de decimal, llamada(test2))
	Declarar_funcion(llamada(test3), que_regresa_un(entero), y_recibe(un entero por_referencia llamado(test) ademas_de un entero llamado(test2)))
Fin_de_la_clase

Funcion_de_clase(llamada(test3), que_regresa_un(entero), y_recibe(un entero por_referencia llamado(test)
	ademas_de un entero llamado(test2)), y_le_pertenece_a_la_clase(Testerino))
	Asignar_a(test, test2 MAS test)
	Regresar_valor(test)
Fin_de_la_funcion

Estructura( llamada(Testerono))
	Crear_variable(con_tipo de entero, llamada(test))
	Crear_variable(con_tipo de DECIMAL, llamada(test2))
FIN_DE_LA_ESTRUCTURA( llamada(Testerono))

Clase( llamada(Testeman), que hereda_de la clase_publica(Testerino))
Acceso_publico
	Crear_variable(con_tipo de Testerono, llamada(test1))
	Crear_variable(con_tipo de apuntador_de(entero), llamada(testApuntador))
	Declarar_constructor(llamado(Testeman))
	Declarar_destructor(llamado(Testeman))
Fin_de_la_clase

Implementar_constructor(llamado(Testeman))
	Llenar_estructura(llamada(test1), 1, 22.2f)
	Alocar_memoria(en testApuntador, como_un entero, con_el_valor_de(22))
	Destruir_variable(llamada(testApuntador))
Fin_del_constructor

Implementar_destructor(llamado(Testeman))

Fin_del_destructor

Programa
	Si 2 es_igual_a 22 o 3 es_menor_que 5 entonces
		imprimir 22 luego terminar_la_linea
	Despues terminar_la_comprobacion
	Luego
	Crear_coleccion(con_tipo de entero, llamada(laColeccion))
	Crear_variable(con_tipo de entero, llamada(iterador))
	Asignar_a(iterador, el_valor_de(0))
	Mientras iterador sea_menor_que 50 haz
		Agregar_a_la_coleccion(laColeccion, un numero_aleatorio_en_rango(0,1000))
		Incrementar(iterador)
	Fin_de_la_iteracion
	Crear_variable(con_tipo de entero, llamada(elMaximo))
	Asignar_a(elMaximo, el_valor_de(0))
	Para cada(numero) en laColeccion haz
		Si el numero es_mayor_que elMaximo entonces
			Asignar_a(elMaximo, el_valor_de(el numero))
		Despues terminar_la_comprobacion
	Fin_de_la_iteracion
	Imprimir elMaximo luego Terminar_la_linea
	Despues pausar_el_programa
Fin_del_programa