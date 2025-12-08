#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <conio.h>

using namespace std;

// Universal Values
bool continueGame = true;
bool bossDefeated = false;
int choiceKey;

// Clear Lines
void clearLines() {
	system("cls");
}

// Wait for Key Press
void pressKey() {
	system("pause");
}

// Separate with a Line
void printLine() {
	for (int i = 0; i < 100; ++i) {
		cout << "-";
	}
	cout << endl;
}

// Input Key
void pressChoice() {
    choiceKey = _getch();
}

// Clear Input Key
void clearKey() {
	choiceKey = '\0';
}

// Player Details
string playerName;
string playerNickname;
int playerHP = 50;
int playerATK = 10;
int playerEND = 15;
int playerEP = 5;
int playerREGENEP = 0;

// Boss Details
int bossHP = 2500;
int bossATK = 520;
int bossEND = 600;

// The 8-Year Loop
void loopTraining() {
	cout << endl;
	cout << "Before you begin, here are your current stats:" << endl;
	cout << endl;
	cout << "HP: " << playerHP << endl;
	cout << "ATK: " << playerATK << endl;
	cout << "END: " << playerEND << endl;
	cout << "EP: " << playerEP << endl;
	cout << "REGEN: " << playerREGENEP << endl;
	cout << endl;
	cout << "You can increase it by training every time." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	for (int i = 1; i <= 48; i++) {
		cout << endl;
		cout << "Current HP: " << playerHP << endl;
		cout << "Current Attack Power: " << playerATK << endl;
		cout << "Current Endurance: " << playerEND << endl;
		cout << "Current Energy Points: " << playerEP << endl;
		cout << "Current Regeneration Rate: " << playerREGENEP << endl;
		cout << endl;
		cout << "Enter number to increase stats: " << endl;
		cout << "1 for HP" << endl;
		cout << "2 for Attack" << endl;
		cout << "3 for Endurance" << endl;
		cout << "4 for Energy Points" << endl;
		cout << "5 for Energy Regeneration" << endl;
		pressChoice();
		switch (choiceKey) {
			case 1:
				playerHP = 21 + 4 * (i - 1);
				cout << "Player HP is now " << playerHP << endl;
				cout << endl;
				printLine();
				pressKey();
				clearLines();
				break;
			case 2:
				playerATK = 11 + 2 * (i - 1);
				cout << "Player ATK is now " << playerATK << endl;
				cout << endl;
				printLine();
				pressKey();
				clearLines();
				break;
			case 3:
				playerEND = 15 + 3 * (i - 1);
				cout << "Player END is now " << playerEND << endl;
				cout << endl;
				printLine();
				pressKey();
				clearLines();
				break;
			case 4:
				playerEP = 15 + 3 * (i - 1);
				cout << "Player EP is now " << playerEP << endl;
				cout << endl;
				printLine();
				pressKey();
				clearLines();
				break;
			case 5:
				playerREGENEP = 2.5 + 0.5 * (i - 1);
				cout << "Player ATK is now " << playerREGENEP << endl;
				cout << endl;
				printLine();
				pressKey();
				clearLines();
				break;
		}
		clearKey();
	}
}

// First Story Arc
void chapter1() {
	cout << endl;
	cout << "CHAPTER 1" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Village" << endl;
	cout << endl;
	cout << "The Cocoyashi Village is a place full of prosperity and peace in the world." << endl;
	cout << "There once lived a man named Keigan Lee, with his love, Nami." << endl;
	cout << "He watched her draw her first map, and glance in front of her eyes." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Village" << endl;
	cout << endl;
	cout << "One of Keigan\'s best friends, Bell-mere, checking the budget and price of her delicious mikans." << endl;
	cout << "When things get really rough, Keigan cooks extra tasty dishes inside her household, making Bell-mere eat this instead of mikans." << endl;
	cout << "The low demand for mikan lasted for months, as time passes by." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Village" << endl;
	cout << endl;
	cout << "Inside of Genzo\'s house, Keigan started helping him clean the sheriff\'s office, as this can go really messy." << endl;
	cout << "As Keigan embraced Nami, he realizes that the family is in a financial situation." << endl;
	cout << "The next time it came, both Nojiko and Nami have terrible fever, high taxes being paid for living, let alone being 100K Beli for an adult and 50K for children." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Village" << endl;
	cout << endl;
	cout << "Everything seemed fine for now, until a hostile enemy just arrived." << endl;
	cout << "Arlong the Saw, a fishman who once lived in the Grandline, home of the strongest people in the planet." << endl;
	cout << "One by one, the enemy pirates took everything in the village." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Village" << endl;
	cout << endl;
	cout << "Keigan hears the voices of the fishmen stating their demands:" << endl;
	cout << endl;
	cout << "Arlong: \"I came here to colonize this island. Pay tribute to me or BE EXECUTED.\"" << endl;
	cout << endl;
	cout << "Body after body, the corpses of the slain fell down their knees." << endl;
	cout << "Bell-mere opens the door, only to be greeted by the fishermen alone." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Village" << endl;
	cout << endl;
	cout << "Bell-mere: \"I cannot pay you real money. How about my children?" << endl;
	cout << endl;
	cout << "But, he does not like people paying any money. He then takes out Bell-mere with one strike." << endl;
	cout << "Keigan can only watch as here body drops to the sand." << endl;
	cout << endl;
	cout << "Arlong: \"Children, huh? Pitiful.\"" << endl;
	cout << "Keigan: Wait, wait, wait, wait a second, what happened?" << endl;
	cout << "Arlong: \"GRRRRRAAAAHHHHH!!!\"" << endl;
	cout << "Keigan: \"*gasps*, *stutters* B-B-B-Bell-mere?\"" << endl;
	cout << "Keigan: \"NOOOOOOOOOOOOOOOOO!!!!!\"" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Village" << endl;
	cout << endl;
	cout << "Girls: \"Bell-mere!\"" << endl;
	cout << endl;
	cout << "The girls weep on Bell-mere, shot to the body." << endl;
	cout << "Meanwhile, Keigan attempts to wound Arlong by throwing a punch at him." << endl;
	cout << endl;
	cout << "Keigan: \"You\'ll pay for this!\"" << endl;
	cout << "Arlong: \"You wanna try hitting me? Ha! Prove it.\"" << endl;
	cout << endl;
	cout << "Keigan: \"*throws a punch at him* HIIIYYYAAAAAHHHH!!!\"" << endl;
	cout << "Arlong: \"*takes the hit unfazed HMMM. Is this all you got?\"" << endl;
	cout << "Arlong: \"Take this! *smashes Keigan to the shore*\"" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Village" << endl;
	cout << endl;
	cout << "Arlong: \"Let me call upon you the people of this village: The weak shall belong to the deep.\"" << endl;
	cout << endl;
	cout << "Keigan is thrown to the ocean. Everyone else became hostage for the Fishman Captain." << endl;
	cout << "There is still hope for the faithful of Cocoyashi Village. Keigan\'s unconcious body still floating until it reached someone\'s ship." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
}

// Chapter 2
void chapter2() {
	cout << endl;
	cout << "CHAPTER 2" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Jolly Roger" << endl;
	cout << endl;
	cout << "Keigan\'s body is still drifting on open ocean for 3 days straight." << endl;
	cout << "That is until the Good Heart Pirates saw a man overboard and pulled him up on the ship." << endl;
	cout << "A \"doctor\" patched him up and laid him on the couch." << endl;
	cout << "When Keigan got up, he was confused." << endl;
	cout << endl;
	cout << "???: \"So you're up already, boy? Good.\"" << endl;
	cout << "Keigan: \"Where am I? How long was I out?\"" << endl;
	cout << "???: \"Well, you have been out cold for 3 whole days, and we took you in the ship.\"" << endl;
	cout << endl;
	cout << "Later, he introduces himself as Doctor Quack. He gives you a nice little emblem for his gratitude." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Good Heart Pirate Crest acquired!" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Jolly Roger" << endl;
	cout << endl;
	cout << "After eating, the whole crew arrived in an uninhaited island in the East Blue." << endl;
	cout << endl;
	cout << "Quack: \"We arrived.\"" << endl;
	cout << "Keigan: \"Now where are we?\"" << endl;
	cout << "Quack: \"In an unknown island in the East Blue.\"" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Jolly Roger" << endl;
	cout << endl;
	cout << "After eating, the whole crew arrived in an uninhaited island in the East Blue." << endl;
	cout << endl;
	cout << "???: \"Hello there, boy. I\'m the main captain of this ship." << endl;
	cout << "Nojiko: \"My name is Nojiko. Welcome to the Jolly Roger.\"" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Jolly Roger" << endl;
	cout << endl;
	cout << "Nojiko: \"We\'re here in an unknown island in the East Blue." << endl;
	cout << "Nojiko: \"This will be your training for the battle against the fishmen. I hope you\'ll get strong enough." << endl;
	cout << "Keigan: \"I am glad I can. I know what they\'re up to. Nami should not be alone with them." << endl;
	cout << "Nojiko: \"Before you go, here\'s a full backstory of what happened at the village." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Jolly Roger" << endl;
	cout << endl;
	cout << "Bell-mere adopted the sisters, while Keigan had a crush on Nami." << endl;
	cout << "Nami told everyone about Arlong and the fishmen arrival on the village." << endl;
	cout << "She is now being held captive by those people, and Genzo survived the invasion." << endl;
	cout << "Luckily, he escaped. Meanwhile, Nami wished to find Keigan and reunite with him one more time." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Unknown Island" << endl;
	cout << endl; 
	cout << "Nojiko: \"Now that you heard the whole story, let\'s get to work.\"" << endl;
	cout << "Quack: \"And you can eat some soup after every time.\"" << endl;
	cout << "Nojiko: \"This training takes about eight years. Will you accept it.\"" << endl;
	cout << "Keigan: \"Yes, I will.\"" << endl;
	cout << "Nojiko: \"But before you go, hear my words: \'Live firstm Then shoose what to do with the life you still have.\'\"" << endl;
	cout << endl;
	cout << "And so, Keigan\'s training begins." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	loopTraining();
	cout << endl;
	cout << "Location: Unknown Island" << endl;
	cout << endl; 
	cout << "After 8 years, Keigan\'s transformation is now complete." << endl;
	cout << "He discovers a scroll containing the Eight Gates. The first two contain the Gate of Opening and the Gate of Healing." << endl;
	cout << "He then acquires another weapon, the Ancient Chain Relic." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Eight Gates Scroll acquired!" << endl;
	cout << "Chain Relic acquired!" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Now that he is ready for battle, he and the crew on the ship sail to one of the restaurant ships, Baratie." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
}


// Boss Fight
void bossFight() {
	const int maxPlayerHP = playerHP; // Max Player HP
	const int maxPlayerATK = playerATK; // Max Player Attack
	const int maxPlayerEND = playerEND; // Max Player Endurance
	const int maxPlayerEP = playerEP; // Max Player Energy Points
	int playerTurn = 0; // Current Turn
	int bossDamage = 0; // Boss Damage
	int playerDamage = 0; // Player Damage
	int barrageCooldown = 0; // Barrage Cooldown
	int	lotusCooldown = 0; // Lotus Cooldown
	bool fightOver = false; // Full Fight
	bool playerInTurn = false; // Player in Turn
	bool canActivateGate = false; // Gate Available
	bool gate1Activated = false; // Gate 1 Active
	bool gate2Activated = false; // Gate 2 Active
	bool hasUsedGateBefore = false; // Gate Used Once
	bool hasMasteredGates = false; // Gate Mastery
	bool chainsEnabled = false; // Use Chains
	bool hasUsedBarrage = false; // Barrage Used
	bool hasUsedFrontLotus = false; // Front Lotus Used
	bool staggeredArlong = false; // Arlong Staggered
	bool disarmArlong = false; // Arlong Disarmed
	while (!fightOver) {
		++playerTurn;
		if (lotusCooldown > 0) {
			--lotusCooldown;
		}
		if (barrageCooldown > 0) {
			--barrageCooldown;
		}
		if (gate1Activated) {
			if (hasMasteredGates) {
				playerEP -= 5;
			}
			else {
				playerEP -= 7;
			}
		}
		else if (gate2Activated) {
			playerEP -= 9;
		}
		playerInTurn = true;
		while (playerInTurn) {
			if (playerTurn == 3) {
				canActivateGate = true;
			}
			cout << endl;
			cout << "Turn " << playerTurn << endl;
			cout << endl;
			cout << left << "Keigan HP: " << playerHP << " / " << maxPlayerHP << setw(10) << right << "Arlong HP: " << bossHP << endl;
			cout << left << "Keigan ATK: " << playerATK << " / " << maxPlayerATK << setw(10) << right << "Arlong ATK: " << bossATK << endl;
			cout << left << "Keigan END: " << playerEND << " / " << maxPlayerEND << setw(10) << right << "Arlong END: " << bossEND << endl;
			cout << left << "Keigan EP: " << playerEP << " / " << maxPlayerEP << endl;
			cout << endl;
			cout << "Choose your ability: " << endl;
			cout << endl;
			cout << "0. Normal Attack" << endl;
			cout << "1. Enable Lotus Series" << endl;
			cout << "2. Kei-ga-n Barrage (-12 EP and 2 skips)" << endl;
			cout << "3. Chain Barrage (-14 EP and 2 skips)" << endl;
			cout << "4. Lotus Attack";
			if (!chainsEnabled) {
				cout << " (disabled)" << endl;
			}
			else {
				cout << endl;
			}
			cout << "5. Eight Gates";
			if (playerTurn < 3) {
				cout << " (disabled)" << endl;
			}
			else {
				cout << endl;
			}
			cout << endl;
			pressChoice();
			switch (choiceKey) {
				case 0:
					clearKey();
					bossDamage = ceil((playerATK - bossEND) / 2);
					bossHP -= bossDamage;
					cout << endl;
					cout << "Keigan: \"HAAYYYYAAAH!!!\"" << endl;
					cout << "You deal " << bossDamage << " damage to Arlong!" << endl;
					bossDamage = 0;
					break;
				case 1:
					clearKey();	
					cout << "Activate Lotus Series?" << endl;
					cout << endl;
					cout << "1 for Yes, 2 for No" << endl;
					cout << endl;
					pressChoice();
					switch (choiceKey) {
						case 1:
							clearKey();
							chainsEnabled = true;
							break;
						case 2:
							clearKey();
							break;
					}
					break;
				case 2:
					clearKey();	
					if (playerEP >= 12) {
						if (barrageCooldown = 0) {	
							cout << endl;
							cout << "Attack with Kei-ga-n Barrage?" << endl;
							cout << endl;
							cout << "1 for Yes, 2 for No" << endl;
							cout << endl;
							pressChoice();
							switch (choiceKey) {
								case 1:
									clearKey();
									hasUsedBarrage = true;
									playerEP -= 12;
									bossDamage = ceil(((1.35 * playerATK) - (0.95 * bossEND)) / 2);
									bossHP -= bossDamage;
									cout << "Keigan: \"Take this, K E I - G A - N BARRAGE!!!\"" << endl;
									cout << endl;
									cout << "You deal " << bossDamage << " damage to Arlong!" << endl;
									bossDamage = 0;
									playerInTurn = false;
									barrageCooldown = 3;
									break;
								case 2:
									clearKey();
									break;
							}
						}
						else {
							cout << endl;
							cout << "Ability on Cooldown!" << endl;
						}
					}
					else {
						cout << endl;
						cout << "Not enough Energy Points!" << endl;
					}
					break;
				case 3:
					if (playerEP >= 14)	{
						if (barrageCooldown = 0) {	
							clearKey();	
							cout << endl;
							cout << "Attack with Chained Barrage?" << endl;
							cout << endl;
							cout << "1 for Yes, 2 for No" << endl;
							cout << endl;
							pressChoice();
							switch (choiceKey) {
								case 1:
									clearKey();
									hasUsedBarrage = true;
									playerEP -= 14;
									bossDamage = ceil(((1.5 * playerATK) - (0.90 * bossEND)) / 2);
									bossHP -= bossDamage;
									cout << "Keigan: \"Watch this, Arlong! CHAAAAIIINNNNEEEED BARRAGE!!!\"" << endl;
									cout << endl;
									cout << "You deal " << bossDamage << " damage to Arlong!" << endl;
									bossDamage = 0;
									playerInTurn = false;
									barrageCooldown = 3;
									break;
								case 2:
									clearKey();
									break;
							}
						}
						else {
							cout << endl;
							cout << "Ability on cooldown!" << endl;
						}
					}
					else {
						cout << endl;
						cout << "Not enough Energy Points!" endl;
					}
					break;
				case 4:
					clearKey();
					cout << endl;
					if (chainsEnabled) {
						if (gate1Activated || gate2Activated) {
							if (hasUsedBarrage) {
								cout << endl;
								cout << "Choose Lotus Attack:" << endl;
								cout << endl;
								cout << "1. Front Lotus (Omote Renge)" << endl;
								cout << "2. Reverse Lotus (Ura Renge)";
								if (!gate1Activated || !gate2Activated || !hasUsedFrontLotus) {
									cout << " (disabled)" << endl;
								}
								else {
									cout << endl;
								}
								switch (choiceKey) {
									case 1:	
										if (playerEP >= 13) {
											cout << endl;
											cout << "Attack with Front Lotus now?" << endl;
											cout << endl;
											cout << "1 for Yes, 2 for No" << endl;
											cout << endl;
											pressChoice();
											switch (choiceKey) {
												case 1:
													clearKey();
													if (playerEP >= 13) {
														playerEP -= 13;
														bossDamage = ceil(((3.8 * playerATK) - (0.7 * bossEND)) / 2);
														bossHP -= bossDamage;
														cout << "Keigan: \"Taste this with the might of my OMOTE RENGE!\"" << endl;
														cout << endl;
														cout << "You deal " << bossDamage << " damage to Arlong!" << endl;
														bossDamage = 0;
														staggeredArlong = true;
														playerInTurn = false;
													}
													else {
														cout << endl;
														cout << "Not enough Energy Points!" << endl;
													}
													break;
												case 2:
													clearKey();
													break;
											}
										}
										else {
											cout << endl;
											cout << "Not enough Energy Points!" << endl;
										}
										break;
									case 2:
										if (lotusCooldown = 0) {
											cout << endl;
											cout << "Attack with Reverse Lotus now?" << endl;
											cout << endl;
											cout << "1 for Yes, 2 for No" << endl;
											cout << endl;
											pressChoice();
											switch (choiceKey) {
												case 1:
													clearKey();
													if (playerEP >= 25) {	
														if (hasUsedFrontLotus) {
															if (!gate2Activated) {	
																playerEP -= 25;
																cout << endl;
																bossDamage = ceil(((5 * playerATK) - (0.65 * bossEND)) / 2);
																bossHP -= bossDamage;
																cout << "Keigan: \"Burn to ashes with the power of my URA RENGE!\"" << endl;
																cout << endl;
																cout << "You deal " << bossDamage << " damage to Arlong!" << endl;
																bossDamage = 0;
																playerInTurn = false; 
																staggeredArlong = true;
																lotusCooldown = 6;
															}
															else {
																playerEP -= 25;
																cout << endl;
																bossDamage = ceil(((6.25 * playerATK) - (0.65 * bossEND)) / 2);
																bossHP -= bossDamage;
																cout << "Keigan: \"Burn to ashes with the power of my URA RENGE!\"" << endl;
																cout << endl;
																cout << "You deal " << bossDamage << " damage to Arlong!" << endl;
																bossDamage = 0;
																playerInTurn = false; 
																staggeredArlong = true;
																lotusCooldown = 6;
															}
														}
														else {
															cout << endl;
															cout << "You must use Front Lotus in the last turn!" << endl;
														}
													}
													else {
														cout << endl;
														cout << "Not enough Energy Points!" << endl;
													}
													break;
												case 2;
													clearKey();
													break;
											}
										}
										else {
											cout << endl;
											cout << "Ability on cooldown!" << endl;
										}
										break;
								}
							}
							else {
								cout << endl;
								cout << "You must execute a Barrage Attack in order to continue!" << endl;
							}
						}
						else {
							cout << endl;
							cout << "The Eight Gates must be activated!" << endl;
						}
					}
					else {
						cout << endl;
						cout << "You must equip the Chain Relic!" << endl;
					}
					break;
				case 5:
					clearKey();
					cout << endl;
					cout << "Activate the Eight Gates:" << endl;
					cout << endl;
					cout << "1. Activate Gate 1" << endl;
					cout << "2. Activate Gate 2" << endl;
					cout << endl;
					pressChoice();
					switch (choiceKey) {
						case 1:
							clearKey();
							if (gate1Activated) {
								cout << endl;
								cout << "Gate of Opening already active!" << endl;
								cout << endl;
								cout << "Do you want to disable Gate of Opening?" << endl;
								cout << endl;
								cout << "1 for Yes, 2 for No" << endl;
								cout << endl;
								pressChoice();
								switch (choiceKey) {
									case 1:
										gate1Activated = false;
										if (!hasMasteredGates) {
											playerATK /= 1.4;
											playerEND /= 1.4;
											cout << endl;
											cout << "Attack Power now reduced to " << playerATK << endl;
											cout << "Endurance now reduced to " << playerEND << endl;
										}
										break;
									case 2:
										cout << endl;
										break;
								}
							}
							else {
								if (!hasUsedGateBefore) {
									if (!hasMasteredGates) {
										if (playerEP >= 35) {	
											playerEP -= 35;
											playerATK *= 1.8;
											cout << endl;
											cout << "Gate of Opening active!" << endl;
											cout << endl;
											cout << "Your Attack increases by 1.8!" << endl;
											cout << "Current ATK: " << playerATK << endl;
										}
										else {
											cout << endl;
											cout << "Not enough Energy Points!" << endl;
										}
									}
									else {
										if (playerEP >= 30) {
											playerEP -= 30;
											playerATK = 1.8;
											cout << endl;
											cout << "Gate of Opening active!" << endl;
											cout << "Your Attack increases by 1.8!" << endl;
											cout << "Current ATK: " << playerATK << endl;
											cout << endl;
											cout << "Do you wish to unlock Gate of Healing?" << endl;
											cout << endl;
											cout << "1 for Yes, 2 for No" << endl;
											cout << endl;
											pressChoice();
											switch (choiceKey) {
												case 1:
													if (playerEP >= 10) {
														playerEP -= 10;
														playerATK *= 2.2;
														cout << endl;
														cout << "Your Attack increases by 2.2!" << endl;
														cout << "Current ATK: " << playerATK << endl;
													}
													else {
														cout << endl;
														cout << "Not enough Energy Points!" << endl;
													}
													break;
												case 2:
													cout << endl;
													break;
											}
										}
										else {
											cout << endl;
											cout << "Not enough Energy Points!" << endl;
										}
									}
								}
								else {
									if (!hasMasteredGates) {
										if (playerEP >= 1.5 * 35) {	
											playerEP -= 1.5 * 35;
											playerATK *= 1.8;
											cout << endl;
											cout << "Gate of Opening active!" << endl;
											cout << endl;
											cout << "Your Attack increases by 1.8!" << endl;
											cout << "Current ATK: " << playerATK << endl;
										}
										else {
											cout << endl;
											cout << "Not enough Energy Points!" << endl;
										}
									}
									else {
										if (playerEP >= 1.5 * 30) {
											playerEP -= 1.5 * 30;
											playerATK = 1.8;
											cout << endl;
											cout << "Gate of Opening active!" << endl;
											cout << "Your Attack increases by 1.8!" << endl;
											cout << "Current ATK: " << playerATK << endl;
											cout << endl;
											cout << "Do you wish to unlock Gate of Healing?" << endl;
											cout << endl;
											cout << "1 for Yes, 2 for No" << endl;
											cout << endl;
											pressChoice();
											switch (choiceKey) {
												case 1:
													if (playerEP >= 1.5 * 10) {
														playerEP -= 1.5 * 10;
														playerATK *= 2.2;
														cout << endl;
														cout << "Your Attack increases by 2.2!" << endl;
														cout << "Current ATK: " << playerATK << endl;
													}
													else {
														cout << endl;
														cout << "Not enough Energy Points!" << endl;
													}
													break;
												case 2:
													cout << endl;
													break;
											}
										}
										else {
											cout << endl;
											cout << "Not enough Energy Points!" << endl;
										}
									}
								}
							}
							break;
					}
					break;
			}
			if (gate1Activated) {
				if (gate2Activated) {
					if (playerEP < 9) {
						gate2Activated = false;
						playerATK /= 1.4;
						playerEND /= 1.4;
						cout << endl;
						cout << "Gate of Healing closed!" << endl;
						cout << "Attack Power now reduced to " << playerATK << endl;
						cout << "Endurance now reduced to " << playerEND << endl;
					}
				}
				else {
					if (hasMasteredGates) {
						if (playerEP < 5) {
							gate1Activated = false;
							playerATK /= 1.4;
							playerEND /= 1.4;
							cout << endl;
							cout << "Gate of Opening closed!" << endl;
							cout << "Attack Power now reduced to " << playerATK << endl;
							cout << "Endurance now reduced to " << playerEND << endl;
						}
					}
					else {
						if (playerEP < 7) {
							gate1Activated = false;
							playerATK /= 1.5;
							playerEND /= 1.5;
							cout << endl;
							cout << "Gate of Opening closed!" << endl;
							cout << "Attack Power now reduced to " << playerATK << endl;
							cout << "Endurance now reduced to " << playerEND << endl;
						}
					}
				}
			}
			cout << endl;
			printLine();
			cout << endl;
			pressKey();
			clearLines();
		}
		if (bossHP < 0) {
			cout << endl;
			cout << "Arlong: \"BLLLAAARRRRGGGGGHHHH!!!\"" << endl;
			cout << endl;
			cout << "Arlong falls to the floor." << endl;
			cout << "Keigan Lee wins!" << endl;
			cout << endl;
			bossDefeated = true;
			fightOver = true;
			printLine();
			cout << endl;
			pressKey();
			clearLines();
		}
		else {
			cout << endl; // Boss Turn
			if (bossHP <= 1600 && bossHP > 900) {
				cout << endl;
				cout << "Arlong: \"*heavy panting* You know what, I admit it. You are strong, but now, look at my weapon!\"" << endl;
				cout << "Arlong: \"*draws weapon* Behold, my Kiribachi! Now, test your might, BOY!\"" << endl;
				cout << endl;
			}
			else if (bossHP <= 900 && bossHP > 0) {
				cout << endl;
				cout << "Arlong: \"*exhausted* How are still be alive, boy... YOU ARE GOING TO REGRET THIS!!!\"" << endl;
				cout << "Arlong: \"RRRAAAAAAAGGGGGGGGHHHHHHHHH!!!\"" << endl;
				cout << endl;
				cout << "Arlong supercharges, making it his last resort." << endl;
			}
			playerDamage = ceil((bossATK - playerEND) / 2);
			playerHP -= playerDamage;
			cout << "You take " << playerDamage << "damage!" << endl;
			cout << endl;
			if (playerHP <= 0) {
				cout << endl;
				cout << "Keigan: \"rrr... ahhh... *falls to the ground*\"" << endl;
				cout << "Luffy: \"Keigan!!!\"" << endl;
				cout << "Zoro: \"Oh no...\"" << endl;
				cout << endl;
				cout << "Keigan is defeated." << endl;
				cout << endl;
				printLine();
				cout << endl;
				pressKey();
				clearLines();
				fightOver = true;
			}
			else {
				playerEP += playerREGENEP;
				printLine();
				cout << endl;
				pressKey();
				clearLines();
			}
		}
	}
}

// Chapter 3
void chapter3() {
	cout << endl;
	cout << "CHAPTER 3" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Baratie (restaurant ship)" << endl;
	cout << endl; 
	cout << "Wielding Bell-mere\'s headband, Keigan sails to Baratie, where he\'s greeted by the most popular pirate crew in the world: The Straw Pirates." << endl;
	cout << "A while later, Don Krieg and his armada attack them. Dracule Mihawk and Zoro fighting each other, with Zoro exhausted but still living." << endl;
	cout << "As the crew left onboard the Going Merry, one glimpse of the eye caught Keigan\'s attention." << endl;
	cout << endl;
	cout << "Keigan: \"*silent* Nami...?\"" << endl;
	cout << endl;
	cout << "After the battle, the Straw Hats decided to give chase. Luffy and Sanji stay, Zoro, Usopp, Yosaku, and others in hot pursuit." << endl;
	cout << "Keigan follows them to the Conomi Islands, continuing with the drive he kept buried for eight years." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Village" << endl;
	cout << endl;
	cout << "The group reaches Cocoyashi and finds a village hollowed by fear." << endl;
	cout << "Nojiko explains everyone Nami\'s past." << endl;
	cout << "The Straw Hats were stunned." << endl;
	cout << endl;
	cout << "Everyone in this island, the Straw Hats, the Good Hearted Pirates, and Keigan, all united in this fateful day." << endl;
	cout << endl;
	cout << "Usopp: \"Hey, you! The one who got thrown to the ocean?\"" << endl;
	cout << "Zoro: \"And only a few survived, you were one of them.\"" << endl;
	cout << "Luffy: \"So you want to help us defeat him?\"" << endl;
	cout << "Keigan: \"Yup. *silent* I promised I would come back, Nami. I\'m here to end it.\"" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Arlong Park" << endl;
	cout << endl;
	cout << "They marched towards Arlong Park, where Arlong and the fishmen are waiting for him." << endl;
	cout << "The alliance pushed through the Marine and Fishman sentries with blunt force and words." << endl;
	cout << endl;
	cout << "Arlong: \"Welcome to the arena. So you\'re the same guy I threw to the ocean, huh\"?" << endl;
	cout << "Arlong: \"Perfect. We end this now.\"" << endl;
	cout << endl;
	cout << "The stage is set, everyone holding patience to this very moment. Arlong and the fishmen against Keigan and the pirates." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	bossFight();
}

// Chapter 4
void chapter4() {
	cout << endl;
	cout << "Arlong Kiribachi acquired!" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "CHAPTER 4" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Arlong Park" << endl;
	cout << endl;
	cout << "Arlong Park falls, and all fishmen were defeated. The Marines retreat." << endl;
	cout << "The Cocoyashi Village is finally saved thanks to Keigan and the Pirates." << endl;
	cout << "Everything settles after it crumbled. Prisoners free, Keigan collapsed on the floor, the battle was very exhausting." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Arlong Park" << endl;
	cout << endl;
	cout << "Luffy: \"Finally! We did it!\"" << endl;
	cout << "Keigan: \"*in his mind* Ahh... At last, Bell-mere, we can finally rest.\"" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Bell-mere\'s grave" << endl;
	cout << endl;
	cout << "Keigan and the crew came back, along with a happy and joyous Nami, at the site which she was buried." << endl;
	cout << "Remembrance spilled the place with tears of joy, and Keigan, carrying the band on his shoulder, laid it down on her tombstone." << endl;
	cout << endl;
	cout << "Keigan: \"I once hoped when you\'re alive, we can celebrated together. This is for you, Bell-mere.\"" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Village" << endl;
	cout << endl;
	cout << "THREE DAYS LATER" << endl;
	cout << endl;
	cout << "As the festival comes to an end, however, Nami prepares to leave with the Straw Hats, visiting Doctor Nako to have her wounds patched up." << endl;
	cout << "Genzo and Keigan visit the grave one final time before leaving." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Location: Cocoyashi Docks" << endl;
	cout << endl;
	cout << "At the last minute, Luffy turned around looking at Keigan and smiles." << endl;
	cout << endl;
	cout << "Luffy: \"Hey, pal! You look strong! come with us!\"" << endl;
	cout << "Keigan: \"*in shock* Wait, huh? Really? Guess I\'ll handle the bookkeeping, then.\"" << endl;
	cout << "Celebration erupted in the Going Merry, and Keigan watches the village happily one last time." << endl;
	cout << "The ship sets sail, and he can finally feel the breeze once again." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "Unfortunately, there comes the trouble at the newspaper..." << endl;
	cout << endl;
	cout << "Nami: \"Uhh... guys... Come here at see this.\"" << endl;
	cout << "Keigan: \"Uh... what is happening?\"" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << "The newspaper:" << endl;
	cout << "Straw Hat Monkey D. Luffy - 30,000,000 Beli" << endl;
	cout << "Jet Lee Keigan - 5,000,000 Beli" << endl;
	cout << endl;
	cout << "Usopp: \"Wait a minute, what do you mean he is the \'Jet\'? Did he actually got that title?\"" << endl;
	cout << endl;
	cout << "Everyone now knows who he is now, and where he stays." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << setw(20) << "T H E   E N D" << setw(20) << endl;
	cout << endl;
	cout << "It is not the actual physical exertion that counts towards one\'s progress, nor the nature of the task, but by the spirit of faith with which it is undertaken." << endl;
	cout << setw(40) << "- St. Francis Xavier" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
}

// Alternate Ending
void altEnding() {
	cout << endl;
	cout << "Keigan is defeated, again, and thrown into the ocean, again." << endl;
	cout << "After sinking into the ocean, he wakes up, only to find himself being 8 years old." << endl;
	cout << "He stands up in confusion, and everything goes back to the way it was, no Arlong, the village still at peace." << endl;
	cout << endl;
	cout << "Keigan: \"*silent* Is this... all a dream? Can I really defeat Arlong?\"" << endl;
	cout << endl;
	cout << "The vision dissolves into silence." << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
	cout << endl;
	cout << endl;
	cout << setw(20) << "T H E   E N D" << setw(20) << endl;
	cout << endl;
	cout << "Take care, take care, never to close your heart to anyone." << endl;
	cout << setw(40) << "- St. Pierre Fabier" << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
}

// Disclaimer
void warningScreen() {
	cout << endl;
    cout << "           D I S C L A I M E R          " << endl;
    cout << endl;
    cout << " This is a work of fiction. Any of the  " << endl;
    cout << " characters, events, and objects based  " << endl;
    cout << "   on the original \"One Piece\" anime    " << endl;
    cout << "  are fan-made. All rights go to their  " << endl;
    cout << "           respective owners.           " << endl;
    cout << endl;
    cout << "   Dialogue is transcripted from the    " << endl;
    cout << "   OP/Naru Fanfic and not the official  " << endl;
    cout << "               animation.               " << endl;
    cout << endl;
    cout << "  Viewer Discretion is Advised. (18+)   " << endl;
	cout << endl;
	cout << "   Also, the work in this game is not   " << endl;
	cout << " made by AI. Always use it responsibly. " << endl;
    cout << endl;
    printLine();
    cout << endl;
    pressKey();
    clearLines();
}

// Introduction
void introScreen() {
	cout << endl;
	cout << "            \" R E B O R N \"             " << endl;
	cout << endl;
	cout << "     in East Blue with the Eight Gates    " << endl;
	cout << endl;
	printLine();
	cout << endl;
	pressKey();
	clearLines();
}

// Startup Screen
void startScreen() {
    cout << "\"To give, and not to count the cost" << endl;
    cout << "to fight, and not to heed the wounds," << endl;
    cout << "to toil, and not to seek for rest," << endl;
    cout << "to labor, and not to ask for any reward," << endl;
    cout << "save that of knowing that we do thy will\"" << endl;
    cout << endl;
    cout << setw(17) << "- St. Ignatius of Loyola" << endl;
    cout << endl;
    cout << setw(4) << "A D   M A J O R E M   D E I   G L O R I A M" << setw(3) << endl;
    cout << endl;
    cout << setw(6) << "A project of Ateneo de Naga University" << setw(6) << endl;
    cout << setw(0) << endl;
    printLine();
    cout << endl;
	pressKey();
	clearLines();
}

// Exit Game
void exitGame() {
	clearLines();
	cout << "----------------------------------------" << endl;
    cout << "|                                      |" << endl;
    cout << "|    Are you sure you want to quit?    |" << endl;
    cout << "|                                      |" << endl;
    cout << "|     Press 1 for Yes, or 2 for No     |" << endl;
    cout << "|                                      |" << endl;
    cout << "----------------------------------------" << endl;
    pressChoice();
    if (choiceKey == '1') {
        continueGame = false;
        clearKey();
    }
}

// Enter Name
void enterName() {
	cout << "Before you continue, we want to ask for your name." << endl;
	cout << endl;
	cout << "Enter your name here: ";
	cin >> playerName;
	cout << endl;
	cout << "Enter your nickname here: ";
	cin >> playerNickname;
	clearLines();
}

// Play the Full Game
void playGame() {
   	clearKey();
	clearLines();
	enterName();
   	warningScreen();
    introScreen();
	chapter1();
	chapter2();
	chapter3();
	if (bossDefeated) {
		chapter4();
		cout << "Congratulations, " << playerNickname << "! You just won the game!" << endl;
		cout << "Full Name: " << playerName << endl;
		printLine();
		cout << endl;
		pressKey();
		clearLines();
	}
	else {
		altEnding();
		cout << "Nice try, " << playerNickname << ", but keep going try again!" << endl;
		cout << "Full Name: " << playerName << endl;
		printLine();
		cout << endl;
		pressKey();
		clearLines();
	}
}

// Main Menu
void mainMenu() {
    cout << "----------------------------------------" << endl;
    cout << "|                                      |" << endl;
    cout << "|      \"Reborn\" In East Blue With      |" << endl;
    cout << "|           The Eight Gates            |" << endl;
    cout << "|                                      |" << endl;
	cout << "| A fanfic from the anime \"One Piece\"  |" << endl;
	cout << "|                                      |" << endl;
    cout << "|       Press 1 to start playing.      |" << endl;
    cout << "|           Press 2 to Quit.           |" << endl;
    cout << "|                                      |" << endl;
    cout << "----------------------------------------" << endl;
}

// Game Flow
int main() {
    startScreen(); // Shows Startup Screen
    while (continueGame == true) {
        mainMenu(); // Shows Main Menu
        pressChoice();
        if (choiceKey == '1') {
        	exitGame(); // Exit Game
		}
		else if (choiceKey == '2') {
			playGame(); // Play Game
		}
    }
    return 0;
}







