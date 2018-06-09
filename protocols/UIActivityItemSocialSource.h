/* made by EzioChiu.
 */

@protocol UIActivityItemSocialSource <NSObject>

@optional

- (long long)activityViewController:(UIActivityViewController *)arg1 attachmentULRTypeForActivityType:(NSString *)arg2;
- (UIImage *)activityViewController:(UIActivityViewController *)arg1 thumbnailForActivityType:(NSString *)arg2;

@end
