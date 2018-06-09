/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCAppearance : NSObject <NSCopying, NSSecureCoding> {
    bool  _alwaysEnableScrollInSourceView;
    unsigned long long  _browserUserInterfaceStyle;
    NSString * _collectionCreateButtonTitle;
    double  _compactHorizontalTableStackSpacing;
    double  _createButtonAspectRatio;
    bool  _forceClearBackground;
    double  _fullHorizontalTableStackSpacing;
    bool  _isInfoInPopoverMode;
    UIColor * _largeTitleColor;
    double  _regularHorizontalTableStackSpacing;
    bool  _showsCreateButton;
}

@property (readonly) long long activityIndicatorViewStyle;
@property bool alwaysEnableScrollInSourceView;
@property (readonly) UIColor *backgroundColor;
@property (readonly) NSArray *backgroundGradientColors;
@property (nonatomic) unsigned long long browserUserInterfaceStyle;
@property (retain) NSString *collectionCreateButtonTitle;
@property double compactHorizontalTableStackSpacing;
@property (readonly) UIColor *createBackgroundColor;
@property double createButtonAspectRatio;
@property (readonly) UIColor *dimmingViewColor;
@property bool forceClearBackground;
@property double fullHorizontalTableStackSpacing;
@property bool isInfoInPopoverMode;
@property (nonatomic, retain) UIColor *largeTitleColor;
@property (readonly) long long preferredBarStyle;
@property (readonly) long long preferredStatusBarStyle;
@property (readonly) UIColor *primaryTextColor;
@property (readonly) UIColor *progressViewInactiveStrokeColor;
@property double regularHorizontalTableStackSpacing;
@property (readonly) UIColor *searchBarTextColor;
@property (readonly) bool searchBarWantsDarkBackdropStyleOnly;
@property (readonly) UIColor *secondaryTextColor;
@property (readonly) UIColor *selectedBackgroundColor;
@property (readonly) UIColor *separatorColor;
@property bool showsCreateButton;

+ (id)documentsPickerAppearance;
+ (id)recentsPopoverAppearance;
+ (id)recentsWidgetAppearance;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)activityIndicatorViewStyle;
- (bool)alwaysEnableScrollInSourceView;
- (void)applyAppearanceOnNavigationBar:(id)arg1;
- (void)applyAppearanceOnPalette:(id)arg1;
- (void)applyAppearanceOnTabBar:(id)arg1;
- (void)applyAppearanceOnToolbar:(id)arg1;
- (id)backgroundColor;
- (id)backgroundGradientColors;
- (unsigned long long)browserUserInterfaceStyle;
- (id)collectionCreateButtonTitle;
- (double)compactHorizontalTableStackSpacing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createBackgroundColor;
- (double)createButtonAspectRatio;
- (id)darkModeDefaultTintColor;
- (id)dimmingViewColor;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceClearBackground;
- (double)fullHorizontalTableStackSpacing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInfoInPopoverMode;
- (id)largeTitleColor;
- (long long)preferredBarStyle;
- (long long)preferredStatusBarStyle;
- (id)primaryTextColor;
- (id)progressViewInactiveStrokeColor;
- (double)regularHorizontalTableStackSpacing;
- (id)searchBarTextColor;
- (bool)searchBarWantsDarkBackdropStyleOnly;
- (id)secondaryTextColor;
- (id)selectedBackgroundColor;
- (id)separatorColor;
- (void)setAlwaysEnableScrollInSourceView:(bool)arg1;
- (void)setBrowserUserInterfaceStyle:(unsigned long long)arg1;
- (void)setCollectionCreateButtonTitle:(id)arg1;
- (void)setCompactHorizontalTableStackSpacing:(double)arg1;
- (void)setCreateButtonAspectRatio:(double)arg1;
- (void)setForceClearBackground:(bool)arg1;
- (void)setFullHorizontalTableStackSpacing:(double)arg1;
- (void)setIsInfoInPopoverMode:(bool)arg1;
- (void)setLargeTitleColor:(id)arg1;
- (void)setRegularHorizontalTableStackSpacing:(double)arg1;
- (void)setShowsCreateButton:(bool)arg1;
- (bool)showsCreateButton;

@end
