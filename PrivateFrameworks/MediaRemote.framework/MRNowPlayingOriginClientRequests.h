/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {
    _MRDeviceInfoMessageProtobuf * _deviceInfo;
    NSMutableArray * _nowPlayingClients;
    _MROriginProtobuf * _origin;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _transactionCallbacks;
    float  _volume;
    unsigned int  _volumeCapabilities;
}

@property (nonatomic, copy) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, readonly) _MROriginProtobuf *origin;
@property (nonatomic) float volume;
@property (nonatomic) unsigned int volumeCapabilities;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)deviceInfo;
- (id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1;
- (id)initWithOrigin:(id)arg1;
- (id)nowPlayingClientRequestsForPlayerPath:(id)arg1;
- (id)nowPlayingClients;
- (id)origin;
- (void)removeClient:(id)arg1;
- (void)restoreNowPlayingClientState;
- (void)setDeviceInfo:(id)arg1;
- (void)setTransactionCallback:(id /* block */)arg1 forName:(unsigned long long)arg2;
- (void)setVolume:(float)arg1;
- (void)setVolumeCapabilities:(unsigned int)arg1;
- (id /* block */)transactionCallbackForName:(unsigned long long)arg1;
- (float)volume;
- (unsigned int)volumeCapabilities;

@end
