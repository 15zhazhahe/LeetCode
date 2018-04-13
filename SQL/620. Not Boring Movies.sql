# Write your MySQL query statement below
# 找出所有影片描述为非 boring (不无聊) 的并且 id 为奇数 的影片，结果请按等级 rating 排列
SELECT id, movie, description, rating
FROM cinema
WHERE description != 'boring'
  AND id % 2 != 0
ORDER BY rating DESC;