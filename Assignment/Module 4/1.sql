/*
1. Introduction to SQL
 Lab 1: Create a new database named school_db and a table called students with the following columns: student_id, student_name, age, class, and address. 
 Lab 2: Insert five records into the students table and retrieve all records using the SELECT statement.
*/

create database school_db;

create table student
(
	student_id int primary key,
    student_name varchar(25) not null,
    age int not null,
    class varchar(2) not null,
    address varchar(25) not null 
)

insert into student values (101,'RAJ',25,10,'AMD');
insert into student values (102,'RAJESH',23,11,'RJK');
insert into student values (103,'MAHESH',23,12,'JMG');
insert into student values (104,'YASH',22,12,'RJK');
insert into student values (105,'PRIYANK',25,11,'AMD');