/**
 * @file main.c
 * @author Matías S. Ávalos (msavalos@gmail.com)
 * @brief Ejemplo de blink en la Bluepill
 * @version 0.1
 * @date 2023-01-10
 *
 * @copyright Copyright (c) 2023
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 *
 */

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

int main(void)
{
    // Se habilita el clock principal con el PLL a 72Mhz (máximo)
    rcc_clock_setup_in_hse_8mhz_out_72mhz();

    // Se habilita el clock al periférico del GPIOC (de lo contrario no funciona)
    rcc_periph_clock_enable(RCC_GPIOC);

    // PC13: SALIDA PUSH-PULL a Fmax=2Mhz
    gpio_set_mode(GPIOC, GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, GPIO13);

    while (true)
    {
        // Se invierte el estado del PC13 (HIGH->LOW o LOW->HIGH)
        gpio_toggle(GPIOC, GPIO13);

        // delay "a ojo" para poder apreciar el parpadeo
        for (volatile uint32_t i = 0; i < 7200000; ++i)
            ;
    }
}
