/* made by EzioChiu.
 */

@protocol NUActivityProvider <NSObject>

@required

- (NSArray *)activities;
- (NSArray *)activityItemSources;

@end
