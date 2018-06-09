/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacySplashController : OBSplashController <UIScrollViewDelegate> {
    bool  _allowsOpeningSafari;
    unsigned long long  _displayDeviceType;
    NSString * _displayLanguage;
    OBPrivacyFlow * _flow;
    bool  _forceLargeMargins;
    double  _incomingNavigationBarOpacity;
    bool  _isCombined;
    UILabel * _linkToPrivacyGateway;
    UIButton * _linkToPrivacyGatewayButton;
    UILabel * _privacyGatewayDescription;
    bool  _showLinkToPrivacyGateway;
    bool  _showsLinkToUnifiedAbout;
    bool  _suppressPerPageAnalyticsLogging;
    UIButton * _unifiedAboutButton;
    bool  _useModalStyle;
    bool  _useSmallTitle;
}

@property bool allowsOpeningSafari;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long displayDeviceType;
@property (retain) NSString *displayLanguage;
@property bool forceLargeMargins;
@property (readonly) unsigned long long hash;
@property (nonatomic) double incomingNavigationBarOpacity;
@property (nonatomic) bool isCombined;
@property (retain) UILabel *linkToPrivacyGateway;
@property (retain) UIButton *linkToPrivacyGatewayButton;
@property (retain) UILabel *privacyGatewayDescription;
@property (nonatomic) bool showLinkToPrivacyGateway;
@property bool showsLinkToUnifiedAbout;
@property (readonly) Class superclass;
@property bool suppressPerPageAnalyticsLogging;
@property (retain) UIButton *unifiedAboutButton;
@property bool useModalStyle;
@property bool useSmallTitle;

+ (id)splashPageWithBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_defaultButtonTitle;
- (void)_initializeFromBundle;
- (bool)allowsOpeningSafari;
- (unsigned long long)displayDeviceType;
- (id)displayLanguage;
- (bool)forceLargeMargins;
- (double)incomingNavigationBarOpacity;
- (id)initWithFlow:(id)arg1;
- (id)initWithPrivacyIdentifier:(id)arg1;
- (bool)isCombined;
- (id)linkToPrivacyGateway;
- (id)linkToPrivacyGatewayButton;
- (id)privacyGatewayDescription;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAllowsOpeningSafari:(bool)arg1;
- (void)setDarkMode:(bool)arg1;
- (void)setDismissHandlerForDefaultButton:(id /* block */)arg1;
- (void)setDisplayDeviceType:(unsigned long long)arg1;
- (void)setDisplayLanguage:(id)arg1;
- (void)setForceLargeMargins:(bool)arg1;
- (void)setIncomingNavigationBarOpacity:(double)arg1;
- (void)setIsCombined:(bool)arg1;
- (void)setLinkToPrivacyGateway:(id)arg1;
- (void)setLinkToPrivacyGatewayButton:(id)arg1;
- (void)setPrivacyGatewayDescription:(id)arg1;
- (void)setShowLinkToPrivacyGateway:(bool)arg1;
- (void)setShowsLinkToUnifiedAbout:(bool)arg1;
- (void)setSuppressPerPageAnalyticsLogging:(bool)arg1;
- (void)setUnifiedAboutButton:(id)arg1;
- (void)setUseModalStyle:(bool)arg1;
- (void)setUseSmallTitle:(bool)arg1;
- (bool)shouldUseTiledTextViews;
- (bool)showLinkToPrivacyGateway;
- (void)showPrivacyGateway:(id)arg1;
- (void)showUnifiedAbout:(id)arg1;
- (bool)showsLinkToUnifiedAbout;
- (bool)suppressPerPageAnalyticsLogging;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unifiedAboutButton;
- (void)updateFontForPrivacyGateway;
- (void)updateFontForUnifiedAboutButton;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (bool)useModalStyle;
- (bool)useSmallTitle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
