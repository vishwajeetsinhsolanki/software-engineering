
create table city
(
	id INT PRIMARY KEY,
	city_name VARCHAR(50),
    lat DECIMAL(9, 6),
    lon DECIMAL(9, 6),
    country_id INT,
    foreign key (country_id) references country(country_id)
);

create table customer
(
	customer_id int,
    customer_name VARCHAR(255),
    city_id INT,
    customer_address VARCHAR(255),
    next_call_date DATE,
    ts_inserted DATETIME,
    foreign key (city_id) references city(city_id)
    
);

create table country
(
	id INT PRIMARY KEY,
    country_name VARCHAR(255),
    country_name_eng VARCHAR(255),
    country_code VARCHAR(3)
);

INSERT INTO city (id, city_name, lat, lon, country_id) VALUES
(1, 'Berlin', 52.520008, 13.404954, 1),
(2, 'Belgrade', 44.787197, 20.457273, 2),
(3, 'Zagreb', 45.815399, 15.566560, 3),
(4, 'New York', 40.730610, -73.935242, 4),
(5, 'Los Angeles', 34.052235, -118.243683, 4),
(6, 'Warsaw', 52.237049, 21.017532, 5);

INSERT INTO customer (id, customer_name, city_id, customer_address, next_call_date, ts_inserted) VALUES
(1, 'Jewelry Store', 4, 'Long Sheet 120', '2020-01-21', '2020-01-08 14:01:20.000'),
(2, 'Bakery', NULL, 'Kufurstendamm 25', '2020-02-21', '2020-01-09 17:52:15.000'),
(3, 'Cafe', 1, 'Tauentzienstraße 44', '2023-01-21', '2020-01-10 00:02:49.000'),
(4, 'Restaurant', 3, 'Ulica ipa 15', '2020-01-21', '2020-01-10 09:29:21.000');

INSERT INTO country (id, country_name, country_name_eng, country_code) VALUES
(1, 'Deutschland', 'Germany', 'DEU'),
(2, 'Srbija', 'Serbia', 'SRB'),
(3, 'Hrvatska', 'Croatia', 'HRV'),
(4, 'United States of America', 'United States of America', 'USA'),
(5, 'Polska', 'Poland', 'POL'),
(6, 'España', 'Spain', 'ESP'),
(7, 'Rossiya', 'Russia', 'RUS');

-- task 1
select country.country_name_eng, city.city_name, customer.customer_name from country
left join city
on country.id = city.country_id 
left join customer
on city.id = customer.city_id;

-- task 2
select country.country_name_eng, customer.customer_name from country
inner join city  
on country.id = city.country_id
left join customer 
on city.id = customer.city_id;
