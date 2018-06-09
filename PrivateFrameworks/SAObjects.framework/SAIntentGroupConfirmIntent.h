/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupConfirmIntent : SABaseClientBoundCommand

@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;

+ (id)confirmIntent;
+ (id)confirmIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (bool)requiresResponse;
- (void)setIntent:(id)arg1;

@end
