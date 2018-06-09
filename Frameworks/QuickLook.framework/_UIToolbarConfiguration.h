/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface _UIToolbarConfiguration : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    UIImage * _backgroundImage;
    long long  _barStyle;
    UIColor * _barTintColor;
    UIImage * _shadowImage;
    bool  _translucent;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic, retain) UIImage *shadowImage;
@property (getter=isTranslucent, nonatomic) bool translucent;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)backgroundImage;
- (long long)barStyle;
- (id)barTintColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isTranslucent;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTranslucent:(bool)arg1;
- (id)shadowImage;

@end
