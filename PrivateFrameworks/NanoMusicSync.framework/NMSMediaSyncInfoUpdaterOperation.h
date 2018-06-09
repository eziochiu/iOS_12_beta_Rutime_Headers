/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaSyncInfoUpdaterOperation : MPAsyncOperation {
    NSDictionary * _syncInfo;
}

@property (nonatomic, readonly) NSDictionary *syncInfo;

+ (id)sharedLibraryRequestQueue;

- (void).cxx_destruct;
- (void)execute;
- (id)syncInfo;

@end
