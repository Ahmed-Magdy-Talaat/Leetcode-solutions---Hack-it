# Write your MySQL query statement below
select E.name "Employee"
from Employee E
where E.salary>(select M.salary from Employee M where M.id=E.managerId);