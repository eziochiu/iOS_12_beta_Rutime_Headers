/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKStackedTextItemGroupCell : PKTableViewCell {
    bool  _animated;
    PKStackedTextItemGroupView * _groupView;
    long long  _style;
}

@property (nonatomic, retain) PKStackedTextItemGroup *content;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (id)content;
- (id)initWithGroupViewStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setContent:(id)arg1;
- (void)setContent:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
