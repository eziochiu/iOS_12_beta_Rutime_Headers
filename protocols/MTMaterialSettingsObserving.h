/* made by EzioChiu.
 */

@protocol MTMaterialSettingsObserving <NSObject>

@required

- (void)settings:(id <MTMaterialSettings>)arg1 changedValueForKey:(NSString *)arg2;

@end
