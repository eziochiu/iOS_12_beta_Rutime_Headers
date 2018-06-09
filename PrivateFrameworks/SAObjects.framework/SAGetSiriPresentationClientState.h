/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetSiriPresentationClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSArray *callbacks;
@property (nonatomic, retain) SASiriPresentationClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getSiriPresentationClientState;
+ (id)getSiriPresentationClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientState;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setClientState:(id)arg1;

@end
