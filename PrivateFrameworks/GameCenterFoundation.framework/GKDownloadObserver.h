/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDownloadObserver : NSObject <SSDownloadManagerObserver> {
    SSDownloadManager * _downloadManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) SSDownloadManager *downloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedObserver;

- (void)dealloc;
- (id)downloadManager;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)init;
- (bool)isDownloadingGame:(id)arg1;
- (void)setDownloadManager:(id)arg1;

@end
