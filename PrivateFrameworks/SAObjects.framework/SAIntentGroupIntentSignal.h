/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupIntentSignal : SABaseClientBoundCommand

@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;

+ (id)intentSignal;
+ (id)intentSignalWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setIntent:(id)arg1;

@end
