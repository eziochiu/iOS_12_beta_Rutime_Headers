/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversation : NSObject {
    NSNumber * _businessConversation;
    IMChat * _chat;
    struct { 
        unsigned int ignoringTypingUpdates : 1; 
    }  _conversationFlags;
    NSAttributedString * _groupName;
    bool  _isReportedAsSpam;
    unsigned int  _limitToLoad;
    NSString * _name;
    bool  _needsReload;
    NSArray * _pendingHandles;
    NSSet * _pendingRecipients;
    NSString * _previewText;
    NSArray * _recipients;
    NSString * _selectedLastAddressedHandle;
    int  _wasDetectedAsSMSSpam;
}

@property (nonatomic, retain) NSNumber *businessConversation;
@property (nonatomic, readonly) BOOL buttonColor;
@property (nonatomic, readonly) bool canLeave;
@property (nonatomic, retain) IMChat *chat;
@property (nonatomic, readonly) NSString *deviceIndependentID;
@property (nonatomic, readonly) unsigned long long disclosureAtomStyle;
@property (nonatomic) NSString *displayName;
@property (nonatomic) bool forceMMS;
@property (nonatomic, readonly) NSArray *frequentReplies;
@property (getter=isGroupConversation, nonatomic, readonly) bool groupConversation;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSAttributedString *groupName;
@property (nonatomic, readonly) NSArray *handles;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasUnreadMessages;
@property (getter=isIgnoringTypingUpdates, nonatomic) bool ignoringTypingUpdates;
@property (nonatomic, readonly) bool isPreviewTextForAttachment;
@property (nonatomic) bool isReportedAsSpam;
@property (nonatomic, readonly) bool isToEmailAddress;
@property (getter=hasLeft, nonatomic, readonly) bool left;
@property (getter=hasLeftGroupChat, nonatomic, readonly) bool leftGroupChat;
@property (nonatomic) unsigned int limitToLoad;
@property (nonatomic, copy) NSString *localUserIsComposing;
@property (nonatomic) bool localUserIsRecording;
@property (nonatomic) bool localUserIsTyping;
@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool needsReload;
@property (getter=isPending, nonatomic, readonly) bool pending;
@property (nonatomic, readonly, copy) NSArray *pendingEntities;
@property (nonatomic, copy) NSArray *pendingHandles;
@property (nonatomic, retain) NSSet *pendingRecipients;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic, copy) NSString *previewText;
@property (nonatomic, readonly) CKEntity *recipient;
@property (nonatomic, readonly) unsigned long long recipientCount;
@property (nonatomic, readonly, copy) NSArray *recipientStrings;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, retain) NSString *selectedLastAddressedHandle;
@property (getter=shouldSendReadReceipts, nonatomic, readonly) bool sendReadReceipts;
@property (nonatomic, readonly, copy) NSString *senderIdentifier;
@property (nonatomic, readonly) IMService *sendingService;
@property (nonatomic, readonly) NSString *serviceDisplayName;
@property (nonatomic, readonly) bool shouldShowCharacterCount;
@property (nonatomic, readonly) bool supportsMutatingGroupMembers;
@property (nonatomic, readonly) unsigned long long unreadCount;
@property (nonatomic, retain) CKComposition *unsentComposition;
@property (nonatomic, readonly) int wasDetectedAsSMSSpam;

+ (bool)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (bool)_iMessage_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 error:(id*)arg3;
+ (bool)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1;
+ (bool)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2;
+ (id)_iMessage_localizedErrorForReason:(long long)arg1;
+ (long long)_iMessage_maxAttachmentCount;
+ (unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(bool)arg1;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (bool)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 phoneNumber:(id)arg3;
+ (bool)_sms_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 error:(id*)arg3;
+ (bool)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 phoneNumber:(id)arg2;
+ (bool)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 phoneNumber:(id)arg2 errorCode:(long long*)arg3;
+ (id)_sms_localizedErrorForReason:(long long)arg1;
+ (long long)_sms_maxAttachmentCountForPhoneNumber:(id)arg1;
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;
+ (bool)_sms_mediaObjectPassesDurationCheck:(id)arg1;
+ (bool)_sms_mediaObjectPassesRestriction:(id)arg1;
+ (id)conversationForAddresses:(id)arg1 allowRetargeting:(bool)arg2 candidateConversation:(id)arg3;
+ (bool)isSMSSpamFilteringEnabled;
+ (id)newPendingConversation;
+ (bool)pinnedConversationsEnabled;

- (void).cxx_destruct;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatPropertiesChanged:(id)arg1;
- (bool)_chatSupportsTypingIndicators;
- (void)_clearTypingIndicatorsIfNecessary;
- (void)_deleteAllMessagesAndRemoveGroup:(bool)arg1;
- (bool)_earlyReturnHistoryLoad;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)_handleEngroupFinishedUpdating:(id)arg1;
- (bool)_handleIsForThisConversation:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;
- (id)_headerTitleForService:(id)arg1;
- (bool)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(bool)arg2;
- (bool)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
- (id)_nameForHandle:(id)arg1;
- (bool)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(bool)arg2;
- (bool)_sms_supportsCharacterCountForAddresses:(id)arg1;
- (bool)_sms_willSendMMSByDefaultForAddresses:(id)arg1;
- (void)acceptTransfer:(id)arg1;
- (void)addRecipientHandles:(id)arg1;
- (id)businessConversation;
- (BOOL)buttonColor;
- (bool)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (bool)canInsertMoreRecipients;
- (bool)canLeave;
- (bool)canSendComposition:(id)arg1 error:(id*)arg2;
- (bool)canSendToRecipients:(id)arg1 alertIfUnable:(bool)arg2;
- (id)chat;
- (void)clearConversationLoadFromSpotlight;
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;
- (id)copyForPendingConversation;
- (id)date;
- (void)dealloc;
- (void)deleteAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (id)description;
- (id)deviceIndependentID;
- (void)didBecomeActive;
- (unsigned long long)disclosureAtomStyle;
- (id)displayName;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (id)ensureMessageWithGUIDIsLoaded:(id)arg1;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)fetchSuggestedNameIfNecessary;
- (bool)forceMMS;
- (id)frequentReplies;
- (id)groupID;
- (id)groupName;
- (id)handles;
- (bool)hasDisplayName;
- (bool)hasLeft;
- (bool)hasLeftGroupChat;
- (bool)hasLoadedFromSpotlight;
- (bool)hasReplyEnabled;
- (bool)hasUnreadMessages;
- (bool)hasVerifiedBusiness;
- (id)init;
- (id)initWithChat:(id)arg1;
- (bool)isAppleConversation;
- (bool)isBusinessConversation;
- (bool)isDowngraded;
- (bool)isGroupConversation;
- (bool)isIgnoringTypingUpdates;
- (bool)isMakoConversation;
- (bool)isMuted;
- (bool)isPending;
- (bool)isPinned;
- (bool)isPlaceholder;
- (bool)isPreviewTextForAttachment;
- (bool)isReportedAsSpam;
- (bool)isToEmailAddress;
- (unsigned int)limitToLoad;
- (void)loadAllMessages;
- (void)loadAllUnreadMessagesUpToMessageGUID:(id)arg1;
- (void)loadFrequentReplies;
- (void)loadMoreMessages;
- (void)loadMoreMessagesAfterLastMessage;
- (void)loadMoreMessagesBeforeFirstMessage;
- (id)localUserIsComposing;
- (bool)localUserIsRecording;
- (bool)localUserIsTyping;
- (void)markAllMessagesAsRead;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (long long)maximumRecipientsForSendingService;
- (id)messageWithComposition:(id)arg1;
- (id)messagesFromComposition:(id)arg1;
- (id)name;
- (bool)needsReload;
- (bool)noAvailableServices;
- (id)orderedContactsForAvatarView;
- (BOOL)outgoingBubbleColor;
- (id)pendingEntities;
- (id)pendingHandles;
- (id)pendingRecipients;
- (id)previewText;
- (id)recipient;
- (unsigned long long)recipientCount;
- (id)recipientStrings;
- (id)recipients;
- (void)refreshServiceForSending;
- (void)reloadIfNeeded;
- (void)removeRecipientHandles:(id)arg1;
- (void)resetCaches;
- (void)resetNameCaches;
- (id)selectedLastAddressedHandle;
- (BOOL)sendButtonColor;
- (void)sendMessage:(id)arg1 newComposition:(bool)arg2;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(bool)arg3;
- (id)senderIdentifier;
- (id)sendingService;
- (id)serviceDisplayName;
- (void)setBusinessConversation:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setForceMMS:(bool)arg1;
- (void)setIgnoringTypingUpdates:(bool)arg1;
- (void)setIsReportedAsSpam:(bool)arg1;
- (void)setLimitToLoad:(unsigned int)arg1;
- (void)setLoadedMessageCount:(unsigned long long)arg1;
- (void)setLoadedMessageCount:(unsigned long long)arg1 loadImmediately:(bool)arg2;
- (void)setLocalUserIsComposing:(id)arg1;
- (void)setLocalUserIsComposing:(id)arg1 typingIndicatorIcon:(id)arg2;
- (void)setLocalUserIsRecording:(bool)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)setMutedUntilDate:(id)arg1;
- (void)setNeedsReload;
- (void)setPendingComposeRecipients:(id)arg1;
- (void)setPendingHandles:(id)arg1;
- (void)setPendingRecipients:(id)arg1;
- (void)setPinned:(bool)arg1;
- (void)setPreviewText:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSelectedLastAddressedHandle:(id)arg1;
- (void)setSendReadReceipts:(bool)arg1;
- (void)setUnsentComposition:(id)arg1;
- (id)shortDescription;
- (bool)shouldSendReadReceipts;
- (bool)shouldShowCharacterCount;
- (bool)supportsMutatingGroupMembers;
- (bool)supportsSurf;
- (id)uniqueIdentifier;
- (void)unmute;
- (unsigned long long)unreadCount;
- (id)unsentComposition;
- (void)updateDisplayNameIfSMSSpam;
- (void)updateUserActivity;
- (int)wasDetectedAsSMSSpam;
- (void)willBecomeInactive;

@end
