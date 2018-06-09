/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupResolveAppForIntentResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *appsList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *needsConfirmation;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *resolutionType;
@property (readonly) Class superclass;

+ (id)resolveAppForIntentResponse;
+ (id)resolveAppForIntentResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)appsList;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)needsConfirmation;
- (bool)requiresResponse;
- (id)resolutionType;
- (void)setAppsList:(id)arg1;
- (void)setNeedsConfirmation:(id)arg1;
- (void)setResolutionType:(id)arg1;

@end
