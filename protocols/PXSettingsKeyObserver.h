/* made by EzioChiu.
 */

@protocol PXSettingsKeyObserver <NSObject>

@required

- (void)settings:(PXSettings *)arg1 changedValueForKey:(NSString *)arg2;

@end
