/* made by EzioChiu.
 */

@protocol NUDynamicTypeProviding <NSObject>

@required

- (void)addObserver:(id <NUDynamicTypeObserving>)arg1;
- (NSString *)prefferedContentSizeCategory;

@end
