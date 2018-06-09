/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBannerCollectionViewCell : UICollectionViewCell {
    UIImageView * _bannerView;
}

@property (nonatomic, retain) UIImageView *bannerView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)bannerView;
- (void)configureWithEntity:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBannerImage:(id)arg1;
- (void)setBannerView:(id)arg1;

@end
