/* made by EzioChiu.
 */

@protocol SearchUIAutoLayoutItem <NSObject>

@required

- (UIView *)containingView;
- (bool)isContainedByItem:(id <SearchUIAutoLayoutItem>)arg1;
- (UIView *)view;

@end
