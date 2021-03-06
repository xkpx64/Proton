#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends010_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends010_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends010_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends010_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends010_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends010_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends010_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends010_GetFriendPersonaName(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends010_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends010_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends010_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends010_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends010_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends010_GetClanName(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends010_GetClanTag(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends010_GetClanActivityCounts(void *, CSteamID, int *, int *, int *);
extern SteamAPICall_t cppISteamFriends_SteamFriends010_DownloadClanActivityCounts(void *, CSteamID *, int);
extern int cppISteamFriends_SteamFriends010_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends010_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends010_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends010_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends010_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends010_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage(void *, const char *);
extern void cppISteamFriends_SteamFriends010_ActivateGameOverlayToStore(void *, AppId_t);
extern void cppISteamFriends_SteamFriends010_SetPlayedWith(void *, CSteamID);
extern void cppISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog(void *, CSteamID);
extern int cppISteamFriends_SteamFriends010_GetSmallFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends010_GetMediumFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends010_GetLargeFriendAvatar(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends010_RequestUserInformation(void *, CSteamID, bool);
extern SteamAPICall_t cppISteamFriends_SteamFriends010_RequestClanOfficerList(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends010_GetClanOwner(void *, CSteamID);
extern int cppISteamFriends_SteamFriends010_GetClanOfficerCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends010_GetClanOfficerByIndex(void *, CSteamID, int);
extern uint32 cppISteamFriends_SteamFriends010_GetUserRestrictions(void *);
extern bool cppISteamFriends_SteamFriends010_SetRichPresence(void *, const char *, const char *);
extern void cppISteamFriends_SteamFriends010_ClearRichPresence(void *);
extern const char * cppISteamFriends_SteamFriends010_GetFriendRichPresence(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends010_InviteUserToGame(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends010_GetCoplayFriendCount(void *);
extern CSteamID cppISteamFriends_SteamFriends010_GetCoplayFriend(void *, int);
extern int cppISteamFriends_SteamFriends010_GetFriendCoplayTime(void *, CSteamID);
extern AppId_t cppISteamFriends_SteamFriends010_GetFriendCoplayGame(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends010_JoinClanChatRoom(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends010_LeaveClanChatRoom(void *, CSteamID);
extern int cppISteamFriends_SteamFriends010_GetClanChatMemberCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends010_GetChatMemberByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends010_SendClanChatMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends010_GetClanChatMessage(void *, CSteamID, int, void *, int, EChatEntryType *, CSteamID *);
extern bool cppISteamFriends_SteamFriends010_IsClanChatAdmin(void *, CSteamID, CSteamID);
extern bool cppISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends010_OpenClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends010_CloseClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends010_SetListenForFriendsMessages(void *, bool);
extern bool cppISteamFriends_SteamFriends010_ReplyToFriendMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends010_GetFriendMessage(void *, CSteamID, int, void *, int, EChatEntryType *);
#ifdef __cplusplus
}
#endif
