/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLabel : UILabel {
    long long  _titleIconImageType;
    UIImageView * _titleIconImageView;
}

@property (nonatomic) long long titleIconImageType;
@property (nonatomic, retain) UIImageView *titleIconImageView;

- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTitleIconImageType:(long long)arg1;
- (void)setTitleIconImageView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeOfAccessoryImageView;
- (struct CGSize { double x1; double x2; })sizeOfTitleLabel;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)titleIconImageType;
- (id)titleIconImageView;

@end
