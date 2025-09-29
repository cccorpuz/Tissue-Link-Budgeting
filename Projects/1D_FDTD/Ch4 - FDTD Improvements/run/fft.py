import numpy as np
import matplotlib.pyplot as plt


# Load the first column from each CSV file
data0 = np.loadtxt('sim_output0.csv', delimiter=',')[:, 50]
data1 = np.loadtxt('sim_output1.csv', delimiter=',')[:, 50]

# Pad data0 with copies of its last value if it's shorter than data1
len0 = len(data0)
len1 = len(data1)
if len0 < len1:
    pad_length = len1 - len0
    last_value = data0[-1]
    data0 = np.concatenate([data0, np.full(pad_length, last_value)])
elif len1 < len0:
    # Optionally, pad data1 if it's shorter than data0
    pad_length = len0 - len1
    last_value = data1[-1]
    data1 = np.concatenate([data1, np.full(pad_length, last_value)])

    
# Keep data1 only after reflection
data1 -= data0

# Now both arrays are the same length
min_len = len(data0)


# Apply window
window = np.blackman(min_len)
data0 = data0 * window
data1 = data1 * window

# Plot both signals for comparison
plt.figure(figsize=(10, 6))
plt.plot(data0, label='sim_output0')
plt.plot(data1, label='sim_output1')
plt.xlabel('Sample Index')
plt.ylabel('Amplitude')
plt.title('Time Domain Signals')
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.savefig('time_domain_signals.png')
plt.close()

# Compute FFTs
fft0 = np.fft.fft(data0)
fft1 = np.fft.fft(data1)



# Compute frequency axis
n = min_len
# Read the time step value from dt.txt
with open('dt.txt', 'r') as f:
    dt = float(f.read().strip())
freq = np.fft.fftfreq(n, d=dt)


# Plot FFT magnitudes for both signals
plt.figure(figsize=(10, 6))
plt.plot(freq[:n//2], np.abs(fft0[:n//2]), label='FFT of sim_output0')
plt.plot(freq[:n//2], np.abs(fft1[:n//2]), label='FFT of sim_output1')
plt.xlabel('Frequency (Hz)')
plt.ylabel('Magnitude')
plt.title('FFT Magnitude of sim_output0 and sim_output1')
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.savefig('fft_magnitudes.png')
plt.close()

# Compute S11 (ratio of reflected to incident)
S11 = 20 * np.log10(np.abs(fft0) / np.abs(fft1))

# Plot magnitude of S11 (masking invalid regions) and limit max frequency to 24 GHz
max_freq = 18e9  # 24 GHz
mask = (freq >= 1e9) & (freq <= max_freq)

plt.figure(figsize=(10, 6))
plt.plot(freq[mask], S11[mask])
plt.xlabel('Frequency (Hz)')
plt.ylabel('|S11| (dB)')
plt.title('S11 Magnitude vs Frequency (up to 8 GHz)')
plt.grid(True)
plt.tight_layout()
plt.savefig('s11_plot.png')
plt.close()