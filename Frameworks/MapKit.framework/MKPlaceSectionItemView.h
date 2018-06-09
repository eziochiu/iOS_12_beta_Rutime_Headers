/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceSectionItemView : MKViewWithHairline {
    bool  _fullWidthHairline;
}

@property (getter=isHairlineFullWidth, nonatomic) bool fullWidthHairline;

- (void)_updateHairlineInsets;
- (void)didMoveToWindow;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHairlineFullWidth;
- (void)layoutMarginsDidChange;
- (void)setFullWidthHairline:(bool)arg1;

@end
