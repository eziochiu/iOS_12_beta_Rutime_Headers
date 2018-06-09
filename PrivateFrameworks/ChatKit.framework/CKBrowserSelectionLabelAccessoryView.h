/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserSelectionLabelAccessoryView : UIView {
    UIImageView * _plusDView;
    UIImageView * _plusLView;
}

@property (nonatomic, retain) UIImageView *plusDView;
@property (nonatomic, retain) UIImageView *plusLView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLabelAccessoryType:(unsigned long long)arg1;
- (id)plusDView;
- (id)plusLView;
- (void)setPlusDView:(id)arg1;
- (void)setPlusLView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
