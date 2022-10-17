# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

 DELETE p from Person as p
 
 INNER JOIN person as q
 
 on p.email= q.email and p.id>q.id
 
 