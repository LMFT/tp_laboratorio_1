/** \brief Pide un numero entero al usuario y devuelve ese numero
 *
 * \return int Numero ingresado por el usuario
 *
 */

int pedirNumeroEntero();


/** \brief Pide un numero flotante al usuario y devuelve ese numero
 *
 * \return int Numero ingresado por el usuario
 *
 */
float pedirNumeroFlotante();


/** \brief Verifica si el usuario realiz� un ingreso de datos por primera vez, impidiendo el acceso a las funciones de realizar y mostrar
            calculos
 *
 * \param opcion int Opcion elegida por el usuario
 * \param flag int Bandera que indica si el usuario ingreso datos previamente
 * \return int Retorna 0 si el usuario no ingres� datos previamente. 1 si el usuario ingres� datos previamente o selecciono
            una opcion valida
 *
 */
int ValidateInput(int);

/** \brief Permite ingresar datos a un array de enteros
 *
 * \param int Tama�o del array
 * \param [] int Array a cargar
 *
 */
void InputArrayInt(int , int []);

/** \brief Permite ingresar datos a un array de flotantes
 *
 * \param int Tama�o del array
 * \param [] int Array a cargar
 *
 */
void InputArrayFloat(int, float []);


/** \brief Permite ingresar un string de caracteres alfabeticos
 *
 * \param [] char Array a escribir
 * \param int Tama�o del array
 *
 */
void InputString(char [], int );

/** \brief Permite ingresar un caracter y validar que se haya ingresado un �nico caracter
 *
 * \return char Caracter ingresado
 *
 */
char InputChar();

/** \brief Valida que un string contenga solamente caracteres alfabeticos
 *
 * \param [] char Array a validar
 * \param int Tama�o del array
 * \return La funcion retorna 0 si no encontr� ni
 *
 */
int ValidateStringOnlyText (char [], int);
