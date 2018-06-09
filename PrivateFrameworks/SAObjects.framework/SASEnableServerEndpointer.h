/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASEnableServerEndpointer : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)enableServerEndpointer;
+ (id)enableServerEndpointerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (bool)siriCore_isRestartable;
- (bool)siriCore_supportedByLocalSession;

@end
