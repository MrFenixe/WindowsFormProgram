# Начальное знакомство с приложениями Windows Form
Разработка начальных приложений Windows Form в Visual Studio

## Содержание
Данная директория содержит:

 - файл с основным кодом приложения 
 - дополнительные подключаемые файлы
 
 ## Создание
 
 В заготовку кода вставили следующий фрагмент:
 
``` Series^ plot4 = chart1->Series[3];

Series^ plot5 = chart1->Series[4];

int T_vn, T_za, n;

float x, y, S_fig, S_r,er;
```
Очищаем графики (точки) для проведения повторного Расчета
```
plot4->Points->Clear();


plot5->Points->Clear();

if (textBox1->Text!="")

{
```
Запрашиваем количество точек
```
n = Convert::ToInt32(textBox1->Text);
```
Очищаем счетчики точек
```
T_vn = 0; T_za = 0;

for (int i=1; i<=n; i++)

{

57
```
Генерируем пару случайных чисел и трактуем их как

координаты случайной точки
```
x = rand()%201-100; y

= rand()%201-100;
```
Проверяем, куда попадает точка: внутрь фигуры или вне ее.

В зависимости от этого выбираем цвет точки.

Кроме того, ведем подсчет отдельно внешних и внутренних точек
```
if

(((x*x+y*y<=10000)&&(y>=0))||((y<0)&&(x<=100)&&(y>=-0.5*(x+100))))

{ plot4->Points->AddXY(x, y); T_vn++;}

else

{ plot5->Points->AddXY(x, y); T_za++;}

}
```
Количество точек внутри фигуры textBox2-
```
Text = Convert::ToString (T_vn);
```
Количество точек вне фигуры
```
textBox3->Text = Convert::ToString (T_za);
```
 Площадь фигуры, определенная по методу Монте-Карло
```
S_fig = 40000*T_vn/n;
```
Площадь реальная
```
S_r= 10000+M_PI*10000/2;
```
Ошибка
```
er = fabs(S_r-S_fig)/S_r*100; textBox4->Text

= Convert::ToString (S_fig); textBox5->Text =

Convert::ToString (er);

}
else MessageBox::Show( "Введите количество точек", "Ошибка
ввода данных",

MessageBoxButtons::OK, MessageBoxIcon::Exclamation );

} 
```

## Скриншот
![image](https://user-images.githubusercontent.com/44202889/245389960-7469fe32-861d-4ca3-bb54-def2aa244ab8.png)

## Контакты
- VK : https://vk.com/aframeevandrey
- Telegram: @mrfenixe
- mail : aframeev2@mail.ru
