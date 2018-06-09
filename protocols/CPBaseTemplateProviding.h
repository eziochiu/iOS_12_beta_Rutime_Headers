/* made by EzioChiu.
 */

@protocol CPBaseTemplateProviding <NSObject>

@required

- (void)setBarButton:(NSUUID *)arg1 image:(UIImage *)arg2;
- (void)setBarButton:(NSUUID *)arg1 title:(NSString *)arg2;
- (void)setControl:(NSUUID *)arg1 enabled:(bool)arg2;
- (void)setLeadingNavigationBarButtons:(NSArray *)arg1;
- (void)setTrailingNavigationBarButtons:(NSArray *)arg1;

@end
