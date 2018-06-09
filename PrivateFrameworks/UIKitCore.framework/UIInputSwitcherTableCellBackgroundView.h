/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputSwitcherTableCellBackgroundView : UIView {
    bool  _drawsBorder;
    bool  _drawsOpaque;
    int  _roundedCorners;
    bool  _selected;
    bool  _usesDarkTheme;
}

@property (nonatomic) bool drawsBorder;
@property (nonatomic) bool drawsOpaque;
@property (nonatomic) int roundedCorners;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool usesDarkTheme;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsBorder;
- (bool)drawsOpaque;
- (bool)isSelected;
- (int)roundedCorners;
- (void)setDrawsBorder:(bool)arg1;
- (void)setDrawsOpaque:(bool)arg1;
- (void)setRoundedCorners:(int)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUsesDarkTheme:(bool)arg1;
- (bool)usesDarkTheme;

@end
