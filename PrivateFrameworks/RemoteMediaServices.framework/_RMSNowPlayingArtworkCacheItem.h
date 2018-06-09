/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {
    NSData * _artworkData;
    NSString * _artworkIdentifier;
    bool  _keepAlive;
}

@property (nonatomic, retain) NSData *artworkData;
@property (nonatomic, retain) NSString *artworkIdentifier;

- (void).cxx_destruct;
- (id)artworkData;
- (id)artworkIdentifier;
- (bool)beginContentAccess;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (bool)isContentDiscarded;
- (void)setArtworkData:(id)arg1;
- (void)setArtworkIdentifier:(id)arg1;

@end
