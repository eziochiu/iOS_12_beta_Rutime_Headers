/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFWebProcessPlugInPageExtensionController : NSObject {
    WKWebProcessPlugInBrowserContextController * _browserContextController;
    _WKRemoteObjectInterface * _extensionControllerInterface;
    NSMutableDictionary * _extensionToScriptWorldMap;
}

- (void).cxx_destruct;
- (void)_clearExtensionControllerInterface;
- (void)_setUpExtensionControllerInterface;
- (void)clearExtensionScriptWorlds;
- (void)dealloc;
- (void)evaluateJavaScriptForSharingExtension:(id)arg1 javaScript:(id)arg2 extraArguments:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2;
- (id)initWithBrowserContextController:(id)arg1;

@end
