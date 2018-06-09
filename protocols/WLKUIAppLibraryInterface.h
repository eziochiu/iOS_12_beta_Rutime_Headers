/* made by EzioChiu.
 */

@protocol WLKUIAppLibraryInterface <JSExport>

@required

- (void)installAppForChannel:(NSString *)arg1 :(JSValue *)arg2 :(JSValue *)arg3 :(JSValue *)arg4;
- (NSArray *)installed;
- (bool)isAppInstalled:(NSString *)arg1;
- (bool)isShowingInstaller;
- (void)presentPurchase:(NSDictionary *)arg1;
- (NSArray *)subscribed;
- (NSArray *)test;

@end