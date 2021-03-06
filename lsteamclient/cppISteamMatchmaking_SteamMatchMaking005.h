#ifdef __cplusplus
extern "C" {
#endif
extern int cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount(void *);
extern bool cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame(void *, int, AppId_t *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 *);
extern int cppISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32);
extern void cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyList(void *);
extern void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter(void *, const char *, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter(void *, const char *, int, int);
extern void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter(void *);
extern void cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter(void *, const char *, int);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex(void *, int);
extern void cppISteamMatchmaking_SteamMatchMaking005_CreateLobby(void *, ELobbyType);
extern void cppISteamMatchmaking_SteamMatchMaking005_JoinLobby(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking005_LeaveLobby(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby(void *, CSteamID, CSteamID);
extern int cppISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers(void *, CSteamID);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex(void *, CSteamID, int);
extern const char * cppISteamMatchmaking_SteamMatchMaking005_GetLobbyData(void *, CSteamID, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking005_SetLobbyData(void *, CSteamID, const char *, const char *);
extern const char * cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData(void *, CSteamID, CSteamID, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData(void *, CSteamID, const char *, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg(void *, CSteamID, const void *, int);
extern int cppISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry(void *, CSteamID, int, CSteamID *, void *, int, EChatEntryType *);
extern bool cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyData(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer(void *, CSteamID, uint32, uint16, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer(void *, CSteamID, uint32 *, uint16 *, CSteamID *);
extern bool cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit(void *, CSteamID, int);
extern int cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies(void *);
extern bool cppISteamMatchmaking_SteamMatchMaking005_SetLobbyType(void *, CSteamID, ELobbyType);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner(void *, CSteamID);
extern float cppISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance(void *, CSteamID);
#ifdef __cplusplus
}
#endif
