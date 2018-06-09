/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStorePlayWhileDownloadProperties : NSObject {
    unsigned long long  _downloadToken;
    NSString * _localFilePath;
    NSArray * _sinfs;
    NSURL * _sourceURL;
}

@property (nonatomic) unsigned long long downloadToken;
@property (nonatomic, copy) NSString *localFilePath;
@property (nonatomic, copy) NSArray *sinfs;
@property (nonatomic, copy) NSURL *sourceURL;

- (void).cxx_destruct;
- (unsigned long long)downloadToken;
- (id)localFilePath;
- (void)setDownloadToken:(unsigned long long)arg1;
- (void)setLocalFilePath:(id)arg1;
- (void)setSinfs:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sinfs;
- (id)sourceURL;

@end
