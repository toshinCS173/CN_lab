## DHCP using PCs, Server, Switch and Router

### Topology

![image](https://user-images.githubusercontent.com/83855603/204208572-5834a94a-9c9d-4f4f-b77c-df6fa467fb49.png)

### Setting up the server settings

![image](https://user-images.githubusercontent.com/83855603/204207209-c09bc866-4bbe-4be6-b4c1-5cacce1c8012.png)

![image](https://user-images.githubusercontent.com/83855603/204209240-8c7f7306-21f8-461b-9bfa-360d1fcdadac.png)

### Commands for the router set up

![image](https://user-images.githubusercontent.com/83855603/204208460-a7ed795a-9f92-4aaa-8916-d6f47dcc1e6f.png)

### Dynamic IP address set up for the PCs

#### PC0

![image](https://user-images.githubusercontent.com/83855603/204209940-9ed25825-b51e-4f62-b806-d644011df6cc.png)

#### PC1

![image](https://user-images.githubusercontent.com/83855603/204210207-b13e7264-7788-435c-b48a-afd8deb14c16.png)

#### PC2

![image](https://user-images.githubusercontent.com/83855603/204210262-7f6e750e-5701-4823-887e-c7f934560c37.png)

### Pinging PC2 from PC0

```
Packet Tracer PC Command Line 1.0
PC>ping 10.0.0.4

Pinging 10.0.0.4 with 32 bytes of data:

Reply from 10.0.0.4: bytes=32 time=0ms TTL=128
Reply from 10.0.0.4: bytes=32 time=0ms TTL=128
Reply from 10.0.0.4: bytes=32 time=0ms TTL=128
Reply from 10.0.0.4: bytes=32 time=0ms TTL=128

Ping statistics for 10.0.0.4:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 0ms, Maximum = 0ms, Average = 0ms
```
