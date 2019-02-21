// API Function Imports
#include "sdk/GrandM.h"

// When Plugin gets loaded
extern "C" DLL_PUBLIC bool API_Initialize(void)
{
	return true;
}

// When plugin gets unloaded
extern "C" DLL_PUBLIC bool API_Close(void)
{
	return true;
}

// Every server tick this gets called
extern "C" DLL_PUBLIC bool API_OnTick(void)
{
	return true;
}

// When a player connects (still syncing with the server)	
extern "C" DLL_PUBLIC bool API_OnPlayerConnecting(Objects::Entity player)
{
	return true;
}

// When the player is successfully connected (loaded in, but not spawned yet)
extern "C" DLL_PUBLIC bool API_OnPlayerConnected(Objects::Entity player)
{
	return true;
}

// Called when a player leaves the server
/// <param name="reason">The reason the player disconnected,  0 = Left, 1 = Timeout, 2 = Kicked, 3 = Banned</param>
extern "C" DLL_PUBLIC void API_OnPlayerDisconnected(Objects::Entity entity, int reason)
{
	
}

// When a entity enters a checkpoint (only players right now)
extern "C" DLL_PUBLIC void API_OnEntityEnterCheckpoint(Objects::Entity checkpoint, Objects::Entity entity)
{
	
}

// When a entity exits a checkpoint (only players right now)
extern "C" DLL_PUBLIC void API_OnEntityExitCheckpoint(Objects::Entity checkpoint, Objects::Entity entity)
{
	
}

// When a player sends a command
extern "C" DLL_PUBLIC void API_OnPlayerCommand(Objects::Entity entity, const wchar_t * message)
{
	
}

// When a player sends a message
extern "C" DLL_PUBLIC void API_OnPlayerMessage(Objects::Entity entity, const wchar_t * message)
{
	
}

// When a CEF page has finished loading
extern "C" DLL_PUBLIC void API_OnCefFinishLoad(Objects::Entity entity)
{
	
}

// When a CEF page sends data
extern "C" DLL_PUBLIC void API_OnCefSendData(Objects::Entity entity, const char * data)
{
	
}

// Called whern a player has just shot
extern "C" DLL_PUBLIC void API_OnPlayerShot(Objects::Entity entity, const char * weapon)
{
	
}

// Called when a entity has just taken damage
extern "C" DLL_PUBLIC const bool API_OnEntityDamage(Objects::Entity entity, const int damage, Objects::Entity attacker, const char * weapon)
{
	
	// Return True to allow server to handle and sync the damage
	// Return False to block damage sync
	return true;
}

// Called after a player has shot and their projectile hits something
extern "C" DLL_PUBLIC void API_OnProjectileImpact(Objects::Entity player, const char * weapon, CVector3 position, Objects::Entity entity, const int bone)
{

}

// Called when a player picks up and pickup
extern "C" DLL_PUBLIC void API_OnPlayerPickup(Objects::Entity player, Objects::Entity pickup)
{

}

// Called when an entity dies
extern "C" DLL_PUBLIC void API_OnEntityDeath(Objects::Entity entity, Objects::Entity killer)
{

}