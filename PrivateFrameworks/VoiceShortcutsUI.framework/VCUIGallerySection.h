/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIGallerySection : NSObject {
    NSArray * _actionDonations;
    NSString * _applicationBundleIdentifier;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *actionDonations;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)actionDonations;
- (id)applicationBundleIdentifier;
- (id)initWithTitle:(id)arg1 applicationBundleIdentifier:(id)arg2 actionDonations:(id)arg3;
- (void)setActionDonations:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
