/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMNSXPCConnectionCache : NSObject {
    NSMutableDictionary * _connectionsByServiceName;
    NSObject<OS_dispatch_queue> * _modsSerialQueue;
}

@property (nonatomic, retain) NSMutableDictionary *connectionsByServiceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *modsSerialQueue;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)connectionsByServiceName;
- (void)dealloc;
- (id)init;
- (id)modsSerialQueue;
- (id)resumeConnectionWithConfiguration:(id)arg1;
- (void)setConnectionsByServiceName:(id)arg1;
- (void)setModsSerialQueue:(id)arg1;

@end
