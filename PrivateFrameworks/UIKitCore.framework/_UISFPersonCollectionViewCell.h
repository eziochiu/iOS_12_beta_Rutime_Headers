/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISFPersonCollectionViewCell : UICollectionViewCell {
    double  _activitySheetWidth;
    long long  _cellState;
    NSLayoutConstraint * _cellWidthConstraint;
    NSLayoutConstraint * _chickletToTitleSpacingConstraint;
    _UICircleProgressView * _circleProgressView;
    bool  _darkStyleOnLegacyApp;
    NSObject<_UISFPersonCollectionViewCellDelegate> * _delegate;
    UIColor * _fadedSecondLabelColor;
    _UISFPersonImageView * _imageView;
    UILabel * _labelForPositioning;
    NSArray * _largeTextConstraints;
    NSLayoutConstraint * _largeTextNameCenterYConstraint;
    NSLayoutConstraint * _nameFirstBaselineConstraint;
    UILabel * _nameLabel;
    NSProgress * _progress;
    NSArray * _progressKeyPaths;
    id  _progressToken;
    NSArray * _regularConstraints;
    UILabel * _secondLabel;
    NSLayoutConstraint * _secondLabelFBConstraint;
    NSArray * _secondLabelVisibleConstraintsArray;
    NSString * _sessionID;
    bool  _stateBeingRestored;
}

@property (nonatomic) double activitySheetWidth;
@property (nonatomic) long long cellState;
@property (nonatomic, retain) NSLayoutConstraint *cellWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *chickletToTitleSpacingConstraint;
@property (nonatomic, retain) _UICircleProgressView *circleProgressView;
@property (nonatomic) bool darkStyleOnLegacyApp;
@property (nonatomic) NSObject<_UISFPersonCollectionViewCellDelegate> *delegate;
@property (nonatomic, retain) UIColor *fadedSecondLabelColor;
@property (nonatomic, retain) _UISFPersonImageView *imageView;
@property (nonatomic, retain) UILabel *labelForPositioning;
@property (nonatomic, retain) NSArray *largeTextConstraints;
@property (nonatomic, retain) NSLayoutConstraint *largeTextNameCenterYConstraint;
@property (nonatomic, retain) NSLayoutConstraint *nameFirstBaselineConstraint;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) NSArray *progressKeyPaths;
@property (nonatomic, retain) id progressToken;
@property (nonatomic, retain) NSArray *regularConstraints;
@property (nonatomic, retain) UILabel *secondLabel;
@property (nonatomic, retain) NSLayoutConstraint *secondLabelFBConstraint;
@property (nonatomic, retain) NSArray *secondLabelVisibleConstraintsArray;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) bool stateBeingRestored;

+ (struct CGSize { double x1; double x2; })_cachedPreferredItemSizeForString:(id)arg1 viewWidth:(double)arg2 sizeCategory:(id)arg3;
+ (struct CGSize { double x1; double x2; })_cachedPreferredItemSizeForViewWidth:(double)arg1 sizeCategory:(id)arg2;

- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (double)activitySheetWidth;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (struct CGSize { double x1; double x2; })calculatedContentSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2;
- (long long)cellState;
- (id)cellWidthConstraint;
- (id)chickletToTitleSpacingConstraint;
- (id)circleProgressView;
- (bool)darkStyleOnLegacyApp;
- (void)deactivateHaptics;
- (void)dealloc;
- (id)delegate;
- (id)fadedSecondLabelColor;
- (void)fireHapticsForState:(long long)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelForPositioning;
- (id)largeTextConstraints;
- (id)largeTextNameCenterYConstraint;
- (void)layoutSubviews;
- (id)nameFirstBaselineConstraint;
- (id)nameLabel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareForReuse;
- (void)prepareHaptics;
- (void)prepareHapticsPreWarm:(bool)arg1;
- (id)progress;
- (id)progressKeyPaths;
- (id)progressToken;
- (id)regularConstraints;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (id)secondLabel;
- (id)secondLabelFBConstraint;
- (id)secondLabelVisibleConstraintsArray;
- (id)sessionID;
- (void)setActivitySheetWidth:(double)arg1;
- (void)setCellState:(long long)arg1;
- (void)setCellState:(long long)arg1 animated:(bool)arg2 silent:(bool)arg3;
- (void)setCellWidthConstraint:(id)arg1;
- (void)setChickletToTitleSpacingConstraint:(id)arg1;
- (void)setCircleProgressView:(id)arg1;
- (void)setDarkStyleOnLegacyApp:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFadedSecondLabelColor:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabelForPositioning:(id)arg1;
- (void)setLargeTextConstraints:(id)arg1;
- (void)setLargeTextNameCenterYConstraint:(id)arg1;
- (void)setNameFirstBaselineConstraint:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressKeyPaths:(id)arg1;
- (void)setProgressToken:(id)arg1;
- (void)setRegularConstraints:(id)arg1;
- (void)setSecondLabel:(id)arg1;
- (void)setSecondLabelFBConstraint:(id)arg1;
- (void)setSecondLabelText:(id)arg1 withTextColor:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setSecondLabelVisibleConstraintsArray:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStateBeingRestored:(bool)arg1;
- (bool)stateBeingRestored;
- (void)traitCollectionDidChange:(id)arg1;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)updatePersonIconView;
- (void)userDidCancel;
- (void)userDidSelect;

@end
