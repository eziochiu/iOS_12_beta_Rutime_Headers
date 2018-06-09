/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPFavoritesEntryCell : UICollectionViewCell {
    NSString * _actionType;
    UIView * _avatarContentView;
    NSLayoutConstraint * _avatarContentViewHeightLayoutConstraint;
    NSLayoutConstraint * _avatarContentViewWidthLayoutConstraint;
    CNAvatarViewController * _avatarViewController;
    UILabel * _contactNameLabel;
    NSLayoutConstraint * _contactNameLabelBaselineLayoutConstraint;
    bool  _contentViewLayoutConstraintsLoaded;
    bool  _contentViewLoaded;
    UIVisualEffectView * _primaryVisualEffectView;
    UIVisualEffectView * _secondaryVisualEffectView;
    UIImage * _transportImage;
    UIImageView * _transportImageView;
    UILabel * _transportNameLabel;
    NSLayoutConstraint * _transportNameLabelBaselineLayoutConstraint;
    NSLayoutConstraint * _transportNameLabelLeadingLayoutConstraint;
    UIView * _transportView;
}

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, readonly) UIView *avatarContentView;
@property (nonatomic, retain) NSLayoutConstraint *avatarContentViewHeightLayoutConstraint;
@property (nonatomic, readonly) double avatarContentViewHeightLayoutConstraintConstant;
@property (nonatomic, retain) NSLayoutConstraint *avatarContentViewWidthLayoutConstraint;
@property (nonatomic, readonly) double avatarContentViewWidthLayoutConstraintConstant;
@property (nonatomic, retain) CNAvatarViewController *avatarViewController;
@property (nonatomic, retain) UILabel *contactNameLabel;
@property (nonatomic, retain) NSLayoutConstraint *contactNameLabelBaselineLayoutConstraint;
@property (nonatomic, readonly) double contactNameLabelBaselineLayoutConstraintConstant;
@property (getter=isContentViewLayoutConstraintsLoaded, nonatomic) bool contentViewLayoutConstraintsLoaded;
@property (getter=isContentViewLoaded, nonatomic) bool contentViewLoaded;
@property (nonatomic, retain) UIVisualEffectView *primaryVisualEffectView;
@property (nonatomic, retain) UIVisualEffectView *secondaryVisualEffectView;
@property (nonatomic, retain) UIImage *transportImage;
@property (nonatomic, retain) UIImageView *transportImageView;
@property (nonatomic, retain) UILabel *transportNameLabel;
@property (nonatomic, retain) NSLayoutConstraint *transportNameLabelBaselineLayoutConstraint;
@property (nonatomic, readonly) double transportNameLabelBaselineLayoutConstraintConstant;
@property (nonatomic, retain) NSLayoutConstraint *transportNameLabelLeadingLayoutConstraint;
@property (nonatomic, readonly) double transportNameLabelLeadingLayoutConstraintConstant;
@property (nonatomic, retain) UIView *transportView;

+ (id)imageForActionType:(id)arg1;
+ (bool)requiresConstraintBasedLayout;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)actionType;
- (id)avatarContentView;
- (id)avatarContentViewHeightLayoutConstraint;
- (double)avatarContentViewHeightLayoutConstraintConstant;
- (id)avatarContentViewWidthLayoutConstraint;
- (double)avatarContentViewWidthLayoutConstraintConstant;
- (id)avatarViewController;
- (void)commonInit;
- (id)contactNameLabel;
- (id)contactNameLabelBaselineLayoutConstraint;
- (double)contactNameLabelBaselineLayoutConstraintConstant;
- (void)dealloc;
- (void)handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isContentViewLayoutConstraintsLoaded;
- (bool)isContentViewLoaded;
- (void)loadContentView;
- (void)loadContentViewLayoutConstraints;
- (id)primaryVisualEffectView;
- (id)secondaryVisualEffectView;
- (void)setActionType:(id)arg1;
- (void)setAvatarContentViewHeightLayoutConstraint:(id)arg1;
- (void)setAvatarContentViewWidthLayoutConstraint:(id)arg1;
- (void)setAvatarViewController:(id)arg1;
- (void)setContactNameLabel:(id)arg1;
- (void)setContactNameLabelBaselineLayoutConstraint:(id)arg1;
- (void)setContentViewLayoutConstraintsLoaded:(bool)arg1;
- (void)setContentViewLoaded:(bool)arg1;
- (void)setPrimaryVisualEffectView:(id)arg1;
- (void)setSecondaryVisualEffectView:(id)arg1;
- (void)setTransportImage:(id)arg1;
- (void)setTransportImageView:(id)arg1;
- (void)setTransportNameLabel:(id)arg1;
- (void)setTransportNameLabelBaselineLayoutConstraint:(id)arg1;
- (void)setTransportNameLabelLeadingLayoutConstraint:(id)arg1;
- (void)setTransportView:(id)arg1;
- (id)transportImage;
- (id)transportImageView;
- (id)transportNameLabel;
- (id)transportNameLabelBaselineLayoutConstraint;
- (double)transportNameLabelBaselineLayoutConstraintConstant;
- (id)transportNameLabelLeadingLayoutConstraint;
- (double)transportNameLabelLeadingLayoutConstraintConstant;
- (id)transportView;
- (void)updateConstraints;
- (void)updateConstraintsConstants;
- (void)updateFonts;

@end
