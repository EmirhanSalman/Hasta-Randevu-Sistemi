# Hasta Randevu Alma Sistemi

Bu proje, C dilinde yazılmış basit bir **Hasta Randevu Alma Sistemi** uygulamasıdır. Kullanıcılar doktor seçimi yaparak, uygun saatler içerisinde randevu alabilirler. Sistem iki doktor üzerinden çalışmakta ve her doktorun saat uygunluğu kontrol edilmektedir.

## 📌 Özellikler

- Hasta adı, soyadı ve TC kimlik numarası kaydı
- Doktor seçimi (Fatih Çubuk veya Salih Durmuş)
- Doktor başına maksimum hasta kontrolü
- Randevu saatlerinin doluluk kontrolü (08:00 - 17:00 saatleri arası)
- Randevu saatlerinin çakışmasını engelleme
- Girilen hasta bilgilerini listeleme

## 📂 Dosya İçeriği

- `hasta_randevu.c`: Ana kaynak kod dosyası.

## 📅 Ödev Tarihi

> **16 Aralık 2022**

## 🚀 Kullanım

1. Derleyiciye uygun olarak `.c` dosyasını çalıştırın.
2. Program sizi adım adım yönlendirecektir.
3. Randevu almak için hasta bilgilerini ve doktor tercihini girin.
4. Uygun saat ve doktor seçimi yapıldığında, bilgiler kaydedilir ve çıktı olarak gösterilir.

## 🛠️ Derleme Örneği (GCC için)

```bash
gcc hasta_randevu.c -o hasta_randevu
./hasta_randevu
