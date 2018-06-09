/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyFlow : OBFlow {
    NSBundle * _bundle;
    NSString * _buttonCaption;
    struct UIImage { Class x1; } * _buttonIcon;
    bool  _buttonIconLoaded;
    NSString * _buttonTitle;
    NSString * _splashContentName;
    NSDictionary * _splashPlist;
    NSString * _splashShortTitle;
    NSString * _splashTitle;
}

@property (nonatomic, readonly) UIImage *buttonIcon;
@property (nonatomic, readonly) unsigned long long contentVersion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedButtonCaption;
@property (nonatomic, readonly) NSString *localizedButtonTitle;
@property (nonatomic, readonly) NSArray *localizedContentList;
@property (nonatomic, readonly) NSString *localizedShortTitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (getter=isPersonallyIdentifiable, nonatomic, readonly) bool personallyIdentifiable;
@property (nonatomic, readonly) bool platformSupported;
@property (nonatomic, readonly) bool showInCombinedList;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

+ (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
+ (id)flowWithBundle:(id)arg1;

- (void).cxx_destruct;
- (struct UIImage { Class x1; }*)_bundleImageNamed:(id)arg1;
- (bool)_conformsToRequirement:(id)arg1;
- (bool)_conformsToRequirements:(id)arg1;
- (id)_currentPlatform;
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
- (id)_textForConditionalItem:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
- (struct UIImage { Class x1; }*)buttonIcon;
- (unsigned long long)contentVersion;
- (id)identifier;
- (id)initWithBundle:(id)arg1;
- (id)initWithSplashContent:(id)arg1;
- (bool)isPersonallyIdentifiable;
- (id)localizedButtonCaption;
- (id)localizedButtonCaptionForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedButtonTitle;
- (id)localizedButtonTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedContentList;
- (id)localizedContentListForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedShortTitle;
- (id)localizedShortTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedTitle;
- (id)localizedTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (bool)platformSupported;
- (void)setButtonIcon:(struct UIImage { Class x1; }*)arg1;
- (bool)showInCombinedList;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)pk_privacyFlowForContext:(unsigned long long)arg1;

@end
