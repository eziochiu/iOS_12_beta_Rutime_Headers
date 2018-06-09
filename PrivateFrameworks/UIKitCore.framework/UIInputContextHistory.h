/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputContextHistory : NSObject {
    TIInputContextHistory * _tiInputContextHistory;
}

@property (nonatomic, readonly) NSSet *recipientIdentifiers;
@property (nonatomic, readonly) NSString *senderIdentifier;
@property (nonatomic, readonly) NSSet *senderIdentifiers;
@property (nonatomic, readonly) TIInputContextHistory *tiInputContextHistory;

- (void).cxx_destruct;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)recipientIdentifiers;
- (id)senderIdentifier;
- (id)senderIdentifiers;
- (id)tiInputContextHistory;

@end
