# Write your MySQL query statement below
-- select email
-- from Person
-- where (select count(email) from 
--         from Person) > 1;

select email 
from Person
group by email
having count(email) > 1;