/* made by EzioChiu.
 */

@protocol WLKUISharingInterface <JSExport>

@required

- (void)dismiss;
- (void)displaySharingForItem:(NSString *)arg1 :(NSString *)arg2 :(NSString *)arg3 :(NSString *)arg4 :(IKDOMElement *)arg5 :(JSValue *)arg6;
- (void)showSharingForItem:(NSString *)arg1 :(IKDOMElement *)arg2 :(JSValue *)arg3;

@end
