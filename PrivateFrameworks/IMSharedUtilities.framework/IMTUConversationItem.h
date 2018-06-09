/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMTUConversationItem : IMItem <IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _flags;
}

@property (nonatomic) unsigned long long flags;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (id)conversationUUID;
- (id)copyDictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isFromMe;
- (void)setFlags:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (bool)_hasMessageChatItem;
- (id)_newChatItems;

@end
