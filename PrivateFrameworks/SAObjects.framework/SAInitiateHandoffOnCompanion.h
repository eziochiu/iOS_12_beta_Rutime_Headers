/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAInitiateHandoffOnCompanion : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *dialogIdentifier;
@property (nonatomic, retain) <SAHandoffPayload> *handoffPayload;
@property (nonatomic, copy) NSString *notificationText;

+ (id)initiateHandoffOnCompanion;
+ (id)initiateHandoffOnCompanionWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)handoffPayload;
- (id)notificationText;
- (bool)requiresResponse;
- (void)setDialogIdentifier:(id)arg1;
- (void)setHandoffPayload:(id)arg1;
- (void)setNotificationText:(id)arg1;

@end
