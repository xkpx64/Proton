#ifdef __cplusplus
extern "C" {
#endif
extern int cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount(void *);
extern bool cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame(void *, int, AppId_t *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 *);
extern int cppISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32);
extern void cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyList(void *);
extern void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter(void *, const char *, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter(void *, const char *, int, int);
extern void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter(void *);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex(void *, int);
extern void cppISteamMatchmaking_SteamMatchMaking003_CreateLobby(void *, bool);
extern void cppISteamMatchmaking_SteamMatchMaking003_JoinLobby(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking003_LeaveLobby(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby(void *, CSteamID, CSteamID);
extern int cppISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers(void *, CSteamID);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex(void *, CSteamID, int);
extern const char * cppISteamMatchmaking_SteamMatchMaking003_GetLobbyData(void *, CSteamID, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking003_SetLobbyData(void *, CSteamID, const char *, const char *);
extern const char * cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData(void *, CSteamID, CSteamID, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData(void *, CSteamID, const char *, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg(void *, CSteamID, const void *, int);
extern int cppISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry(void *, CSteamID, int, CSteamID *, void *, int, EChatEntryType *);
extern bool cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyData(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer(void *, CSteamID, uint32, uint16, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer(void *, CSteamID, uint32 *, uint16 *, CSteamID *);
extern bool cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit(void *, CSteamID, int);
extern int cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled(void *, CSteamID, bool);
extern bool cppISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies(void *);
#ifdef __cplusplus
}
#endif
