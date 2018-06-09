/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFMetricsManager : NSObject {
    NSString * _processName;
    AWDServerConnection * _server;
    NSObject<OS_dispatch_queue> * _serverQueue;
    NSMutableDictionary * _ssidHashes;
}

@property (nonatomic, copy) NSString *processName;
@property (nonatomic, retain) AWDServerConnection *server;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (nonatomic, retain) NSMutableDictionary *ssidHashes;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)SHAForSSID:(id)arg1;
- (id)init;
- (void)processEvent:(id)arg1;
- (id)processName;
- (id)server;
- (id)serverQueue;
- (void)setProcessName:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setServerQueue:(id)arg1;
- (void)setSsidHashes:(id)arg1;
- (id)ssidHashes;

@end
