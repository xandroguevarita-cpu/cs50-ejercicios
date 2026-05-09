# Día 4 – Funciones en C

**¿Qué aprendí?**
- A crear funciones con retorno (int, float) y sin retorno (void).
- A pasar parámetros a funciones para que trabajen con datos de main.
- A diferenciar "mostrar" de "devolver" (analogía del helado).
- A modularizar mi calculadora con 8 funciones independientes.

**¿Qué me costó?**
- Al principio confundí void con int. No sabía cuándo una función debía devolver algo.
- Entender cómo enlazar una variable de main con el parámetro de una función.
- La laptop se me apagó dos veces por un problema de carga. Tuve que ingeniármelas para seguir.

**¿Para qué sirve en el mundo real?**
- Cualquier sistema profesional divide su código en funciones. Si todo estuviera en main, sería imposible mantenerlo.
- Facilita la reutilización: una función de suma sirve para cualquier programa que necesite sumar.

**Técnicas de ingeniería aprendidas:**
- Responsabilidad única: cada función hace una sola cosa.
- DRY (No te repitas): no repetir código.
- Default en switch como airbag.
- Protección de división por cero dentro de la función, no en main.

---

## 🎯 Evaluación del profesor sobre mi desempeño hoy

**Puntos fuertes detectados por mi mentor:**
- Primera compilación sin errores en 4 días. El momento "void vs int" fue un parteaguas.
- Defensa de mi propio diseño: mantuve el orden (número → operación → número) y añadí el menú principal.
- Ojo crítico: detecté la ausencia del default en el switch antes que mi profesor.
- Resiliencia: solucioné un problema técnico real (cargador roto) sin abandonar la clase.

**Áreas de mejora señaladas por mi mentor:**
- Precisión en el enunciado: todavía confundo "devuelve" con "muestra". Debo leer con más calma.
- Autonomía en la traducción de lógica a C: mi lógica es excelente, pero a veces necesito el pseudocódigo como puente.

**Mi plan de acción para mejorar:**
1. Mañana, en el Día 5, intentaré escribir el código del proyecto semanal yo solo.
2. Antes de compilar, me preguntaré: "¿Esta función devuelve algo o solo muestra?"
3. Practicaré la traducción de pseudocódigo a C con ejercicios extra el domingo.