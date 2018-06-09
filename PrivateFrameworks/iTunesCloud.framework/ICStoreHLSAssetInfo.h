/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreHLSAssetInfo : NSObject <NSCopying> {
    bool  _isiTunesStoreStream;
    NSDictionary * _itemResponseDictionary;
    NSURL * _keyCertificateURL;
    NSURL * _keyServerURL;
    NSURL * _playlistURL;
}

@property (nonatomic, readonly, copy) NSURL *alternateKeyCertificateURL;
@property (nonatomic, readonly, copy) NSURL *alternateKeyServerURL;
@property (nonatomic, readonly, copy) NSURL *alternatePlaylistURL;
@property (getter=isiTunesStoreStream, nonatomic) bool iTunesStoreStream;
@property (nonatomic, copy) NSURL *keyCertificateURL;
@property (nonatomic, copy) NSURL *keyServerURL;
@property (nonatomic, copy) NSURL *playlistURL;

- (void).cxx_destruct;
- (id)alternateKeyCertificateURL;
- (id)alternateKeyServerURL;
- (id)alternatePlaylistURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithItemResponseDictionary:(id)arg1;
- (bool)isiTunesStoreStream;
- (id)keyCertificateURL;
- (id)keyServerURL;
- (id)playlistURL;
- (void)setITunesStoreStream:(bool)arg1;
- (void)setKeyCertificateURL:(id)arg1;
- (void)setKeyServerURL:(id)arg1;
- (void)setPlaylistURL:(id)arg1;

@end
