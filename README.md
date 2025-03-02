# BONYO6X

<img src="https://github.com/Tsuiha/BONYO6X/blob/main/picture/bonyo6x.jpg" width="700">

　BONYO6Xは60%キーボードの汎用ケース、所謂Poker, GH60, DZ60等に対応したケースと互換性のあるPCBです。
 
　他人でも初見で使える, 自分でも不満なく使える, ことをコンセプトとしています。基本的なANSIは崩さずにカスタマイズ性も確保した構成を目指した、特化型でなく器用貧乏型のキーボードです。
 
　使用用途は実務からラフな普段使いまで, 一台で可もなく不可もなく, 満遍なくこなすことを想定しています。

　リポジトリに設計データが公開されています。 自由にしてください。

　[noteでも紹介しています](https://note.com/tsuiha/m/m13bdadaac60e)

## キー配置

　ANSIをベースに私の趣味を加え以下のようにカスタムしたものになります。

・2U Shift Layout  
　Row StaggeredよりもColumn StaggeredやOrtholinearが好きなこともあり、オフセット量の揃った2U Shiftの方が好みです。

・1.5U, 2U, 1.5U Thumb Cluster  
　2U スペースキーの左右に1.5U Modキーを配置し、レイヤー移動を前提とした配列としています。

・Arrow Keys  
　Arrow KeysがTop Layerにあると痒い時に手が届きます。DZ60系の詰めた配列ではなく、1.75U Shiftを端に、Arrow Keysはその内側に配置しています。

・Tactile Switch  
　キーボード右下にタクトスイッチを搭載可能です。マイクミュート, スクリーンショット, リプレイの保存 等、キースイッチと独立したFunctionキーとして使用できます。

<img src="https://github.com/Tsuiha/BONYO6X/blob/main/picture/bonyo6x.png" width="700">
画像はkeyboard-layout-editor.comにて作成しました。

## LED
　LEDが2個搭載可能です。デフォルトでは現在のレイヤーに対応して発光色が変化します。
　発光強度や色、光らせ方はファームウェアを改変し変更することができます。

<img src="https://github.com/Tsuiha/BONYO6X/blob/main/picture/bonyo6x%20(7).jpg" width="700">

## タクタイルスイッチ
　タクタイルスイッチが1個搭載可能です。ケース高に応じて高さのあったスイッチを使用してください。フローティングデザインのケースでは7mmのものを、通常デザインのケースでは11mmのものを画像では使用しています。

<img src="https://github.com/Tsuiha/BONYO6X/blob/main/picture/bonyo6x%20(3).JPG" width="700">

# 組み立て

## PCB & Switch Plate 
　誰かが製造したものを入手するか、公開されている設計データから自身で製造ください。JLCPCBを使用する際は発注データが公開されています。

<img src="https://github.com/Tsuiha/BONYO6X/blob/main/picture/bonyo6x%20(2).JPG" width="700">

## LED SK6812MINI-E x2
　オプションでLEDを取り付けることができます。

<img src="https://github.com/Tsuiha/BONYO6X/blob/main/picture/bonyo6x%20(4).JPG" width="700">

## Tactile Switch x1
　オプションでタクトスイッチを取り付けることができます。6x6mmサイズの2pinまたは4pinのものを使用することができます。

<img src="https://github.com/Tsuiha/BONYO6X/blob/main/picture/bonyo6x%20(5).JPG" width="700">

<img src="https://github.com/Tsuiha/BONYO6X/blob/main/picture/bonyo6x%20(6).JPG" width="700">

## qmk-vial
　ファームウェアにはqmk-vialを使用しています。  
