/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAuxiliaryOptionsButton : UIButton <NCMaterialsAdjusting> {
    MTMaterialView * _backgroundMaterialView;
    unsigned long long  _materialOptions;
    long long  _materialRecipe;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureBackgroundViewIfNecessary;
- (double)_cornerRadius;
- (void)_setCornerRadius:(double)arg1;
- (void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;

@end
