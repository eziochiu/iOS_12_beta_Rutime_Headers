/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLHarvester : NSObject {
    NSXPCConnection * _connection;
}

- (void)connect;
- (void)dealloc;
- (void)submitSample:(id)arg1;

@end