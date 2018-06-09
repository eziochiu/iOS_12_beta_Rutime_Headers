/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (getter=isBackgrounded, nonatomic) bool backgrounded;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) double level;
@property (nonatomic, copy) NSArray *occlusions;

+ (bool)_isMutable;

- (void)_setDisplayConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ignoreOcclusionReasons;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)otherSettings;
- (void)setBackgrounded:(bool)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setLevel:(double)arg1;
- (void)setOcclusions:(id)arg1;
- (id)transientLocalSettings;

@end
