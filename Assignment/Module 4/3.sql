/*
3. SQL Constraints
Lab 1: Create a table teachers with the following columns: teacher_id (Primary Key), teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE). 
 Lab 2: Implement a FOREIGN KEY constraint to relate the teacher_id from the teachers table with the students table.
*/

create table teachers
(
	teacher_id int primary key,
    teacher_name varchar(20) not null,
    subject varchar(20) not null,
    email varchar(30) unique
);

alter table student add teacher_id int;

select * from student;