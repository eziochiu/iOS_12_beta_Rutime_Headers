/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLErrorView : UIView {
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)init;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
