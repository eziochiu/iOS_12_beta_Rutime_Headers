/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSMediaRemoteDevice : NSObject {
    void * _device;
}

@property (nonatomic, readonly) void*device;

- (void)dealloc;
- (void*)device;
- (id)initWithTelevision:(void*)arg1;

@end
