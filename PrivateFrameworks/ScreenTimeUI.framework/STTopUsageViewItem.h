/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STTopUsageViewItem : NSObject {
    UILabel * _descriptionLabel;
    UILayoutGuide * _leadingLayoutGuide;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) UILayoutGuide *leadingLayoutGuide;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)descriptionLabel;
- (id)init;
- (id)leadingLayoutGuide;
- (void)setDescriptionLabel:(id)arg1;
- (void)setLeadingLayoutGuide:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
