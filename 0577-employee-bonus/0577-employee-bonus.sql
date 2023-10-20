# Write your MySQL query statement below
select name,bonus from
Employee e left outer join Bonus b
on e.empId = b.empId
where b.bonus is null or b.bonus<1000;