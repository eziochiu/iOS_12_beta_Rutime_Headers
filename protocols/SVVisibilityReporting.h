/* made by EzioChiu.
 */

@protocol SVVisibilityReporting <NSObject>

@required

- (void)lock;
- (void)unlock;
- (void)updateVisibility;

@end
