/* made by EzioChiu.
 */

@protocol WKWebProcessPlugInFormDelegatePrivate <NSObject>

@optional

- (void)_webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didAssociateFormControls:(NSArray *)arg2;
- (void)_webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFocusTextField:(WKWebProcessPlugInNodeHandle *)arg2 inFrame:(WKWebProcessPlugInFrame *)arg3;
- (void)_webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 textDidChangeInTextField:(WKWebProcessPlugInNodeHandle *)arg2 inFrame:(WKWebProcessPlugInFrame *)arg3 initiatedByUserTyping:(bool)arg4;
- (NSObject<NSSecureCoding> *)_webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 willBeginInputSessionForElement:(WKWebProcessPlugInNodeHandle *)arg2 inFrame:(WKWebProcessPlugInFrame *)arg3;
- (NSObject<NSSecureCoding> *)_webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 willBeginInputSessionForElement:(WKWebProcessPlugInNodeHandle *)arg2 inFrame:(WKWebProcessPlugInFrame *)arg3 userIsInteracting:(bool)arg4;
- (void)_webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 willSendSubmitEventToForm:(WKWebProcessPlugInNodeHandle *)arg2 inFrame:(WKWebProcessPlugInFrame *)arg3 targetFrame:(WKWebProcessPlugInFrame *)arg4 values:(NSDictionary *)arg5;
- (NSObject<NSSecureCoding> *)_webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 willSubmitForm:(WKWebProcessPlugInNodeHandle *)arg2 toFrame:(WKWebProcessPlugInFrame *)arg3 fromFrame:(WKWebProcessPlugInFrame *)arg4 withValues:(NSDictionary *)arg5;
- (bool)_webProcessPlugInBrowserContextControllerShouldNotifyOnFormChanges:(WKWebProcessPlugInBrowserContextController *)arg1;

@end
