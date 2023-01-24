# Configuring RIP Route

### Topology

![image](https://user-images.githubusercontent.com/83855603/205573737-864dd120-ef60-4ba9-af99-17dadb2421c0.png)

### Setting up the router settings

#### Router0

![image](https://user-images.githubusercontent.com/83855603/205565253-64534f04-b408-4f22-a1aa-557e83db9535.png)

#### Router1

![image](https://user-images.githubusercontent.com/83855603/205568321-81b8c2a7-dcce-4285-8fa6-37e9fef5d3be.png)

#### Router2

![image](https://user-images.githubusercontent.com/83855603/205568671-1639ee54-4d75-45c8-8986-cfcbba8332fc.png)

## Pinging the PC1 after all connections

```
Packet Tracer PC Command Line 1.0
PC>ping 40.0.0.1

Pinging 40.0.0.1 with 32 bytes of data:

Request timed out.
Reply from 40.0.0.1: bytes=32 time=12ms TTL=125
Reply from 40.0.0.1: bytes=32 time=6ms TTL=125
Reply from 40.0.0.1: bytes=32 time=14ms TTL=125

Ping statistics for 40.0.0.1:
    Packets: Sent = 4, Received = 3, Lost = 1 (25% loss),
Approximate round trip times in milli-seconds:
    Minimum = 6ms, Maximum = 14ms, Average = 10ms

PC>ping 40.0.0.1

Pinging 40.0.0.1 with 32 bytes of data:

Reply from 40.0.0.1: bytes=32 time=17ms TTL=125
Reply from 40.0.0.1: bytes=32 time=10ms TTL=125
Reply from 40.0.0.1: bytes=32 time=17ms TTL=125
Reply from 40.0.0.1: bytes=32 time=7ms TTL=125

Ping statistics for 40.0.0.1:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 7ms, Maximum = 17ms, Average = 12ms
```

## Configuring RIP for version2

