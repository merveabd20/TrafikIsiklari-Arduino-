void setup()
{
  pinMode(2, OUTPUT);//kırmızı led
  pinMode(3, OUTPUT);//sarı led
  pinMode(4, OUTPUT);//yeşil led
}
//22saniye kırmızı 12sarı 5syeşil
void loop()
{
  digitalWrite(2,HIGH);//kımızı led yansın
  delay(10000);//10 saniye kırmızı yandı
  digitalWrite(3, HIGH);
  delay(12000);//12 saniye sarı ve kırmızı beraber yandı
  //10 saniye sarı sonra 2 saniye daha beklyip söndü
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(5000);//5 saniye yeşil ışık yandı
  digitalWrite(4,LOW);
}
