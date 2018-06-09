/* made by EzioChiu.
 */

@protocol SXQuickLookRenderer <NSObject>

@required

- (void)render:(SXQuickLookViewController *)arg1 attributes:(SXQuickLookLayoutAttributes *)arg2;
- (void)renderErrorMessage:(NSString *)arg1 view:(UILabel *)arg2;
- (void)renderThumbnailImage:(UIImage *)arg1 view:(UIImageView *)arg2;

@end
