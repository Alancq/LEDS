/*
-Al arrancar el sistema todos los leds tienen que estar apagados.
-despues de arrancar el sistema, con todos los leds apagados, voy a prender un led cualquiera.
-voy a prender un led y volver a apagarlo para ver si se apaga.
-prender dos leds, apagar uno, y ver que solo se apaga el que corresponde y que el otro sigue prendido
-prender todos los leds juntos
-prender un led, voy a consultar el estado y tiene que figurara como prendido 
*/

#include "unity.h"
#include "leds.h"
//-Al arrancar el sistema todos los leds tienen que estar apagados.

void test_todos_los_leds_deben_arrancar_apagados(void){
    uint16_t puerto_virtual=0xFFFF;
    leds_init(&puerto_virtual);

    TEST_ASSERT_EQUAL_HEX16(0X0000,puerto_virtual);
}