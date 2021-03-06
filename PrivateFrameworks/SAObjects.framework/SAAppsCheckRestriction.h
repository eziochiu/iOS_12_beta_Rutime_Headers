/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppsCheckRestriction : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *launchId;

+ (id)checkRestriction;
+ (id)checkRestrictionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)launchId;
- (bool)requiresResponse;
- (void)setLaunchId:(id)arg1;

@end
