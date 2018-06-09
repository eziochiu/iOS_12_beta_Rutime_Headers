/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSConversationState : NSObject <NSSecureCoding> {
    MSMessage * _activeMessage;
    NSData * _conversationEngramID;
    NSString * _conversationID;
    NSUUID * _conversationIdentifier;
    NSArray * _draftAssetArchives;
    NSArray * _recipientAddresses;
    NSArray * _recipientIdentifiers;
    NSString * _senderAddress;
    NSUUID * _senderIdentifier;
}

@property (nonatomic, retain) MSMessage *activeMessage;
@property (nonatomic, retain) NSData *conversationEngramID;
@property (nonatomic, retain) NSString *conversationID;
@property (nonatomic, retain) NSUUID *conversationIdentifier;
@property (nonatomic, copy) NSArray *draftAssetArchives;
@property (nonatomic, retain) NSArray *recipientAddresses;
@property (nonatomic, retain) NSArray *recipientIdentifiers;
@property (nonatomic, retain) NSString *senderAddress;
@property (nonatomic, retain) NSUUID *senderIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeMessage;
- (id)conversationEngramID;
- (id)conversationID;
- (id)conversationIdentifier;
- (id)description;
- (id)draftAssetArchives;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)recipientAddresses;
- (id)recipientIdentifiers;
- (id)senderAddress;
- (id)senderIdentifier;
- (void)setActiveMessage:(id)arg1;
- (void)setConversationEngramID:(id)arg1;
- (void)setConversationID:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setDraftAssetArchives:(id)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (void)setRecipientIdentifiers:(id)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)setSenderIdentifier:(id)arg1;

@end
