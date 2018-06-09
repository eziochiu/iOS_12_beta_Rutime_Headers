/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyLinkController : UIViewController {
    bool  _allowsOpeningSafari;
    NSArray * _bundleIdentifiers;
    NSArray * _bundles;
    bool  _displayCaptionText;
    unsigned long long  _displayDeviceType;
    bool  _displayIcon;
    NSString * _displayLanguage;
    bool  _displayLargeIcon;
    bool  _presentedViewControllerShouldUseDarkMode;
}

@property bool allowsOpeningSafari;
@property (readonly) OBBundle *bundle;
@property (readonly) NSArray *bundles;
@property bool displayCaptionText;
@property unsigned long long displayDeviceType;
@property bool displayIcon;
@property (retain) NSString *displayLanguage;
@property bool displayLargeIcon;
@property (readonly) OBPrivacyFlow *flow;
@property (nonatomic) bool presentedViewControllerShouldUseDarkMode;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

+ (Class)_platformSpecificClass;
+ (id)linkWithBundleIdentifier:(id)arg1;
+ (id)linkWithBundleIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsOpeningSafari;
- (id)bundle;
- (id)bundles;
- (bool)displayCaptionText;
- (unsigned long long)displayDeviceType;
- (bool)displayIcon;
- (id)displayLanguage;
- (bool)displayLargeIcon;
- (id)flow;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithPrivacyBundle:(id)arg1;
- (void)linkPressed;
- (bool)presentedViewControllerShouldUseDarkMode;
- (void)setAllowsOpeningSafari:(bool)arg1;
- (void)setDisplayCaptionText:(bool)arg1;
- (void)setDisplayDeviceType:(unsigned long long)arg1;
- (void)setDisplayIcon:(bool)arg1;
- (void)setDisplayLanguage:(id)arg1;
- (void)setDisplayLargeIcon:(bool)arg1;
- (void)setLinkEnabled:(bool)arg1;
- (void)setPresentedViewControllerShouldUseDarkMode:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)pk_privacyLinkForContext:(unsigned long long)arg1;

- (void)pk_applyAppearance:(id)arg1;

@end
