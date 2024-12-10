# Iterative and Recursive function

**1-masala.** Rekursiv funksiya orqali 1dan N+1gacha(N soni funksiya parametri sifatida ishlatiladi) sonlarni teskari tartibda chiqaring.

```c
**Input**: func(5)
**Output**: 5 4 3 2 1
```

**2-masala.** Rekursiv funksiya orqali 1dan N+1gacha(N soni funksiya parametri sifatida ishlatiladi) sonlarni to'g'ri tartibda chiqaring.

```c
**Input**: func(5)
**Output**: 1 2 3 4 5
```

**3-masala**. Rekursiv funksiya orqali 1dan Ngacha(N soni funksiya parametri sifatida ishlatiladi) sonlarni juftlarni teskari tartibda chiqaring.

```c
**Input**: func(9)			**Input**: func(6)
**Output**: 8 6 4 2			**Output**: 4 2
```

**4-masala**. Rekursiv funksiya orqali 1dan Ngacha(N soni funksiya parametri sifatida ishlatiladi) sonlarni toqlarni to'g'ri tartibda chiqaring.

```c
**Input:** func(5)			**Input**: func(6)
**Output:** 1 3			    **Output**: 1 3 5
```

**5-masala.** Rekursiv funksiya orqali A va B oraliqdagi(A va B qiymatlarini hisobga olgan holda) sonlarni agar A<B bo'lsa o'sish tartibida, aks holda esa kamayish tartibida chiqaruvchi funksiya tuzing.

```c
**Input:** func(1, 5) 			**Input:** func(5, 1)
**Output:** 1 2 3 4 5		**Output:** 5 4 3 2 1
```

**6-masala.** Rekursiv funksiya orqali 2ta butun sonning EKUBini (Eng katta umumiy bo’luvchi) toping. Funksiya parametri sifatida 2ta butun son kiritiladi.

```c
**Input:** EKUB(6,8)
**Output:** 2
```

**7-masala.** Rekursiv funksiya orqali 2ta butun sonning EKUKini (eng kichik umumiy karrali) toping. Funksiya parametri sifatida 2ta butun son kiritiladi. 

```c
**Input:** EKUK(6,8)
**Output:** 24
```

**8-masala.** N sonini parametr sifatida oladigan va N marta “Hello Code” so’zini chop etadigan **rekursiv** funksiya yozing.

```c
**Input**: func(4)
**Output**: Hello Code
				Hello Code
				Hello Code
				Hello Code
```

**9-masala.** N sonning M-darajasini hisoblovchi funksiya yozing;

```c
**Input**: func(2,3)			**Input**: func(5,2)
**Output**: 8				**Output**: 25
```

**10-masala.** N sonning M-darajasini hisoblovchi **rekursiv** funksiya yozing.

```c
**Input**: func(2,3)			**Input**: func(5,2)
**Output**: 8				**Output**: 25
```

**11-masala.** Rekursiv funksiya orqali 1dan Ngacha(N soni funksiya parametri sifatida ishlatiladi) sonlarni juftlarni chop etuvchi funksiya yozing.

```c
**Input**: func(5)			**Input**: func(8)
**Output**: 2 4			**Output**: 2 4 6
```

**12-masala.** Rekursiya yordamida N-fibonnachi sonini hisoblovchi funksiya yozing.

```c
**Input:** N=5				**Input:** N=6
**Output:** 5				**Output:** 8
```

**13-masala.** Berilgan sonni faktorialini hisoblovchi rekursiv funksiya yozing.

```c
**Input**: 5
**Output**: 120
```

**14-masala.** Berilgan sonni karra jadvalini chiqaruvchi rekursiv funksiya yozing.

```c
**Input:** func(9)
**Output:** 	9 x 1 = 9
					9 x 2 = 1
					9 x 3 = 27
					9 x 4 = 36
					9 x 5 = 45
					9 x 6 = 54
					9 x 7 = 63
					9 x 8 = 72	
					9 x 9 = 81
```

**15-masala.** Berilgan stringni teskari tartibda chiqaruvchi rekursiv funksiya yozing.

```c
**Input:** func(“Salom”);
**Output:** molaS
```

**16-masala.** Berilgan sonni raqamlar yig’indisini chiqaruvchi rekursiv funksiya yozing.

```c
**Input:** 1234
**Output:** 10 	*(1+2+3+4=10)*
```

**17-masala.** String ichida qavslar bilan yozilgan matematik ifoda beriladi. Bu stringda qavslar balansini tekshiruvchi funksiya yozing. (Ochilgan qavslar soni yopilgan qavslar soniga tengmi?)

```c
**Input:** “(12+5) - (2*5)”			**Input: “**12 + (100 - (5*4)**”
Output:** OK**;				          Output:** NOT OK;
```
