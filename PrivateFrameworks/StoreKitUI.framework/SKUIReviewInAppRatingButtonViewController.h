/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewInAppRatingButtonViewController : UIViewController {
    bool  _enabled;
    unsigned long long  _style;
    UILabel * _titleLabel;
    NSString * _titleString;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleString;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 style:(unsigned long long)arg2;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleString:(id)arg1;
- (unsigned long long)style;
- (id)titleLabel;
- (id)titleString;
- (void)viewDidLoad;

@end
