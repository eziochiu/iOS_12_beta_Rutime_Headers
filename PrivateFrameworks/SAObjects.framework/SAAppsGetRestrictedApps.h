/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *appIds;

+ (id)getRestrictedApps;
+ (id)getRestrictedAppsWithDictionary:(id)arg1 context:(id)arg2;

- (id)appIds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAppIds:(id)arg1;

@end
