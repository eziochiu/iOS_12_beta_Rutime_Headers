/* made by EzioChiu.
 */

@protocol SXScrollReporting <NSObject>

@required

- (void)didScroll;
- (void)didStopScrolling;
- (void)willStartScrolling;

@end
