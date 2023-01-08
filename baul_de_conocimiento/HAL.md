# HAL

## HAL data structures 


Each HAL driver can contain the following data structures: 

• Peripheral handle structures 
• Initialization and configuration structures 
• Specific process structures.

## Clasificacion del API

Estas se clasifican en 2 categorias

### API generica

Esta API contiene todo los elementos comunes a todos los MCU de STM32

### API externas

Esta se  divide en 2 sub categorias

#### API de familia especifica

Es una API que aplica solo a funciones disponibles por una familia, por ejemplo el ADC

```c
HAL_StatusTypeDef HAL_ADCEx_InjectedStop(ADC_HandleTypeDef* hadc); HAL_StatusTypeDef HAL_ADCEx_InjectedStop_IT(ADC_HandleTypeDef* hadc); HAL_StatusTypeDef HAL_ADCEx_InjectedStart(ADC_HandleTypeDef* hadc); HAL_StatusTypeDef HAL_ADCEx_InjectedStart_IT(ADC_HandleTypeDef* hadc);
```

#### API de numero de parte especifico

Esta API esta relacionada solamente al dispositivo especifico, se puede generalizar usando condiciones de precompilacion

```c
#if defined(STM32F427xx) || defined(STM32F437xx) || defined(STM32F429xx) || defined(STM32F439xx)

HAL_StatusTypeDef HAL_FLASHEx_OB_SelectPCROP(void); 
HAL_StatusTypeDef HAL_FLASHEx_OB_DeSelectPCROP(void); 

#endif
```

## [Configuracion de HAL](Configuracion%20de%20HAL.md)


