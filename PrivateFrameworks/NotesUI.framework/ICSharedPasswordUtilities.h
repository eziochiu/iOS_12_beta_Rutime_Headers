/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICSharedPasswordUtilities : NSObject {
    id  _displayedSheet;
}

@property (nonatomic, retain) id displayedSheet;

+ (bool)authenticateWithPassword:(id)arg1 forAccount:(id)arg2;
+ (bool)authenticateWithPassword:(id)arg1 forNote:(id)arg2;
+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(bool)arg2 removingOriginalNote:(bool)arg3;
+ (id)defaultAccountForPasswordProtectedNotes;
+ (bool)isAuthenticatedForAccount:(id)arg1;
+ (bool)isAuthenticatedForDefaultAccount;
+ (bool)isAuthenticatedForNote:(id)arg1;
+ (bool)isDefaultAccountForPasswordNotesLocalAccount;
+ (bool)isDefaultAccountForPasswordNotesiCloudAccount;
+ (bool)isPassword:(id)arg1 correctForAccount:(id)arg2;
+ (bool)isPassword:(id)arg1 correctForNote:(id)arg2;
+ (bool)isSharedPasswordCorrect:(id)arg1;
+ (void)lockAllNotes;
+ (id)nonDeletedLockedNotesFromNotes:(id)arg1;
+ (bool)passwordCapabableAccountExists;
+ (void)resetAllSharedPasswords;
+ (void)resetTimeoutTimer;
+ (bool)setSharedPassword:(id)arg1 hint:(id)arg2;
+ (bool)setSharedPassword:(id)arg1 hint:(id)arg2 oldPassword:(id)arg3;
+ (bool)sharedPasswordExists;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(struct UIWindow { Class x1; }*)arg1;
+ (void)showFirstTimePasswordProtectNoteAlertIfNecessaryForDisplayWindow:(struct UIWindow { Class x1; }*)arg1;
+ (void)transferSharedPasswordIfNecessary;
+ (bool)unlockedNotesOrKeysExist;
+ (void)updateAllNotesWithOldPassword:(id)arg1 toSharedPassword:(id)arg2 fromAccount:(id)arg3;

- (void).cxx_destruct;
- (void)_authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow { Class x1; }*)arg3 completionHandler:(id /* block */)arg4;
- (void)_recursivelyAuthenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow { Class x1; }*)arg3 completionHandler:(id /* block */)arg4;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow { Class x1; }*)arg3 completionHandler:(id /* block */)arg4;
- (void)authenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow { Class x1; }*)arg3 completionHandler:(id /* block */)arg4;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (void)cryptorCachedKeysDidEmpty:(id)arg1;
- (void)dealloc;
- (id)displayedSheet;
- (id)init;
- (void)setDisplayedSheet:(id)arg1;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(struct UIWindow { Class x1; }*)arg3 completionHandler:(id /* block */)arg4;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(struct UIWindow { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;

@end
