/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRTrackAssetAvailabilityManager : NSObject {
    NSCache * _assetAvailabilityCache;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (long long)availabilityForTrackPID:(id)arg1;
- (void)dealloc;
- (id)init;

@end
