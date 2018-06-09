/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSConversation : NSObject {
    _MSMessageAppContext * _context;
    NSString * _conversationIdentifier;
    <MSConversationDelegate> * _delegate;
    NSArray * _draftAssetArchives;
    NSData * _engramID;
    NSUUID * _identifier;
    NSUUID * _localParticipantIdentifier;
    NSArray * _recipientAddresses;
    NSArray * _remoteParticipantIdentifiers;
    MSMessage * _selectedMessage;
    NSString * _senderAddress;
}

@property (nonatomic, retain) _MSMessageAppContext *context;
@property (nonatomic, readonly) NSString *conversationIdentifier;
@property (nonatomic) <MSConversationDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *draftAssetArchives;
@property (nonatomic, readonly) NSData *engramID;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSUUID *localParticipantIdentifier;
@property (nonatomic, readonly) NSArray *recipientAddresses;
@property (nonatomic, retain) NSArray *remoteParticipantIdentifiers;
@property (nonatomic, retain) MSMessage *selectedMessage;
@property (nonatomic, readonly) NSString *senderAddress;

+ (id)activeConversation;

- (void).cxx_destruct;
- (id)_initWithState:(id)arg1 context:(id)arg2;
- (void)_insertAssetArchive:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_insertAssetArchive:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_insertAttachment:(id)arg1 adamID:(id)arg2 appName:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_insertAttachment:(id)arg1 withAlternateFilename:(id)arg2 skipShelf:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_insertMessage:(id)arg1 localizedChangeDescription:(id)arg2 skipShelf:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_insertMessage:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_insertRichLink:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_insertSticker:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_insertText:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_sendAssetArchive:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateWithState:(id)arg1;
- (id)context;
- (id)conversationIdentifier;
- (id)delegate;
- (id)draftAssetArchives;
- (id)engramID;
- (id)identifier;
- (id)inputMessagePayload;
- (void)insertAttachment:(id)arg1 withAlternateFilename:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)insertImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertMediaAtURL:(id)arg1 attributionURL:(id)arg2 attributionIcon:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)insertMediaAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)insertRichLink:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertSticker:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertStickerWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertStickerWithMediaAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertText:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)localParticipantIdentifier;
- (id)recipientAddresses;
- (id)recipientIdentifiers;
- (id)remoteParticipantIdentifiers;
- (id)selectedMessage;
- (void)sendAttachment:(id)arg1 withAlternateFilename:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendRichLink:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendSticker:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendText:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)senderAddress;
- (id)senderIdentifier;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRemoteParticipantIdentifiers:(id)arg1;
- (void)setSelectedMessage:(id)arg1;
- (void)stageMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)unstageAllItems;
- (void)updateMessagePayload:(id)arg1 completionHandler:(id /* block */)arg2;

@end
