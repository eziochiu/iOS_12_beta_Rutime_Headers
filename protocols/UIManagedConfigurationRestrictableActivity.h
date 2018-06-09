/* made by EzioChiu.
 */

@protocol UIManagedConfigurationRestrictableActivity

@required

- (void)setSourceApplicationBundleID:(NSString *)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (NSString *)sourceApplicationBundleID;
- (bool)sourceIsManaged;

@end
