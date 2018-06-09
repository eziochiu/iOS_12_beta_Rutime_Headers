/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFileSystemImportAsset : NSObject {
    NSDate * _dateCreated;
    struct NSObject { Class x1; } * _destinationAlbum;
    NSMutableSet * _urls;
    int  assetKind;
}

@property (nonatomic) int assetKind;
@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *destinationAlbum;
@property (nonatomic, retain) NSMutableSet *urls;

- (int)assetKind;
- (long long)compare:(id)arg1;
- (id)dateCreated;
- (void)dealloc;
- (id)description;
- (struct NSObject { Class x1; }*)destinationAlbum;
- (id)initWithURLs:(id)arg1 creationDate:(id)arg2 destinationAlbum:(struct NSObject { Class x1; }*)arg3 assetKind:(int)arg4;
- (bool)isCameraKit;
- (void)setAssetKind:(int)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDestinationAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;

@end
