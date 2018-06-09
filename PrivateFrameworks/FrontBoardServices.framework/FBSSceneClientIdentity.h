/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneClientIdentity : NSObject <BSDescriptionProviding, NSCopying> {
    NSString * _bundleIdentifier;
    bool  _local;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (readonly) Class superclass;

+ (id)identityForBundleID:(id)arg1;
+ (id)localIdentity;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (void)setBundleIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
