/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings

@property (nonatomic, copy) NSSet *occlusions;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (nonatomic) double preferredLevel;
@property (nonatomic, copy) NSString *preferredSceneHostIdentifier;

+ (bool)_isMutable;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)otherSettings;
- (void)setOcclusions:(id)arg1;
- (void)setPreferredInterfaceOrientation:(long long)arg1;
- (void)setPreferredLevel:(double)arg1;
- (void)setPreferredSceneHostIdentifier:(id)arg1;

@end
