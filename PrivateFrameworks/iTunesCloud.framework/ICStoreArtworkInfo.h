/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreArtworkInfo : NSObject <NSCopying> {
    NSURL * _artworkURL;
    NSArray * _responseArray;
    NSDictionary * _responseDictionary;
    ICStoreArtworkSizeInfo * _sizeInfo;
    NSArray * _sortedResponseArray;
    NSArray * _sortedSupportedSizesArray;
}

@property (nonatomic, readonly, copy) NSURL *artworkURL;
@property (nonatomic, readonly, copy) NSArray *responseArray;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (nonatomic, readonly) ICStoreArtworkSizeInfo *sizeInfo;
@property (nonatomic, copy) NSArray *sortedResponseArray;
@property (nonatomic, copy) NSArray *sortedSupportedSizesArray;

- (void).cxx_destruct;
- (bool)_hasOriginalSize;
- (struct CGSize { double x1; double x2; })_originalSize;
- (void)_sortResponseArray;
- (void)_sortSupportedSizesArray;
- (id)artworkURL;
- (id)artworkURLWithSize:(struct CGSize { double x1; double x2; })arg1 cropStyle:(id)arg2 format:(id)arg3;
- (id)artworkURLWithSize:(struct CGSize { double x1; double x2; })arg1 cropStyle:(id)arg2 format:(id)arg3 preferP3ColorSpace:(bool)arg4;
- (struct CGColor { }*)copyColorWithKind:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithArtworkResponseArray:(id)arg1;
- (id)initWithArtworkResponseDictionary:(id)arg1;
- (id)initWithArtworkResponseValue:(id)arg1;
- (id)initWithArtworkURL:(id)arg1;
- (id)responseArray;
- (id)responseDictionary;
- (void)setSortedResponseArray:(id)arg1;
- (void)setSortedSupportedSizesArray:(id)arg1;
- (id)sizeInfo;
- (id)sortedResponseArray;
- (id)sortedSupportedSizesArray;

@end
