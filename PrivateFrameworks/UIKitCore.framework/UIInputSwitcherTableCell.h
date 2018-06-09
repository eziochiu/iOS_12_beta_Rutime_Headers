/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputSwitcherTableCell : UITableViewCell {
    bool  _first;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _interactiveInsets;
    bool  _last;
    bool  _usesDarkTheme;
    bool  _usesStraightLeftEdge;
}

@property (nonatomic, retain) UIInputSwitcherTableCellBackgroundView *backgroundView;
@property (getter=isFirst, nonatomic) bool first;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } interactiveInsets;
@property (getter=isLast, nonatomic) bool last;
@property (nonatomic) bool usesDarkTheme;
@property (nonatomic) bool usesStraightLeftEdge;

+ (id)reuseIdentifier;

- (void)_updateRoundedCorners;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })interactiveInsets;
- (bool)isFirst;
- (bool)isLast;
- (void)layoutSubviews;
- (void)setFirst:(bool)arg1;
- (void)setInteractiveInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLast:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setUsesDarkTheme:(bool)arg1;
- (void)setUsesStraightLeftEdge:(bool)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)usesDarkTheme;
- (bool)usesStraightLeftEdge;

@end
