/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStorePlayWhileDownloadSession : NSObject <NSCopying> {
    NSURL * _destinationURL;
    unsigned long long  _downloadToken;
    NSDictionary * _purchaseBundle;
    NSURL * _sourceURL;
}

@property (nonatomic, copy) NSURL *destinationURL;
@property (nonatomic) unsigned long long downloadToken;
@property (nonatomic, copy) NSDictionary *purchaseBundle;
@property (nonatomic, copy) NSURL *sourceURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationURL;
- (unsigned long long)downloadToken;
- (id)purchaseBundle;
- (void)setDestinationURL:(id)arg1;
- (void)setDownloadToken:(unsigned long long)arg1;
- (void)setPurchaseBundle:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;

@end
