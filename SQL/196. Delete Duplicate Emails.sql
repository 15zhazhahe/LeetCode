# Write your MySQL query statement below
DELETE FROM Person
WHERE Id NOT IN( SELECT P.Id
                 FROM (SELECT MIN(Id) AS Id
                       FROM Person
                       GROUP BY Email) P);

DELETE p1 
FROM Person AS p1, Person AS p2
WHERE p1.Id > p2.Id AND p1.Email = p2.Email;