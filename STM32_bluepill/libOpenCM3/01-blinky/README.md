# Ejemplo que hace parpadear un LED

En este ejemplo se hace uso de la configuración básica, sirve simplemente para saber si funciona el programador/debugger

## Para compilar

El proyecto está desarrollado con [PlatformIO](https://platformio.org/) utilizando [VSCodium](https://vscodium.com/). Al abrir la carpeta se reconocerá el proyecto a través del archivo `platformio.ini`. Este software se encargará de descargar y configurar las libs necesarias para que pueda compilar el proyecto.

## Para grabar

Por defualt se utilizará el `ST-LinkV2` como herramienta de grabado y debuggin. Si necesita utilizar otras herramientas debe descomentar la correspondiente en el archivo `platformio.ini`:

```
; Para Blackmagic:
; upload_protocol = blackmagic

; Para grabar por medio de la USART1=> PA9-PA10 (BOOT0=1, BOOT1=0)
; upload_protocol = serial

; Para dap boot por medio del USB (BOOT0=0, BOOT1=1)
; upload_protocol = dfu
; upload_command = $PROJECT_PACKAGES_DIR/tool-dfuutil/bin/dfu-util -D $SOURCE
```