/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionLocationTableViewCell : PKTableViewCell {
    UIImage * _mapPlaceholderImage;
    UIImage * _mapSnapshotImage;
    PKContinuousImageView * _mapSnapshotImageView;
    UILabel * _postalAddressLabel;
    NSString * _postalAddressString;
    NSString * _postalAddressTitle;
    struct CGSize { 
        double width; 
        double height; 
    }  _snapshotSize;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImage *mapPlaceholderImage;
@property (nonatomic, retain) UIImage *mapSnapshotImage;
@property (nonatomic, retain) PKContinuousImageView *mapSnapshotImageView;
@property (nonatomic, retain) UILabel *postalAddressLabel;
@property (nonatomic, retain) NSString *postalAddressString;
@property (nonatomic, retain) NSString *postalAddressTitle;
@property (nonatomic) struct CGSize { double x1; double x2; } snapshotSize;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_updateImageViewBoundsOrigin;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)mapPlaceholderImage;
- (id)mapSnapshotImage;
- (id)mapSnapshotImageView;
- (id)postalAddressLabel;
- (id)postalAddressString;
- (id)postalAddressTitle;
- (void)setMapPlaceholderImage:(id)arg1;
- (void)setMapSnapshotImage:(id)arg1;
- (void)setMapSnapshotImageView:(id)arg1;
- (void)setPostalAddressLabel:(id)arg1;
- (void)setPostalAddressString:(id)arg1;
- (void)setPostalAddressTitle:(id)arg1;
- (void)setSnapshotSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })snapshotSize;
- (id)titleLabel;

@end
