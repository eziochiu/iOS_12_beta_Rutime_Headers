/* made by EzioChiu.
 */

@protocol EKDefaultPropertiesLoading <NSObject>

@required

- (bool)shouldLoadDefaultProperties;

@optional

- (NSArray *)defaultPropertiesToLoad;

@end
