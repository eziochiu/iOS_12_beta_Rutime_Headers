/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMToolServer : NSObject {
    RMToolServerDelegate * _delegate;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) RMToolServerDelegate *delegate;
@property (nonatomic, retain) NSXPCListener *listener;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithTarget:(id)arg1;
- (id)listener;
- (void)setDelegate:(id)arg1;
- (void)setListener:(id)arg1;

@end
