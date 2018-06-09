/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDisplayEdgeInfoProvider : NSObject <_UIDisplayEdgeInfoProviding> {
    UISApplicationSupportDisplayEdgeInfo * _displayEdgeInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double homeAffordanceOverlayAllowance;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeLeft;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeRight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortrait;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortraitUpsideDown;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double systemMinimumMargin;

+ (id)nullDisplayEdgeInfoProvider;

- (void).cxx_destruct;
- (id)displayEdgeInfo;
- (double)homeAffordanceOverlayAllowance;
- (id)initWithDisplayEdgeInfo:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeLeft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeRight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortraitUpsideDown;
- (double)systemMinimumMargin;

@end
