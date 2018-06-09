/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface LocalAccount : MailAccount

+ (id)accountTypeIdentifier;
+ (id)accountTypeString;
+ (id)csAccountTypeString;
+ (id)legacyPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)localAccount;

- (id)_URLScheme;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_infoForMatchingURL:(id)arg1;
- (bool)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (bool)_shouldConfigureMailboxCache;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (bool)canFetch;
- (bool)canGoOffline;
- (bool)deleteInPlaceForMailbox:(id)arg1;
- (id)displayName;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (bool)isActive;
- (id)legacySQLExpressionToMatchAllMailboxes;
- (id)mailboxPathExtension;
- (id)mailboxUidForFileSystemPath:(id)arg1;
- (id)mailboxUidForRelativePath:(id)arg1 create:(bool)arg2 withOption:(int)arg3;
- (id)primaryMailboxUid;
- (id)pushedMailboxUids;
- (bool)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (void)resetSpecialMailboxes;
- (void)setHostname:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (Class)storeClass;
- (bool)supportsAppend;
- (bool)supportsArchiving;
- (bool)supportsPurge;
- (id)transientDraftsFolder;
- (id)transientDraftsFolderShouldCreate:(bool)arg1;
- (id)uniqueId;

@end
