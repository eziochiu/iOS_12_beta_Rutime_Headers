/* made by EzioChiu.
 */

@protocol FCCoreConfigurationObserving <NSObject>

@optional

- (void)configurationManager:(id <FCCoreConfigurationManager>)arg1 configurationDidChange:(id <FCCoreConfiguration>)arg2;

@end
