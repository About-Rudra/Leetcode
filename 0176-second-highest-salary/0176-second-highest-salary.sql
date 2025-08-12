SELECT 
    IFNULL(
        (SELECT DISTINCT Salary
         FROM Employee
         ORDER BY Salary DESC
         LIMIT 1 OFFSET 1), 
    NULL) AS SecondHighestSalary;


-- select(select distinct(salary)  from employee 
-- order by salary desc
-- limit 1 offset 1) as SecondHighestSalary;

-- select distinct
-- max(salary) as SecondHighestSalary
-- from
-- employee
-- where salary < (select max(salary) from employee);