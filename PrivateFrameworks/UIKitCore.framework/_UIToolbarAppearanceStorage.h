/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage {
    UIImage * _backgroundImage;
    bool  _hidesShadow;
    UIImage * _miniBackgroundImage;
    UIImage * _miniTopBackgroundImage;
    UIImage * _shadowImage;
    UIImage * _topBackgroundImage;
    UIImage * _topShadowImage;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) bool hidesShadow;
@property (nonatomic, retain) UIImage *miniBackgroundImage;
@property (nonatomic, retain) UIImage *miniTopBackgroundImage;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic, retain) UIImage *topBackgroundImage;
@property (nonatomic, retain) UIImage *topShadowImage;

+ (long long)typicalBarPosition;

- (void).cxx_destruct;
- (id)backgroundImage;
- (bool)hidesShadow;
- (id)miniBackgroundImage;
- (id)miniTopBackgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (void)setHidesShadow:(bool)arg1;
- (void)setMiniBackgroundImage:(id)arg1;
- (void)setMiniTopBackgroundImage:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTopBackgroundImage:(id)arg1;
- (void)setTopShadowImage:(id)arg1;
- (id)shadowImage;
- (id)topBackgroundImage;
- (id)topShadowImage;

@end
