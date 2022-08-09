# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

DELETE p FROM Person as p

INNER JOIN Person as q

on p.email=q.email and p.id>q.id