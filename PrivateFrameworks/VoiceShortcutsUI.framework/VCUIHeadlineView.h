/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIHeadlineView : UIView {
    UILabel * _supertitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *supertitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)initWithHeadline:(id)arg1 subheadline:(id)arg2 superheadline:(id)arg3 isUtterance:(bool)arg4;
- (void)setSupertitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)supertitleLabel;
- (id)titleLabel;
- (void)updateTitleWithHeadline:(id)arg1 subheadline:(id)arg2 superheadline:(id)arg3 isUtterance:(bool)arg4;

@end
