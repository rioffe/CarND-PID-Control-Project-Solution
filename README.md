# CarND-PID-Control-Project-Solution
PID Control Project Solution
This is my PID controller running on the first tract. The car runs at 0.3 throttle with parameters P = 0.15, I = 0.0, and D = 0.7. The car reaches maximum speed of 35 mph. Click on the image below to see the whole video.

I found the parameters by first using a low throttle value of 0.1 and optimizing P only (started with 1, then 0.5, then 0.4), while other parameters were set to 0.
I then increased the throttle to 0.2 and lowered P again (0.4, 0.3). Once the trajectory was relatively stable, I finally increased the throttle to 0.3 and lowered P once more (1.5). I then started playing with D parameter, which had the effect of dampening oscillations (I tried 1.0, 0.5, 0.75 and finally 0.7). In my experience, adding I parameter didn't improve the performance of the car, actually for some values it made the car unstable as it progressed down the track, so in the final solution I set it to 0.0.

[![Car driving on the first track controlled by PID controller](https://i.ytimg.com/vi/trJUMODVNpI/hqdefault.jpg)](https://youtu.be/trJUMODVNpI)
