/*
13. SQL Stored Procedure
Lab 1: Write a stored procedure to retrieve all employees from the employees table based on department.
Lab 2: Write a stored procedure that accepts course_id as input and returns the course details.
*/

delimiter &&
create procedure dept(IN D_department_id int )
select * from employee where department_id = 11;
department_id = D_department_id;
end &&

CALL dept(11);

delimiter &&
create procedure cdetail(in c_detail int)
select *from courses where course_id = 101;
course_id=c_detail;
end &&

call cdetail(101);
