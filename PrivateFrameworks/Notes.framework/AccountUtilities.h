/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface AccountUtilities : NSObject {
    NSArray * _accountIDsEnabledForNotes;
    ACAccountStore * _accountStore;
    NSObject<OS_dispatch_group> * _backgroundDispatchGroup;
    NoteContext * _noteContext;
    NSLock * _updateAccountInfosLock;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *backgroundDispatchGroup;
@property (retain) NSLock *updateAccountInfosLock;

+ (id)sharedAccountUtilities;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (id)accountIDsEnabledForNotes;
- (id)accountStore;
- (id)accountsEnabledForNotes;
- (id)backgroundDispatchGroup;
- (void)dealloc;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1;
- (id)freshContext;
- (id)init;
- (id)localAccountDisplayName;
- (bool)localNotesExist;
- (void)setAccountStore:(id)arg1;
- (void)setBackgroundDispatchGroup:(id)arg1;
- (void)setUpdateAccountInfosLock:(id)arg1;
- (void)startKeepingAccountInfosUpToDate;
- (void)updateAccountInfos;
- (id)updateAccountInfosLock;

@end
