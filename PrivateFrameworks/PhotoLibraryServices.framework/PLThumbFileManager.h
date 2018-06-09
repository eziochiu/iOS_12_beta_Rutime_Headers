/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbFileManager : NSObject <PLThumbPersistenceManager> {
    NSString * _filename;
    NSString * _path;
    bool  _readOnly;
    int  _shortSideLengthInPixels;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;

+ (void)deleteAllEntriesWithIdentifier:(id)arg1 basePath:(id)arg2;

- (id)_debugDescription;
- (bool)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (struct CGImage { }*)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void*)arg3;
- (void)dealloc;
- (id)description;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (id)initWithBaseDirectory:(id)arg1 filename:(id)arg2 shortSideLengthInPixels:(int)arg3 readOnly:(bool)arg4;
- (bool)isReadOnly;
- (id)path;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (bool)usesThumbIdentifiers;
- (bool)validateData:(id)arg1 withToken:(id)arg2;

@end
