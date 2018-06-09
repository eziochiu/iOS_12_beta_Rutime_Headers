/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEditPassesTableViewCell : UITableViewCell {
    bool  _isRTL;
    PKPass * _pass;
    bool  _showImage;
}

@property (nonatomic, retain) PKPass *pass;
@property (nonatomic) bool showImage;

+ (double)height;
+ (struct CGSize { double x1; double x2; })imageSizeNeeded;
+ (bool)needsFullPassImage;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrameWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithReuseIdentifier:(id)arg1 showImage:(bool)arg2;
- (void)layoutSubviews;
- (id)pass;
- (void)prepareForReuse;
- (void)setImage:(id)arg1 forPass:(id)arg2;
- (void)setPass:(id)arg1;
- (void)setShowImage:(bool)arg1;
- (bool)showImage;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
