#pragma once
ref class LoyalityScheme
{
public:
	LoyalityScheme(); // Constructor 
	void EarnPointsOnAmount(double amountSpent); // Earn one point per $10 spent 
	void RedeemPoints(int points); // Redeem points 
	int GetPoints(); // Return the value of totalPoints 
private:
	int totalPoints; // Total points earned so far 
};