clc;
clear all;
close all;

data1 = load('data-1.txt');
X1 = data1(:, 1); y1 = data1(:, 2);
plot(y1,X1);
xlabel('Channel Used');
ylabel('No Of Suscribers in 100s');
title('RF Channel Used Vs No Of Suscribers');
print("../RESULTS/Result-1.jpg");
