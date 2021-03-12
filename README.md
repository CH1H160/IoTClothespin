# IoTClothespin
雨滴センサを活用して乾き具合を測定するIoT洗濯バサミ

## Description
![top](https://user-images.githubusercontent.com/30834673/108352783-b113f480-722a-11eb-8f33-5d41ff6e77c6.jpg)

●M5Stack Atomと雨滴センサを組み合わせた洗濯バサミデバイス。

●Ambientへ乾燥度合を定期送信し、洗濯物の乾き具合を観察することができます。


## Usage
●必要な部品は以下の通りです。

|  No  |      名称              | 入手方法の例　  |  個数  |
| ---- | ---- | ---- | ---- |
|  1   |  [雨滴センサ](www.amazon.co.jp/dp/B01N1GOC7S)            　　　 | Amazon　|  1     |
|  2   |  コンパレータ基板       | (上記セット)　|  1    |
|  3   |  [M5Stack Atom Lite](https://www.switch-science.com/catalog/6262/)     | SwitchScience　|  1  |
|  4   |  [M5Stack Atom TailBat](https://www.switch-science.com/catalog/6348/)  | SwitchScience　|  1  |
|  5   |  [ジャンパー線](https://akizukidenshi.com/catalog/g/gC-05371/)           | 秋月電子通商　|  3  |
|  6   |  [ピンヘッダ2P](https://akizukidenshi.com/catalog/g/gC-08593/)        　　| 秋月電子通商　|  1  |
|  7   |  ピンチリング(直径40mm)　　　       　　　　| (洗濯バサミから外すと良い)　|  2  |
|  8   |  M2.5×5ネジ(なくても可)  　　　　| MISUMI　|  2  |
|  9   |  M2.5ビットインサート(なくても可) | MISUMI　|  2  |
|  10  |  [洗濯バサミ外装](https://github.com/CH1H160/IoTClothespin/tree/main/STL)(フィラメントは75g消費)           | (造形したもの)　|  3  |

●外装部品はSTLファイルを読み込み、3Dプリンタで造形してください。

![parts](https://user-images.githubusercontent.com/30834673/108585584-9194dd00-738c-11eb-9764-bcdf75ab78b8.jpeg)

●[Ambient](https://ambidata.io/)のアカウント登録を完了させ、チャネルIDとライトキーを入手してください。


![Ambient](https://user-images.githubusercontent.com/30834673/108611892-8098aa00-7426-11eb-847f-eb5601916f5b.JPG)

●[Ambientライブラリ](https://ambidata.io/docs/esp8266/)をインストールしてください。

![AmbientLib](https://user-images.githubusercontent.com/30834673/108611917-c5244580-7426-11eb-9bf8-66e4cdbb9003.JPG)

=======
●[Ambientライブラリ](https://ambidata.io/docs/esp8266/)をインストールしてください。


●組立要領は[fabcross](https://fabcross.jp/category/make/mobility/20210312_iot_device.html)記事を参考にしてください。

## Authors
[Ryota Kobayashi](https://protopedia.net/prototyper/ryotakobayashi)

## License
[MIT](https://github.com/CH1H160/IoTClothespin/blob/main/LICENSE)
