select actor_id, director_id 
from(select actor_id,director_id, 
count(timestamp) as cooperated 
from ActorDirector 
group by actor_id,director_id) as table1 where cooperated>=3