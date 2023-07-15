enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	0 = 0,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	1 = 1,
	stabilizedinaxisy = 2,
	2 = 2,
	compartment1 = 1,
	stabilizedinaxesboth = 3,
	destructno = 0,
	3 = 3,
	compartment2 = 2,
	4 = 4,
	compartment3 = 4,
	compartment4 = 8,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class DDA_Data_F_ParticleEffects
	{
		addonRootClass = "A3_Data_F";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class DDA_FiringCloud_1
{
	class CannonFired1
	{
		simulation="particles";
		type="DDA_cloud_1_fire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		qualityLevel=2;
		lifeTime=0.3;
	};
};
class DDA_FiringCloud_2
{
	class CannonFired2
	{
		simulation="particles";
		type="DDA_cloud_2_fire";
		position[]={0,0,0};
		intensity=1;
		interval=0.1;
		lifeTime=0.1;
	};
	class CannonFired3
	{
		simulation="particles";
		type="SniperDust1";
		position[]={0,0,0};
		enabled="isWaterSurface * (humidity interpolate [0.2,0.20001,1,0]) * (distToSurface interpolate [1.6,1.60001,1,0])";
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
};

class CfgCloudlets
{
	class Default;
	class DDA_cloud_1_fire: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]=
		{
			"directionX * -2.2",
			"directionY * 2.2",
			"directionZ * 2.2"
		};
		rotationVelocity=1;
		weight=0.1285;
		volume=0.1;
		rubbing=0.80000001;
		size[]={0.25,0.60000002,1.1};
		sizeCoef="1.5 * (vehicleSpeedSize interpolate [1.5,18,1,2])";
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.40000001},
			{0.80000001,0.80000001,0.80000001,0.30000001},
			{0.80000001,0.80000001,0.80000001,0.050000001},
			{0.80000001,0.80000001,0.80000001,0.0099999998}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.3 * (vehicleSpeedSize interpolate [1.5,18,2,1])"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.050000001;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class DDA_cloud_2_fire: Default
	{
		interval=0.004000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2;
		moveVelocity[]=
		{
			"-4*directionX",
			"-4*directionY",
			"-4*directionZ"
		};
		positionVarConst[]=
		{
			"-0.5*directionLocalX",
			"-0.5*directionLocalY",
			"-0.5*directionLocalZ"
		};
		MoveVelocityVarConst[]=
		{
			"-2.5*directionX",
			"-2.5*directionY",
			"-2.5*directionZ"
		};
		MoveVelocityVar[]={4,4,4};
		rotationVelocity=1;
		weight=0.1275;
		volume=0.1;
		rubbing=0.40000001;
		size[]={0.40000001,1.4,2.0999999,2.5,2.8499999,3.0999999};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,0.5},
			{1,1,1,0.40000001},
			{1,1,1,0.31999999},
			{1,1,1,0.23999999},
			{1,1,1,0.16},
			{1,1,1,0.079999998},
			{1,1,1,0.0099999998}
		};
		colorCoef[]={0.64999998,0.64999998,0.64999998,0.55000001};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		position[]=
		{
			"positionX - 0.45 * directionLocalX",
			"positionY - 0.45 * directionLocalY",
			"positionZ - 0.45 * directionLocalZ"
		};
		positionVar[]={0,0,0};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0.1,0.1,0.1,0.029999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};