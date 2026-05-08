# Día 3 – Bucles en C

**¿Qué aprendí?**
- A usar `for`, `while` y `do-while` para repetir tareas sin escribir código duplicado.
- A elegir el bucle correcto: `for` cuando sé cuántas veces, `do-while` cuando debo ejecutar al menos una vez, `while` cuando depende de una condición.
- A validar entrada de usuario con bucles anidados.
- A mejorar un programa añadiendo un menú repetitivo (calculadora con bucle).

**¿Qué me costó?**
- Al principio, el flujo de la calculadora: pedir números antes de saber si el usuario quería salir.
- Recordar declarar las variables fuera del bucle cuando las necesito en la condición (`while`).

**¿Para qué sirve en el mundo real?**
- Cualquier aplicación que no se cierre tras una sola acción (cajeros, videojuegos, menús interactivos).
- Validación de formularios: no avanzar hasta que el usuario dé datos correctos.

**Técnicas de ingeniería aprendidas:**
- Programación defensiva con `default` en `switch`.
- Principio de "No hagas trabajo innecesario": no pedir datos que no voy a usar.

---

## 🎯 Evaluación del profesor sobre mi desempeño hoy

**Puntos fuertes detectados por mi mentor:**
- Defensa de mi propio diseño (orden primer número → operación → segundo número) contra viento y marea. Eso es criterio de ingeniero, no de estudiante.
- Detección autónoma de errores de flujo: yo mismo noté que pedir números antes de saber si el usuario quiere salir era un error.
- Ojo crítico: detecté la ausencia del `default` en el `switch` antes que mi profesor. Mi instinto de programación defensiva está despertando.
- Mejora no solicitada: añadí invalidación de precios negativos en la suma acumulada sin que me lo pidieran.

**Áreas de mejora señaladas por mi mentor:**
- Sintaxis: todavía cometo errores de dedo (typos) como `numerario` en lugar de `numero`. Debo leer los mensajes del compilador con más calma.
- Autonomía en la traducción de lógica a C: mi lógica es excelente, pero a veces necesito ayuda para convertirla en código. Es normal en el Día 3.

**Mi plan de acción para mejorar:**
1. Mañana, en el Día 4, intentaré escribir el código del proyecto semanal yo solo, sin pedir ayuda salvo para revisión final.
2. Antes de compilar, leeré mi código en voz alta para cazar typos.
3. Practicaré la traducción de pseudocódigo a C con ejercicios extra el domingo.
