/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {
    unsigned int  _actingAsNavBar;
    unsigned int  _barHasController;
    long long  _barPosition;
    unsigned int  _barStyle;
    UIColor * _barTintColor;
    unsigned int  _barTranslucence;
    NSMutableDictionary * _customBackgroundImages;
    NSMutableDictionary * _generatedBackgroundImages;
    unsigned long long  _searchBarStyle;
    unsigned int  _usesContiguousBarBackground;
    unsigned int  _usesEmbeddedAppearance;
}

@property (nonatomic, readonly) UIImage *backgroundImage;
@property (nonatomic, readonly) UIImage *backgroundImagePrompt;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long searchBarStyle;
@property (readonly) Class superclass;
@property (getter=isTranslucent, nonatomic) bool translucent;
@property (nonatomic) bool usesContiguousBarBackground;
@property (nonatomic) bool usesEmbeddedAppearance;

- (void).cxx_destruct;
- (id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (long long)_barPosition;
- (id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2;
- (bool)_hasCustomBackgroundImage;
- (void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)_setBarPosition:(long long)arg1;
- (void)_setBehavesAsIfSearchBarHasController:(bool)arg1;
- (void)_updateBackgroundImage;
- (void)_updateBackgroundImageIfPossible;
- (id)backgroundImage;
- (id)backgroundImagePrompt;
- (long long)barStyle;
- (id)barTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTranslucent;
- (unsigned long long)searchBarStyle;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSearchBarStyle:(unsigned long long)arg1;
- (void)setTranslucent:(bool)arg1;
- (void)setUsesContiguousBarBackground:(bool)arg1;
- (void)setUsesEmbeddedAppearance:(bool)arg1;
- (bool)usesContiguousBarBackground;
- (bool)usesEmbeddedAppearance;

@end