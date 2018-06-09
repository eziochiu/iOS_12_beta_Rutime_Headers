/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STEmailMessage : STSiriModelObject {
    NSArray * _bccRecipients;
    NSArray * _ccRecipients;
    NSString * _messageBody;
    NSURL * _messageIdentifier;
    NSArray * _receivingAddresses;
    STPerson * _sender;
    NSString * _subject;
    NSArray * _toRecipients;
    long long  _type;
}

@property (nonatomic, retain) NSArray *bccRecipients;
@property (nonatomic, retain) NSArray *ccRecipients;
@property (nonatomic, copy) NSString *messageBody;
@property (nonatomic, retain) NSURL *messageIdentifier;
@property (nonatomic, retain) NSArray *receivingAddresses;
@property (nonatomic, retain) STPerson *sender;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, retain) NSArray *toRecipients;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (id)_personAttributesForRecipients:(id)arg1;
- (id)bccRecipients;
- (id)ccRecipients;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageBody;
- (id)messageIdentifier;
- (id)receivingAddresses;
- (id)sender;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setMessageBody:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setReceivingAddresses:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setType:(long long)arg1;
- (id)subject;
- (id)toRecipients;
- (long long)type;

@end
