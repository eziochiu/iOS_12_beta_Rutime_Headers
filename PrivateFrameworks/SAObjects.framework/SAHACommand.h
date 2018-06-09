/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHACommand : SADomainCommand <SAConditionallyMutatingClientBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSArray *callbacks;
@property (nonatomic, copy) NSNumber *commandTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAHAFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool mutatingCommand;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *serverValidity;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)command;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;

- (id)actions;
- (id)commandTimeout;
- (id)encodedClassName;
- (id)filter;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (id)serverValidity;
- (void)setActions:(id)arg1;
- (void)setCommandTimeout:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setMutatingCommand:(bool)arg1;
- (void)setServerValidity:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)shortDescription;

@end
