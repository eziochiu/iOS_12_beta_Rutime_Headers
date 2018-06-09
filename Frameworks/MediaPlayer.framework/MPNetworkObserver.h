/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _isMusicCellularDownloadingAllowed;
    int  _musicCellularNetworkingAllowedNotifyToken;
    long long  _networkUsageCount;
    bool  _videosAllowsCellularStreaming;
    int  _videosPreferencesChangedToken;
}

@property (nonatomic, readonly) bool isMusicCellularDownloadingAllowed;
@property (nonatomic, readonly) bool isMusicCellularStreamingAllowed;
@property (nonatomic, readonly) bool isStoreCellularNetworkingAllowed;
@property (nonatomic, readonly) bool isUsingNetwork;
@property (getter=isVideoCellularStreamingAllowed, nonatomic) bool videoCellularStreamingAllowed;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (id)_init;
- (void)beginUsingNetwork;
- (void)dealloc;
- (void)endUsingNetwork;
- (id)init;
- (bool)isMusicCellularDownloadingAllowed;
- (bool)isMusicCellularDownloadsAllowed;
- (bool)isMusicCellularStreamingAllowed;
- (bool)isStoreCellularNetworkingAllowed;
- (bool)isUsingNetwork;
- (bool)isVideoCellularStreamingAllowed;
- (void)setVideoCellularStreamingAllowed:(bool)arg1;

@end
