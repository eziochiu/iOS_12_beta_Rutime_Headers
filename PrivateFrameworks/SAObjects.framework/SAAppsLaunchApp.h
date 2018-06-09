/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppsLaunchApp : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *applicationClientIdentifier;
@property (nonatomic, copy) NSString *executionEnvironment;
@property (nonatomic, copy) NSString *launchId;

+ (id)launchApp;
+ (id)launchAppWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationClientIdentifier;
- (id)encodedClassName;
- (id)executionEnvironment;
- (id)groupIdentifier;
- (id)launchId;
- (bool)requiresResponse;
- (void)setApplicationClientIdentifier:(id)arg1;
- (void)setExecutionEnvironment:(id)arg1;
- (void)setLaunchId:(id)arg1;

@end
