#pragma once
class Alive
{
	public:
		float Hpm;
		float hp;
		Alive(float hp);

		virtual float GetHpm();
		virtual float SetHpm(float Hpm);
		virtual void SetHp(float Hpi);
		virtual void Damage(float dmg);

};

