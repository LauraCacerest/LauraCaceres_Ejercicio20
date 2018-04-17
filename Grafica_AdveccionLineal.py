import numpy as np
import matplotlib.pyplot as pyplot

datos=np.loadtxt('EvolucionDat.txt')

x=datos[:,0]
y=data[:,1]

plt.figure()
plt.pyplot(x,y)
plt.savefig('EvolucionAdveccion.png')
