/* made by EzioChiu.
 */

@protocol CPBarButtonProviding <NSObject>

@required

- (NSArray *)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(NSArray *)arg1;
- (void)setTrailingNavigationBarButtons:(NSArray *)arg1;
- (NSArray *)trailingNavigationBarButtons;

@end
