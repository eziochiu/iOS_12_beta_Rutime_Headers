/* made by EzioChiu
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface NCWidgetController : NSObject <_NCWidgetController_Service_IPC> {
    NSXPCConnection * _connection;
    NCWidgetController * _strongReference;
}

@property (getter=_connection, setter=_setConnection:, nonatomic, retain) NSXPCConnection *connection;
@property (getter=_strongReference, setter=_setStrongReference:, nonatomic, retain) NCWidgetController *strongReference;

+ (id)widgetContentUnavailableViewWithButtonTitle:(id)arg1 buttonAction:(id /* block */)arg2;
+ (id)widgetContentUnavailableViewWithTitle:(id)arg1;
+ (id)widgetController;

- (void).cxx_destruct;
- (void)__didReceiveHasContentRequest;
- (id)_connection;
- (id)_connectionForRequest;
- (void)_invalidateConnection;
- (void)_setConnection:(id)arg1;
- (void)_setStrongReference:(id)arg1;
- (id)_strongReference;
- (void)dealloc;
- (void)requestRefreshAfterDate:(id)arg1 forWidgetWithBundleIdentifier:(id)arg2;
- (void)setHasContent:(bool)arg1 forWidgetWithBundleIdentifier:(id)arg2;

@end
