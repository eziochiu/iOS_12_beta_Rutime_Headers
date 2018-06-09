/* made by EzioChiu.
 */

@protocol RUITopLevelPageElement <NSObject>

@required

- (void)populatePostbackDictionary:(NSDictionary *)arg1;
- (void)setObjectModel:(RUIObjectModel *)arg1;
- (UIView *)view;

@optional

- (void)setTitle:(NSString *)arg1;
- (UILabel *)titleLabel;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
