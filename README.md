# 進数変換コード

<img width="auto" src="https://user-images.githubusercontent.com/87808547/202405277-0eb9c007-ecee-4cec-bf60-456616f74d95.png">

## 基本情報

<table>
 <tbody>
   <tr>
       <td>名前</td>
       <td>進数変換コード</td>
   </tr>
   <tr>
       <td>読み方</td>
       <td>シンスウヘンカンコード</td>
   </tr>
   <tr>
       <td>制作時間</td>
       <td>1週間</td>
   </tr>
   <tr>
       <td>使用した言語(データ形式等含む)</td>
       <td>
         <ul>
           <li>C言語 ( C++含む )</li>
         </ul>
       </td>
   </tr>
   <tr>
       <td>制作環境</td>
       <td>
         <ul>
           <li>PC ( Windows ) </li>
         </ul>
       </td>
   </tr>
   <tr>
       <td>公開先</td>
       <td>展示用ソフト</td>
   </tr>
   <tr>
       <td>ライセンス</td>
       <td>GNU General Public License version 3.0（GPL v3.0）</td>
   </tr>
   <tr>
       <td>ソースコード</td>
       <td>https://github.com/ITsystemLab/c_hexadecimal</td>
   </tr>
 </tbody>
</table>

## 製作者から・・・

# こだわった点
<ul>
  <li>関数を使うことによってなるべく見やすいプログラムにしたこと</li>
  <li>２進数を４文字区切りで出力するようにしたこと。 </li>
</ul>

# 大変だった点
<ul>
  <li>１６進数から１０進数に変換するプログラムが思いつかなく、ネットに掲載されているコードも自分の知らないコードばかりで理解することが大変だった。 </li>
</ul>

# 実装できなかった点

<ul>
  <li></li>
</ul>

# 改良点
<ul>
  <li>今回のプログラムでは、負の数のことを考慮していないので、負の数も変換するできるようにすること。 </li>
</ul>

## 使い方

<img width="auto" src="https://user-images.githubusercontent.com/87808547/202405277-0eb9c007-ecee-4cec-bf60-456616f74d95.png">

<ol>
  <li>2進数か16進数か選択する</li>
  b: 2進数
  h: 16進数
  e: 終了
  <li>進数変換の方向を選択する</li>
  1: 2進数から10進数 ( または、16進数から10進数 )
  2: 10進数から2進数 ( または、10進数から16進数 )
  3: 終了
  <li>変換したい数字を入力する</li>
</ol>
