/* made by EzioChiu.
 */

@protocol MusicJSNativeViewEventRegistry <JSExport>

@required

- (void)addNativeViewAppearanceListener:(NSString *)arg1 :(NSString *)arg2 :(JSValue *)arg3;
- (void)removeNativeViewAppearanceListener:(NSString *)arg1 :(NSString *)arg2 :(JSValue *)arg3;

@end
