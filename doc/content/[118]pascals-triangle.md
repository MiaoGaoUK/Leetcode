<p>给定一个非负整数&nbsp;<em><code>numRows</code>，</em>生成「杨辉三角」的前&nbsp;<em><code>numRows</code>&nbsp;</em>行。</p>

<p><small>在「杨辉三角」中，每个数是它左上方和右上方的数的和。</small></p>

<p><img alt="" src="https://pic.leetcode-cn.com/1626927345-DZmfxB-PascalTriangleAnimated2.gif" /></p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> numRows = 5
<strong>输出:</strong> [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
</pre>

<p><strong>示例&nbsp;2:</strong></p>

<pre>
<strong>输入:</strong> numRows = 1
<strong>输出:</strong> [[1]]
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul> 
 <li><code>1 &lt;= numRows &lt;= 30</code></li> 
</ul>

<details><summary><strong>Related Topics</strong></summary>数组 | 动态规划</details><br>

<div>👍 858, 👎 0</div>

<div id="labuladong"><hr>

**通知：[数据结构精品课](https://aep.h5.xeknow.com/s/1XJHEO) 已更新到 V2.0；点击这里体验 [刷题全家桶](https://labuladong.gitee.io/algo/images/others/%E5%85%A8%E5%AE%B6%E6%A1%B6.jpg)。**

<details><summary><strong>labuladong 思路</strong></summary>

## 基本思路

这题很简单，不过我提供两个版本的解法，一个是迭代的方式，一个是递归的方式，具体思路看注释。

**标签：[数组](https://mp.weixin.qq.com/mp/appmsgalbum?__biz=MzAxODQxMDM0Mw==&action=getalbum&album_id=2120601117519675393)，递归**

## 解法代码

```java
// 迭代方式
class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> res = new ArrayList<>();
        if (numRows < 1) {
            return res;
        }
        // 先把第一层装进去作为 base case
        List<Integer> firstRow = new ArrayList<>();
        firstRow.add(1);
        res.add(firstRow);
        // 开始一层一层生成，装入 res
        for (int i = 2; i <= numRows; i++) {
            List<Integer> prevRow = res.get(res.size() - 1);
            res.add(generateNextRow(prevRow));
        }
        return res;
    }

    // 输入上一层的元素，生成并返回下一层的元素
    List<Integer> generateNextRow(List<Integer> prevRow) {
        List<Integer> curRow = new ArrayList<>();
        curRow.add(1);
        for (int i = 0; i < prevRow.size() - 1; i++) {
            curRow.add(prevRow.get(i) + prevRow.get(i + 1));
        }
        curRow.add(1);
        return curRow;
    }
}

// 递归方式
class Solution2 {
    // 定义：输入 numRows，返回行数为 numRows 的杨辉三角
    public List<List<Integer>> generate(int numRows) {
        // 递归的 base case
        if (numRows == 1) {
            List<List<Integer>> triangle = new ArrayList<>();
            // 先把第一层装进去作为 base case
            List<Integer> firstRow = new ArrayList<>();
            firstRow.add(1);
            triangle.add(firstRow);
            return triangle;
        }

        // 先递归生成高度为 numRows - 1 的杨辉三角
        List<List<Integer>> triangle = generate(numRows - 1);

        // 根据最底层元素生成一行新元素
        List<Integer> bottomRow = triangle.get(triangle.size() - 1);
        List<Integer> newRow = new ArrayList<>();
        newRow.add(1);
        for (int i = 0; i < bottomRow.size() - 1; i++) {
            newRow.add(bottomRow.get(i) + bottomRow.get(i + 1));
        }
        newRow.add(1);
        // 把新的一行放到杨辉三角底部
        triangle.add(newRow);

        return triangle;
    }
}
```

</details>
</div>



