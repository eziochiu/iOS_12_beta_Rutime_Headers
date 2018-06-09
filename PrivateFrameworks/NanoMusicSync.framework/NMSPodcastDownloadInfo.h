/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSPodcastDownloadInfo : NSObject {
    unsigned long long  _downloadOrder;
    NSString * _feedURL;
}

@property (nonatomic, readonly) unsigned long long downloadOrder;
@property (nonatomic, readonly) NSString *feedURL;

- (void).cxx_destruct;
- (unsigned long long)downloadOrder;
- (id)feedURL;
- (id)initWithFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)predicatesForFeedURL;

@end
