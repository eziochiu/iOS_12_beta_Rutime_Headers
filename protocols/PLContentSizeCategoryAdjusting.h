/* made by EzioChiu.
 */

@protocol PLContentSizeCategoryAdjusting <UIContentSizeCategoryAdjusting>

@required

- (bool)adjustForContentSizeCategoryChange;

@optional

- (NSString *)preferredContentSizeCategory;
- (void)setPreferredContentSizeCategory:(NSString *)arg1;

@end
