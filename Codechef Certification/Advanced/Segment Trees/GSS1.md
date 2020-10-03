We will use a segment tree to query over the array. Each node in the segment tree will store four variables.

- sum: The sum of the elements the node is responsible for
- max_subarray: The max subarray sum among the elements the node is responsible for
- max_prefix: The maximum prefix sum among the elements the node is responsible for
- max_suffix: The maximum suffix sum among the elements the node is responsible for

consider:
lsf - max_suffix of left child
rsf - max_suffix of right child
lpf - max_prefix of left child
rpf - max_prefix of right child
ls - left sum
rs - right sum
lm - max_subarray of left child
rm - max_subarray of right child

Then for the values at parent node:
sum = ls + rs
max_subarray = max(lm, rm, lsf + rpf)
max_prefix = max(lpf, ls + rpf)
max_suffix = max(rsf, rs + lsf)

When we query a segment, we return the max_subarray among the nodes as our answer.