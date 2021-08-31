#include <SimpleDHT.h>

int dht11_pin = 4;

int dht11_sample(byte * temperature, byte * humidity)
{
  SimpleDHT11 dht11;
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(dht11_pin, temperature, humidity, NULL)) != SimpleDHTErrSuccess) {
    *temperature = -100;
    *humidity = -100;
    return err;
  }

  return 0; // success
}
