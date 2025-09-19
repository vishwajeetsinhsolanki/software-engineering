/*
9. Data Control Language (DCL)
Lab 1: Create two new users user1 and user2 and grant user1 permission to SELECT from the courses table.
Lab 2: Revoke the INSERT permission from user1 and give it to user2.
*/

create role user;

create user user1 identified by 'us1@123' default role user;

create user user2 identified by 'us2@123' default role user; 

grant select on courses to user1;

revoke select on courses from user1;

grant select on courses to user2;