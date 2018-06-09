/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INMessage : NSObject <INCacheableContainer, INImageProxyInjecting, INKeyImageProducing, INMessageExport, NSCopying, NSSecureCoding> {
    NSString * _content;
    NSString * _conversationIdentifier;
    NSDate * _dateMessageWasLastRead;
    NSDate * _dateSent;
    NSString * _fileExtension;
    INSpeakableString * _groupName;
    NSString * _identifier;
    INMessageLinkMetadata * _linkMetadata;
    NSString * _locationName;
    long long  _messageEffectType;
    long long  _messageType;
    NSNumber * _numberOfAttachments;
    INCurrencyAmount * _paymentAmount;
    NSArray * _recipients;
    INMessage * _referencedMessage;
    INPerson * _sender;
}

@property (readonly) INImage *_keyImage;
@property (nonatomic, readonly, copy) NSString *content;
@property (nonatomic, readonly, copy) NSString *conversationIdentifier;
@property (nonatomic, readonly, copy) NSDate *dateMessageWasLastRead;
@property (nonatomic, readonly, copy) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fileExtension;
@property (nonatomic, readonly, copy) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) INMessageLinkMetadata *linkMetadata;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic, readonly) long long messageEffectType;
@property (nonatomic, readonly) long long messageType;
@property (nonatomic, readonly, copy) NSNumber *numberOfAttachments;
@property (nonatomic, copy) INCurrencyAmount *paymentAmount;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly, copy) INMessage *referencedMessage;
@property (nonatomic, copy) INPerson *sender;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_keyImage;
- (id)content;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateMessageWasLastRead;
- (id)dateSent;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileExtension;
- (id)groupName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 dateMessageWasLastRead:(id)arg7 numberOfAttachments:(id)arg8 messageType:(long long)arg9 messageEffectType:(long long)arg10;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11 referencedMessage:(id)arg12;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 messageType:(long long)arg8;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 messageType:(long long)arg7;
- (bool)isEqual:(id)arg1;
- (id)linkMetadata;
- (id)locationName;
- (long long)messageEffectType;
- (long long)messageType;
- (id)numberOfAttachments;
- (id)paymentAmount;
- (id)recipients;
- (id)referencedMessage;
- (id)sender;
- (void)setFileExtension:(id)arg1;
- (void)setLinkMetadata:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setPaymentAmount:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore

- (id)debugLogString;

@end
