# Installation #
Dört satir lcd ile uyumludur 
Kütüphanelerinizin bulunduğu "arduino/libraries" klasörüne bu kütüphaneyi klasör olarak ekleyin. Arduino IDE'yi yeniden başlatın ve örnekler arasında "Esp32_LiquidCrystalTr_I2C" olarak görünecek.

Karakter LCD'nin özel karakterler belleğine türkçe karakterleri atayarak çalışır. Yani özel karakterlerin kullanımında kısıtlama olur. Türkçe karakter içeren metinleri özel bir şey yapmadan yazdırmaya olanak verir.

ESP32 ile denenmiştir, PCF8574 ile denenmiştir.
D21-SDA ve D22-SCL pinleriyle çalışır.

-------------------------------------------------------------------------------------------------------------------
This library is based on work done by DFROBOT (www.dfrobot.com).
wire.h kütüphanesiyle birlikte çalışır.
türkçe karakter desteği eklenmiştir.
