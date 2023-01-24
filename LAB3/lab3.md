## Configuring default route to the Router

### Topology

![image](https://user-images.githubusercontent.com/83855603/202862620-0eb52543-91ac-42ea-903d-d17bb38000c0.png)

1. Router0: setting up network connections

![image](https://user-images.githubusercontent.com/83855603/202862695-46f2af90-df23-49fe-9890-3bf854e02e51.png)

2. Router1: setting up network connections

![image](https://user-images.githubusercontent.com/83855603/202862756-d5a0261c-4a4a-412e-879a-37f3b597d845.png)

3. Router2: setting up network connections

![image](https://user-images.githubusercontent.com/83855603/202862816-9d8db3fe-a2f5-41d4-b1ff-f69ff7fc9e93.png)

4. Teaching the routers about the other connections using *default route*

i. Router0 to `20.0.0.20` gateway network

![image](https://user-images.githubusercontent.com/83855603/202862870-2990dd36-7789-44f1-9bd4-6b8e047df20d.png)

ii. Router1 to `20.0.0.10` and `30.0.0.20` gateway networks

![image](https://user-images.githubusercontent.com/83855603/202862974-34844a8d-43fe-4d40-998f-89bff5f6e5e0.png)

iii. Router2 to `30.0.0.10` gateway network

![image](https://user-images.githubusercontent.com/83855603/202863024-a635fefa-9db3-40bf-95f3-734a16724673.png)

Pinging the router gateways and PC1 from PC0

```
Packet Tracer PC Command Line 1.0
PC>ping 10.0.0.10

Pinging 10.0.0.10 with 32 bytes of data:

Reply from 10.0.0.10: bytes=32 time=50ms TTL=255
Reply from 10.0.0.10: bytes=32 time=0ms TTL=255
Reply from 10.0.0.10: bytes=32 time=0ms TTL=255
Reply from 10.0.0.10: bytes=32 time=0ms TTL=255

Ping statistics for 10.0.0.10:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 0ms, Maximum = 50ms, Average = 12ms

PC>ping 20.0.0.10

Pinging 20.0.0.10 with 32 bytes of data:

Reply from 20.0.0.10: bytes=32 time=0ms TTL=255
Reply from 20.0.0.10: bytes=32 time=0ms TTL=255
Reply from 20.0.0.10: bytes=32 time=0ms TTL=255
Reply from 20.0.0.10: bytes=32 time=0ms TTL=255

Ping statistics for 20.0.0.10:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 0ms, Maximum = 0ms, Average = 0ms

PC>ping 20.0.0.20

Pinging 20.0.0.20 with 32 bytes of data:

Reply from 20.0.0.20: bytes=32 time=1ms TTL=254
Request timed out.
Reply from 20.0.0.20: bytes=32 time=22ms TTL=254
Request timed out.

Ping statistics for 20.0.0.20:
    Packets: Sent = 4, Received = 2, Lost = 2 (50% loss),
Approximate round trip times in milli-seconds:
    Minimum = 1ms, Maximum = 22ms, Average = 11ms

PC>ping 30.0.0.10

Pinging 30.0.0.10 with 32 bytes of data:

Reply from 30.0.0.10: bytes=32 time=17ms TTL=254
Request timed out.
Reply from 30.0.0.10: bytes=32 time=1ms TTL=254
Request timed out.

Ping statistics for 30.0.0.10:
    Packets: Sent = 4, Received = 2, Lost = 2 (50% loss),
Approximate round trip times in milli-seconds:
    Minimum = 1ms, Maximum = 17ms, Average = 9ms

PC>ping 30.0.0.20

Pinging 30.0.0.20 with 32 bytes of data:

Reply from 30.0.0.20: bytes=32 time=3ms TTL=253
Request timed out.
Reply from 30.0.0.20: bytes=32 time=4ms TTL=253
Request timed out.

Ping statistics for 30.0.0.20:
    Packets: Sent = 4, Received = 2, Lost = 2 (50% loss),
Approximate round trip times in milli-seconds:
    Minimum = 3ms, Maximum = 4ms, Average = 3ms

PC>ping 40.0.0.10

Pinging 40.0.0.10 with 32 bytes of data:

Reply from 40.0.0.10: bytes=32 time=3ms TTL=253
Reply from 40.0.0.10: bytes=32 time=21ms TTL=253
Reply from 40.0.0.10: bytes=32 time=3ms TTL=253
Reply from 40.0.0.10: bytes=32 time=29ms TTL=253

Ping statistics for 40.0.0.10:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 3ms, Maximum = 29ms, Average = 14ms

PC>ping 40.0.0.1

Pinging 40.0.0.1 with 32 bytes of data:

Request timed out.
Reply from 40.0.0.1: bytes=32 time=78ms TTL=125
Reply from 40.0.0.1: bytes=32 time=56ms TTL=125
Reply from 40.0.0.1: bytes=32 time=14ms TTL=125

Ping statistics for 40.0.0.1:
    Packets: Sent = 4, Received = 3, Lost = 1 (25% loss),
Approximate round trip times in milli-seconds:
    Minimum = 14ms, Maximum = 78ms, Average = 49ms

PC>ping 40.0.0.1

Pinging 40.0.0.1 with 32 bytes of data:

Reply from 40.0.0.1: bytes=32 time=3ms TTL=125
Reply from 40.0.0.1: bytes=32 time=4ms TTL=125
Reply from 40.0.0.1: bytes=32 time=19ms TTL=125
Reply from 40.0.0.1: bytes=32 time=4ms TTL=125

Ping statistics for 40.0.0.1:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 3ms, Maximum = 19ms, Average = 7ms
```

