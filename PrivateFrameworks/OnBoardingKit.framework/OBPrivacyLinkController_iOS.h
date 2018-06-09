/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController {
    OBPrivacyLinkButton * _linkButton;
}

@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;

- (void).cxx_destruct;
- (id)iconView;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithPrivacyBundle:(id)arg1;
- (void)loadView;
- (void)setLinkEnabled:(bool)arg1;
- (id)textView;

@end
