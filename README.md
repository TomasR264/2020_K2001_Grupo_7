# 2020_K2001_Grupo_7

# Para tenerlo en su computadora usan git clone "direccion del repo para clonarlo"
# Pueden ver el estado de sus archivos que modficaron con git status
# Para agregarlos asi poder subirlos se usa el comando git add "nombre del archivo", en caso de que quieran agregar todos juntos hacen git add . (el punto representa al all)
# Para hacer el commit, es decir contarnos a todos que fue lo que modficaron escriben git commit -m "Modifique el archivo README.md para escribir los comandos"
# Ahora solo nos queda subirlo para que todos lo veamos. git push origin master



# Checkout:
# Muy probablemente no quieras modificar el codigo original que esta en "master". Por lo que git brinda una simple solucion, trabajar en un branch aparte. vendria a ser una clonacion del original, solo que trabajando en este, no estamos modificando el original.
# Para hacerlo podemos usar este comando git checkout -b "new-branch" y para subirlo hacemos los mismos pasos que antes, excepto que cuando hagamos el push lo haremos al nombre de nuestra branch.
# git push origin new-branch. Ahi todo el equipo revisara el codigo y si esta todo okey y no hay ninguna conflicto, se lo integra a master y este branch pasa a ser eliminado.

