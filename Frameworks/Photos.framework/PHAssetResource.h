/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResource : NSObject {
    NSString * _assetLocalIdentifier;
    bool  _derivative;
    unsigned long long  _fileSize;
    NSURL * _fileURL;
    bool  _locallyAvailable;
    NSString * _originalFilename;
    PHPhotoLibrary * _photoLibrary;
    long long  _pixelHeight;
    long long  _pixelWidth;
    id /* block */  _privateFileLoader;
    NSURL * _privateFileURL;
    long long  _resourceType;
    NSString * _uniformTypeIdentifier;
}

@property (setter=_setAssetLocalIdentifier:, nonatomic, copy) NSString *assetLocalIdentifier;
@property (getter=isDerivative, nonatomic, readonly) bool derivative;
@property (setter=_setFileSize:, nonatomic) unsigned long long fileSize;
@property (setter=_setFileURL:, nonatomic, retain) NSURL *fileURL;
@property (getter=isLibraryAssetResource, nonatomic, readonly) bool libraryAssetResource;
@property (getter=isLocallyAvailable, setter=_setIsLocallyAvailable:, nonatomic) bool locallyAvailable;
@property (nonatomic, readonly) bool miro_isReallyLocallyAvailable;
@property (setter=_setOriginalFilename:, nonatomic, copy) NSString *originalFilename;
@property (setter=_setPhotoLibrary:, nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (setter=_setPixelHeight:, nonatomic) long long pixelHeight;
@property (setter=_setPixelWidth:, nonatomic) long long pixelWidth;
@property (setter=_setPrivateFileLoader:, nonatomic, copy) id /* block */ privateFileLoader;
@property (setter=_setPrivateFileURL:, nonatomic, retain) NSURL *privateFileURL;
@property (nonatomic, readonly) long long type;
@property (setter=_setUniformTypeIdentifier:, nonatomic, copy) NSString *uniformTypeIdentifier;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_managedAssetWithRelationshipsPrefetchedForAsset:(id)arg1 inLibrary:(id)arg2 error:(id*)arg3;
+ (id)assetResourcesForAsset:(id)arg1;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(bool)arg2;
+ (id)assetResourcesForLivePhoto:(id)arg1;

- (void).cxx_destruct;
- (void)_setAssetLocalIdentifier:(id)arg1;
- (void)_setFileSize:(unsigned long long)arg1;
- (void)_setFileURL:(id)arg1;
- (void)_setIsLocallyAvailable:(bool)arg1;
- (void)_setOriginalFilename:(id)arg1;
- (void)_setPhotoLibrary:(id)arg1;
- (void)_setPixelHeight:(long long)arg1;
- (void)_setPixelWidth:(long long)arg1;
- (void)_setPrivateFileLoader:(id /* block */)arg1;
- (void)_setPrivateFileURL:(id)arg1;
- (void)_setUniformTypeIdentifier:(id)arg1;
- (long long)analysisType;
- (id)assetLocalIdentifier;
- (id)description;
- (unsigned long long)fileSize;
- (id)fileURL;
- (id)initWithResourceType:(long long)arg1;
- (bool)isDerivative;
- (bool)isLibraryAssetResource;
- (bool)isLocallyAvailable;
- (id)originalFilename;
- (id)photoLibrary;
- (long long)pixelHeight;
- (long long)pixelWidth;
- (id /* block */)privateFileLoader;
- (id)privateFileURL;
- (long long)type;
- (id)uniformTypeIdentifier;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (bool)miro_isReallyLocallyAvailable;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

+ (id)vcp_allResourcesForAsset:(id)arg1;

- (id)vcp_avAsset;
- (unsigned long long)vcp_fileSize;
- (bool)vcp_isDecodable;
- (bool)vcp_isLocallyAvailable;
- (bool)vcp_isMovie;
- (bool)vcp_isPhoto;
- (struct CGSize { double x1; double x2; })vcp_size;
- (id)vcp_url;

@end
