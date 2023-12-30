#Python code using Matplotlib to plot the magnitude and phase information obtained from a Fast Fourier Transform 
#(FFT) of an arbitrary cosine function:
#This code generates two plots: the first plot shows the time domain signal,and the second plot shows the 
#magnitude of the frequency domain signal. Additionally,a third plot is generated to show the phase information \
#obtained from the FFT result.
import numpy as np
import matplotlib.pyplot as plt
#Define the signal parameters
A=1#Amplitude
fc=100#Frequency
phi=np.pi/4#Phase
#Define the time domain signal x(t)
t=np.linspace(0,1,1000)
x=A*np.cos(2*np.pi*fc*t+phi)
#Plot the time domain signal
plt.subplot(2,1,1)
plt.plot(t,x)
plt.title('Time Domain Signal')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')
#Compute the FFT of x(t)
X=np.fft.fft(x)
#Extract the magnitude and phase information from the FFT result
X_mag=np.abs(X)
X_phase=np.angle(X)
#Reconstruct the time domain signal from the frequency domain samples
x_recon=np.fft.ifft(X)
#Plot the frequency domain signal
f=np.linspace(0,1,len(X))
plt.subplot(2,1,2)
plt.plot(f,X_mag)
plt.title('Frequency Domain Signal')
plt.xlabel('Frequency (Hz)')
plt.ylabel('Magnitude')
#Plot the phase information
plt.figure()
plt.plot(f,X_phase)
plt.title('Phase Information')
plt.xlabel('Frequency (Hz)')
plt.ylabel('Phase (radians)')
#Show the plots
plt.show()