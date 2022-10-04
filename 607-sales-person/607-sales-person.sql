# Write your MySQL query statement below

select name from SalesPerson 
where sales_id NOT IN
(SELECT sales_id from orders where com_id in
(select com_id from Company where name='RED'))