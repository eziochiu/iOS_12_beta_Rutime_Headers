/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMailbox : MFMailboxUid {
    NSString * _folderID;
}

@property (copy) NSString *folderID;

- (id)URLStringWithAccount:(id)arg1;
- (id)_folderID;
- (id)_privacySafeDescription;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)folderID;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 account:(id)arg3 folderID:(id)arg4;
- (bool)mergeWithUserInfo:(id)arg1;
- (void)setFolderID:(id)arg1;

@end
