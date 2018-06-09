/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacement <NSSecureCoding> {
    UIInputViewSetPlacement * _actualPlacement;
}

+ (id)placementWithPlacement:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accessoryViewWillAppear;
- (double)alpha;
- (Class)applicatorClassForKeyboard:(bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)inputViewWillAppear;
- (bool)isEqual:(id)arg1;
- (bool)isInteractive;
- (bool)isUndocked;
- (unsigned long long)notificationsForTransitionToPlacement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(bool)arg2;
- (void)setDirty;
- (bool)showsInputViews;
- (bool)showsKeyboard;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
