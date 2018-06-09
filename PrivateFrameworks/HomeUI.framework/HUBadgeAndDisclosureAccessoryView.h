/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUBadgeAndDisclosureAccessoryView : UIView {
    UIView * _badgeContainerView;
    long long  _badgeCount;
    UIImageView * _badgeImageView;
    UILabel * _badgeLabel;
    UIImageView * _disclosureImageView;
}

@property (nonatomic, retain) UIView *badgeContainerView;
@property (nonatomic) long long badgeCount;
@property (nonatomic, retain) UIImageView *badgeImageView;
@property (nonatomic, retain) UILabel *badgeLabel;
@property (nonatomic, retain) UIImageView *disclosureImageView;

+ (id)_disclosureImage;

- (void).cxx_destruct;
- (id)badgeContainerView;
- (long long)badgeCount;
- (id)badgeImageView;
- (id)badgeLabel;
- (id)disclosureImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBadgeContainerView:(id)arg1;
- (void)setBadgeCount:(long long)arg1;
- (void)setBadgeImageView:(id)arg1;
- (void)setBadgeLabel:(id)arg1;
- (void)setDisclosureImageView:(id)arg1;

@end
