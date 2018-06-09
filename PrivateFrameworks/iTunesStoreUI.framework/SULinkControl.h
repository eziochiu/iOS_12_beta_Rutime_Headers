/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SULinkControl : UIControl {
    UILabel * _label;
    bool  _shouldDrawUnderline;
    unsigned int  _sizeIsDirty;
    long long  _style;
}

@property (nonatomic) bool shouldDrawUnderline;

- (id)_label;
- (void)_updateLabel;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)setShouldDrawUnderline:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setText:(id)arg1;
- (bool)shouldDrawUnderline;
- (void)sizeToFit;

@end
