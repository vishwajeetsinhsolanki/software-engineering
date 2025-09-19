/*
11. SQL Joins
Lab 1: Create two tables: departments and employees. Perform an INNER JOIN to display employees along with their respective departments.
Lab 2: Use a LEFT JOIN to show all departments, even those without employees.
*/

create table employees(
emp_id int primary key,
emp_name varchar(25) not null,
emp_salary int
);

create table departments(
emp_id int,
department_id int not null,
manager_id int not null,
foreign key (emp_id) references employees(emp_id)
);

insert into employees values (101,'Raj',2500),(102,'Rakesh',1000),(103,'Mak',2000);

insert into departments values (101,12,105),(102,11,109),(103,14,105);

select employees.emp_id,employees.emp_name,employees.emp_salary,departments.department_id 
FROM employees
LEFT JOIN departments 
ON employees.emp_id = departments.emp_id;