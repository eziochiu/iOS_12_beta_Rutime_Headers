/* made by EzioChiu.
 */

@protocol PUTransientDataSourceChangeObserver <NSObject>

@required

- (void)transientDataSourceDidChange:(id <PUTransientDataSource>)arg1;

@end
