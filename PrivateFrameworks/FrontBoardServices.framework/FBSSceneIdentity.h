/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneIdentity : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSString * _identifier;
    NSString * _workspaceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *workspaceIdentifier;

+ (id)identity;
+ (id)identityForIdentifier:(id)arg1;
+ (id)identityForIdentifier:(id)arg1 workspaceIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setWorkspaceIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)workspaceIdentifier;

@end
