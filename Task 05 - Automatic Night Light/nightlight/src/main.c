#include <ch32v003fun.h>

#define LED_PIN GPIO_Pin_2  // PA2 (D6 on VSD Mini)

int main()
{
    SystemInit();
    Delay_Init();

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Pin = LED_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    while (1)
    {
        GPIO_SetBits(GPIOA, LED_PIN);   // LED OFF (if active low)
        Delay_Ms(500);
        GPIO_ResetBits(GPIOA, LED_PIN); // LED ON
        Delay_Ms(500);
    }
}
