/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOfficialAppView : MKPlaceSectionRowView {
    _MKUILabel * _appNameLabel;
    NSMutableArray * _constraintArray;
    <MKOfficialAppViewDelegate> * _delegate;
    _MKUILabel * _descriptionLabel;
    bool  _isAppInstalled;
    UIView * _labelContainerView;
    bool  _layoutShouldStack;
    UIButton * _punchOutButton;
    UIImageView * _storeAppImageView;
    SSLookupItem * _storeItem;
    UIImage * _storeItemImage;
}

@property (nonatomic) <MKOfficialAppViewDelegate> *delegate;
@property (nonatomic) bool isAppInstalled;
@property (nonatomic, retain) SSLookupItem *storeItem;
@property (nonatomic, retain) UIImage *storeItemImage;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_contentSizeDidChangeNotificationHandler;
- (void)_createConstraints;
- (void)_punchOutButtonSelected:(id)arg1;
- (void)_updateFonts:(id)arg1;
- (void)_updateLabelText;
- (void)_updateShouldLayoutStack;
- (id)delegate;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAppInstalled;
- (void)setDelegate:(id)arg1;
- (void)setIsAppInstalled:(bool)arg1;
- (void)setStoreItem:(id)arg1;
- (void)setStoreItemImage:(id)arg1;
- (id)storeItem;
- (id)storeItemImage;
- (void)updateButtonText;

@end
