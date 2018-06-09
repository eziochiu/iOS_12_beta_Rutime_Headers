/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetRestrictedAppContext : SABaseCommand <SAClientStateServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *previewRestrictedApps;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setRestrictedAppContext;
+ (id)setRestrictedAppContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)previewRestrictedApps;
- (bool)requiresResponse;
- (void)setPreviewRestrictedApps:(id)arg1;

@end
