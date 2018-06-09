/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITableViewCell : UITableViewCell {
    double  _borderPaddingLeft;
    SKUIBorderView * _bottomBorderView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textLabelInsets;
    double  _titlePaddingLeft;
    SKUIBorderView * _topBorderView;
}

@property (nonatomic) double borderPaddingLeft;
@property (nonatomic, copy) UIColor *bottomBorderColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textLabelInsets;
@property (nonatomic, copy) UIColor *topBorderColor;

- (void).cxx_destruct;
- (void)_reloadBorderVisibility;
- (double)borderPaddingLeft;
- (id)bottomBorderColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBorderPaddingLeft:(double)arg1;
- (void)setBottomBorderColor:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTextLabelInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTopBorderColor:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textLabelInsets;
- (id)topBorderColor;

@end
