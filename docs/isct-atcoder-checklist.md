# 科学大 情報工学系向け AtCoder 推奨問題チェックシート

## 目的

科学大 情報工学系の院試第3問対策として、AtCoder上の典型アルゴリズム問題を分野別に管理する。

このドキュメントでは、各問題について以下を記録する。

- リポジトリへの取り込み状況
- サンプルテスト通過状況
- 自力AC状況
- 解法説明の可否
- 計算量説明の可否
- 院試で対応するテーマ

---

## 運用ルール

各問題は、次の状態を順に満たすことを目標にする。

```text
取り込み済み
→ サンプルテスト通過
→ 自力AC
→ 解法方針をREADMEに記述
→ 計算量をREADMEに記述
→ 1週間後に再演習
```

チェック欄の意味は次の通り。

| 記号       | 意味                                   |
| ---------- | -------------------------------------- |
| Import     | `oj download` によりサンプルを取得済み |
| Sample     | `acs` または `oj t` でサンプル通過     |
| AC         | AtCoder上でAC                          |
| Explain    | 解法方針を自分の言葉で説明できる       |
| Complexity | 時間計算量・空間計算量を説明できる     |
| Review     | 復習済み                               |

---

## 進捗サマリ

| セクション          | 問題数 | Import | Sample |  AC | Explain | Complexity |
| ------------------- | -----: | -----: | -----: | --: | ------: | ---------: |
| 01 DP               |      6 |      6 |      0 |   0 |       0 |          0 |
| 02 累積和・いもす   |      7 |      0 |      0 |   0 |       0 |          0 |
| 03 二分探索・ソート |      7 |      0 |      0 |   0 |       0 |          0 |
| 04 グラフ           |      8 |      0 |      0 |   0 |       0 |          0 |
| 05 データ構造       |      5 |      0 |      0 |   0 |       0 |          0 |
| 06 貪欲法           |      1 |      0 |      0 |   0 |       0 |          0 |
| 合計                |     34 |      6 |      0 |   0 |       0 |          0 |

---

## 優先順位

| 優先度 | 対象                                  | 目的                       |
| -----: | ------------------------------------- | -------------------------- |
|      S | DP、累積和、二分探索、BFS/DFS         | 院試第3問の基礎体力        |
|      A | データ構造、Dijkstra、Union-Find、MST | 出ると差がつく実装パターン |
|      B | 貪欲法、区間スケジューリング          | 証明・説明込みで練習       |
|      C | 最大流、重いbit DP、発展セグ木        | 余力枠                     |

---

# 01 DP

## 狙い

DPでは、次の3点を必ず説明できるようにする。

1. 状態 `dp[i]` または `dp[i][j]` の意味
2. 遷移式
3. 計算量

---

## チェックシート

| Import | Sample | AC  | Explain | Complexity | Review | Dir          | Task       | URL                                       | 院試テーマ       |
| ------ | ------ | --- | ------- | ---------- | ------ | ------------ | ---------- | ----------------------------------------- | ---------------- |
| [x]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `01_dp/dp/a` | Frog 1     | https://atcoder.jp/contests/dp/tasks/dp_a | 1次元DP、漸化式  |
| [x]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `01_dp/dp/b` | Frog 2     | https://atcoder.jp/contests/dp/tasks/dp_b | 遷移数が増えるDP |
| [x]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `01_dp/dp/c` | Vacation   | https://atcoder.jp/contests/dp/tasks/dp_c | 状態を複数持つDP |
| [x]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `01_dp/dp/d` | Knapsack 1 | https://atcoder.jp/contests/dp/tasks/dp_d | ナップサックDP   |
| [x]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `01_dp/dp/f` | LCS        | https://atcoder.jp/contests/dp/tasks/dp_f | 2次元DP、文字列  |
| [x]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `01_dp/dp/h` | Grid 1     | https://atcoder.jp/contests/dp/tasks/dp_h | グリッドDP       |

---

## 解法メモ欄

### Frog 1

```text
状態:
遷移:
初期条件:
答え:
時間計算量:
空間計算量:
院試での説明ポイント:
```

### Frog 2

```text
状態:
遷移:
初期条件:
答え:
時間計算量:
空間計算量:
院試での説明ポイント:
```

### Vacation

```text
状態:
遷移:
初期条件:
答え:
時間計算量:
空間計算量:
院試での説明ポイント:
```

### Knapsack 1

```text
状態:
遷移:
初期条件:
答え:
時間計算量:
空間計算量:
院試での説明ポイント:
```

### LCS

```text
状態:
遷移:
初期条件:
答え:
時間計算量:
空間計算量:
院試での説明ポイント:
```

### Grid 1

```text
状態:
遷移:
初期条件:
答え:
時間計算量:
空間計算量:
院試での説明ポイント:
```

---

# 02 累積和・いもす・区間処理

## 狙い

累積和では、次の変換を説明できるようにする。

```text
愚直計算 O(NQ)
→ 前処理 O(N)
→ 各クエリ O(1)
```

2次元累積和では、長方形和の式を必ず書けるようにする。

```text
sum[y2][x2] - sum[y1][x2] - sum[y2][x1] + sum[y1][x1]
```

---

## チェックシート

| Import | Sample | AC  | Explain | Complexity | Review | Dir                              | Task                | URL                                                                  | 院試テーマ         |
| ------ | ------ | --- | ------- | ---------- | ------ | -------------------------------- | ------------------- | -------------------------------------------------------------------- | ------------------ |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `02_prefix_sum/tessoku-book/a06` | How Many Guests?    | https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_ai | 1次元累積和        |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `02_prefix_sum/tessoku-book/a07` | Event Attendance    | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_g        | いもす法           |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `02_prefix_sum/tessoku-book/a08` | Two Dimensional Sum | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_h        | 2次元累積和        |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `02_prefix_sum/tessoku-book/a10` | Resort Hotel        | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_j        | 前後からの累積最大 |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `02_prefix_sum/typical90/d`      | Cross Sum           | https://atcoder.jp/contests/typical90/tasks/typical90_d              | 行和・列和の前計算 |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `02_prefix_sum/typical90/j`      | Score Sum Queries   | https://atcoder.jp/contests/typical90/tasks/typical90_j              | クエリ処理         |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `02_prefix_sum/typical90/ab`     | Cluttered Paper     | https://atcoder.jp/contests/typical90/tasks/typical90_ab             | 2次元いもす        |

---

# 03 二分探索・ソート・座標圧縮

## 狙い

二分探索では、以下を明示できるようにする。

1. 何に対して二分探索するか
2. 判定関数 `check(x)` は何を返すか
3. `check(x)` に単調性がある理由
4. 探索範囲
5. 計算量

---

## チェックシート

| Import | Sample | AC  | Explain | Complexity | Review | Dir                                 | Task            | URL                                                           | 院試テーマ             |
| ------ | ------ | --- | ------- | ---------- | ------ | ----------------------------------- | --------------- | ------------------------------------------------------------- | ---------------------- |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `03_binary_search/tessoku-book/a11` | Binary Search 1 | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_k | 二分探索の基本         |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `03_binary_search/tessoku-book/a12` | Printer         | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_l | 答えで二分探索         |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `03_binary_search/tessoku-book/a13` | Close Pairs     | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_m | ソート済み配列、尺取り |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `03_binary_search/tessoku-book/a14` | Four Boxes      | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_n | 探索範囲削減           |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `03_binary_search/tessoku-book/a15` | Compression     | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_o | 座標圧縮               |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `03_binary_search/typical90/a`      | Yokan Party     | https://atcoder.jp/contests/typical90/tasks/typical90_a       | 答えで二分探索         |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `03_binary_search/typical90/g`      | CP Classes      | https://atcoder.jp/contests/typical90/tasks/typical90_g       | lower_bound            |

---

# 04 グラフ

## 狙い

グラフ問題では、実装だけでなく以下を説明できるようにする。

1. 頂点と辺を何として定義したか
2. 隣接リストの作り方
3. BFS / DFS / Dijkstra / Union-Find のどれを使うか
4. そのアルゴリズムで正しい理由
5. 計算量

---

## チェックシート

| Import | Sample | AC  | Explain | Complexity | Review | Dir                         | Task               | URL                                                                  | 院試テーマ              |
| ------ | ------ | --- | ------- | ---------- | ------ | --------------------------- | ------------------ | -------------------------------------------------------------------- | ----------------------- |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `04_graph/abc007/c`         | 幅優先探索         | https://atcoder.jp/contests/abc007/tasks/abc007_3                    | BFS、グリッド最短路     |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `04_graph/abc088/d`         | Grid Repainting    | https://atcoder.jp/contests/abc088/tasks/abc088_d                    | BFS、最短路、到達可能性 |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `04_graph/tessoku-book/a61` | Adjacent Vertices  | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_bi       | 隣接リスト              |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `04_graph/tessoku-book/a62` | Depth First Search | https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_am | DFS、到達判定           |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `04_graph/tessoku-book/a63` | Shortest Path 1    | https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_an | BFS最短路               |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `04_graph/tessoku-book/a64` | Shortest Path 2    | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_bl       | Dijkstra                |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `04_graph/tessoku-book/a66` | Connect Query      | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_bn       | Union-Find              |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `04_graph/tessoku-book/a67` | MST                | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_bo       | 最小全域木              |

---

# 05 データ構造

## 狙い

データ構造では、以下を説明できるようにする。

1. なぜそのデータ構造を使うか
2. 挿入・削除・検索の計算量
3. 標準ライブラリでの実装方法
4. 代替手段との違い

---

## チェックシート

| Import | Sample | AC  | Explain | Complexity | Review | Dir                                  | Task           | URL                                                            | 院試テーマ     |
| ------ | ------ | --- | ------- | ---------- | ------ | ------------------------------------ | -------------- | -------------------------------------------------------------- | -------------- |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `05_data_structure/tessoku-book/a51` | Stack          | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ay | stack          |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `05_data_structure/tessoku-book/a52` | Queue          | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_az | queue          |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `05_data_structure/tessoku-book/a53` | Priority Queue | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ba | priority_queue |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `05_data_structure/tessoku-book/a54` | Map            | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_bb | map            |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `05_data_structure/tessoku-book/a55` | Set            | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_bc | set            |

---

# 06 貪欲法

## 狙い

貪欲法では、単に実装するのではなく、次を説明できるようにする。

1. どの基準で選ぶか
2. なぜその選択が局所最適でよいか
3. 交換 argument で正当化できるか
4. ソート後に何を管理するか
5. 計算量

---

## チェックシート

| Import | Sample | AC  | Explain | Complexity | Review | Dir                          | Task                        | URL                                                                  | 院試テーマ                   |
| ------ | ------ | --- | ------- | ---------- | ------ | ---------------------------- | --------------------------- | -------------------------------------------------------------------- | ---------------------------- |
| [ ]    | [ ]    | [ ] | [ ]     | [ ]        | [ ]    | `06_greedy/tessoku-book/a39` | Interval Scheduling Problem | https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_bn | 区間スケジューリング、貪欲法 |

---

# 問題別READMEテンプレート

各問題ディレクトリの `README.md` は、最低限次の形にする。

```markdown
# 問題名

## URL

https://atcoder.jp/...

## 分野

例: DP / BFS / 二分探索 / 累積和

## 解法方針

ここに自分の言葉で書く。

## 状態定義・データ構造

DPなら状態、グラフなら頂点・辺、データ構造問題なら使う構造を書く。

## 遷移・処理手順

擬似コードまたは箇条書きで書く。

## 正しさの理由

なぜその処理で答えが得られるかを書く。

## 計算量

- 時間計算量:
- 空間計算量:

## 院試で出た場合の答案方針

問題文中で説明すべき点を書く。

## 復習ログ

| 日付       | 結果       | メモ |
| ---------- | ---------- | ---- |
| YYYY-MM-DD | 未/AC/復習 |      |
```

---

# コマンドメモ

## 一括取り込み

```bash
./scripts/import-atcoder-set.sh
```

## 個別テスト

```bash
cd 01_dp/dp/a
oj t -c "./main.out" -N
```

## acs実行

```bash
acs
```

## メタ情報確認

```bash
cat .contest-id
cat .task-id
cat .task-url
```

---

# 注意点

## 鉄則本のtask_idについて

鉄則本は、表示番号とURL末尾が一致しない問題がある。

例:

```text
A06 - How Many Guests?
URL末尾: math_and_algorithm_ai
```

そのため、提出URL生成ではディレクトリ名から `tessoku-book_a06` のように推測せず、`.task-id` を優先する。

## typical90について

典型90は、表示番号 `001` とURL末尾 `typical90_a` のように対応がずれる。

例:

```text
001 - Yokan Party
URL末尾: typical90_a
```

そのため、こちらも `.task-id` を正として扱う。

---

# 次に追加する候補

余裕が出たら、以下を追加する。

| 優先 | Dir                      | Task                  | URL                                                           | 理由               |
| ---: | ------------------------ | --------------------- | ------------------------------------------------------------- | ------------------ |
|    A | `01_dp/tessoku-book/a18` | Subset Sum            | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_r | 部分和DP           |
|    A | `01_dp/tessoku-book/a19` | Knapsack 1            | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_s | ナップサック再演習 |
|    A | `01_dp/tessoku-book/a20` | LCS                   | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_t | LCS再演習          |
|    A | `01_dp/tessoku-book/a24` | LIS                   | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_x | LIS                |
|    A | `01_dp/tessoku-book/a25` | Number of Routes      | https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_y | 経路数DP           |
|    B | `04_graph/typical90/c`   | Longest Circular Road | https://atcoder.jp/contests/typical90/tasks/typical90_c       | 木の直径           |
|    B | `04_graph/typical90/l`   | Red Painting          | https://atcoder.jp/contests/typical90/tasks/typical90_l       | Union-Find         |
|    B | `04_graph/typical90/m`   | Passing               | https://atcoder.jp/contests/typical90/tasks/typical90_m       | Dijkstra           |
