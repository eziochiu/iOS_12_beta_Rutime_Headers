/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSNetServicesInternal : NSObject {
    NSObject<OS_tcp_listener> * _listener;
    NSMutableArray * _monitors;
    struct __CFString { } * _scheduledMode;
    struct __CFRunLoop { } * _scheduledRunLoop;
}

@property (retain) NSMutableArray *monitors;

- (void)copyScheduledRunLoop:(struct __CFRunLoop {}**)arg1 andMode:(const struct __CFString {}**)arg2;
- (void)dealloc;
- (void)finalize;
- (id)listener;
- (id)monitors;
- (void)setListener:(id)arg1;
- (void)setMonitors:(id)arg1;
- (void)setScheduledRunLoop:(struct __CFRunLoop { }*)arg1 andMode:(struct __CFString { }*)arg2;

@end
