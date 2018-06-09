/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderSmsPayload : AceObject <SAReminderPayload>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *recipients;
@property (readonly) Class superclass;

+ (id)smsPayload;
+ (id)smsPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)message;
- (id)recipients;
- (void)setMessage:(id)arg1;
- (void)setRecipients:(id)arg1;

@end
