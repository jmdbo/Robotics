%degrees
t1=40;
t2=45;
t3=-30;
t4=50;
t5=-75;

%degrees to radians
t1=t1/(180/pi)
t2=t2/(180/pi)
t3=t3/(180/pi)
t4=t4/(180/pi)
t5=t5/(180/pi)

%kinematics functions
nx= cos(t1)*cos(t5)*sin(t2+t3+t4)-sin(t1)*sin(t5)
ny= cos(t5)*sin(t1)*sin(t2+t3+t4)+cos(t1)*sin(t5)
nz= -cos(t2+t3+t4)*cos(t5)

sx= -cos(t5)*sin(t1)-cos(t1)*sin(t2+t3+t4)*sin(t5)
sy= cos(t1)*cos(t5)-sin(t1)*sin(t2+t3+t4)*sin(t5)
sz= cos(t2+t3+t4)*sin(t5)

ax = cos(t1)*cos(t2 + t3 + t4);
ay = cos(t2 + t3 + t4)*sin(t1);
az = sin(t2 + t3 + t4);

roll_division= ny/nx;
roll=atan(roll_division);
roll=roll*(180/pi)
%ta mal
pitch_division= (-nz)/(nx*cos(roll)+ny*sin(roll))
pitch=atan(pitch_division);
pitch=pitch*(180/pi)
%ta mal
yaw_division= (-ay*cos(roll)+ax*sin(roll))/(sy*cos(roll)-sx*sin(roll));
yaw= atan(yaw_division);
yaw=yaw*(180/pi);