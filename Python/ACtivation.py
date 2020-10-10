# -*- coding: utf-8 -*-
"""
Created on Fri Feb 28 10:11:39 2020

@author: ASHUTOSH
"""
# Implemtation of Activation Functions

# Import matplotlib, numpy and math 
import matplotlib.pyplot as plt 
import numpy as np  

x = np.linspace(0, 20, 1000) 
z = 1/(1 + np.exp(-x)) 

plt.plot(x, z) 
plt.xlabel("x") 
plt.ylabel("Sigmoid(X)") 
plt.title('Sigmoid-Function')
plt.show() 


def ReLU(x):
    e=[]
    for i in x:
        e.append(max(0,i))
    return e        
x = np.linspace(-20, 20, 1000) 
z =ReLU(x) 

plt.plot(x, z) 
plt.xlabel("x") 
plt.ylabel("ReLU(X)") 
plt.title('ReLU-Function')
plt.show() 


def LeakyReLU(x):
    e=[]
    for i in x:
        if i<0:
            e.append((0.04*i))
        else:
            e.append(i)
    return e        
x = np.linspace(-20, 20, 1000) 
z =LeakyReLU(x) 

plt.plot(x, z) 
plt.xlabel("x") 
plt.ylabel("Leaky ReLU(X)") 
plt.title('Leaky-RelU Function')
plt.show() 

def softmax(x):
    e_x = np.exp(x - np.max(x))
    return e_x / e_x.sum()

x = np.linspace(-20, 20, 1000) 
z =softmax(x) 

plt.plot(x, z) 
plt.xlabel("x") 
plt.ylabel("Softmax(X)") 
plt.title('Sogtmax-Function')
plt.show() 


def linear(x):
    y = 0.5*x+2
    return y

x = np.linspace(-20, 20, 1000) 
z =linear(x) 

plt.plot(x, z) 
plt.xlabel("x") 
plt.ylabel("Linear(X)") 
plt.title('Linear-Function')
plt.show() 

def tanh(x):
    y = np.tanh(x)
    return y

x = np.linspace(-20, 20, 1000) 
z =tanh(x) 

plt.plot(x, z) 
plt.xlabel("x") 
plt.ylabel("Tanh(X)") 
plt.title('Tanh-Function')
plt.show() 



def step(x):
    y = np.heaviside(x,0.5)
    return y

x = np.linspace(-20, 20, 1000) 
z =step(x) 

plt.plot(x, z) 
plt.xlabel("x") 
plt.ylabel("StepFunction(X)")
plt.title('Step-Function') 
plt.show() 





from scipy import signal

timePoints = np.linspace(0, 1, 500)
plt.plot(timePoints, signal.sawtooth(2 * np.pi * 5 * timePoints))
plt.title('Saw-Tooth Function')
plt.xlabel('Time')
plt.ylabel('Amplitude')
plt.grid(True, which='both')
plt.axhline(y=0, color='k')
plt.ylim(-2, 2)
plt.show()