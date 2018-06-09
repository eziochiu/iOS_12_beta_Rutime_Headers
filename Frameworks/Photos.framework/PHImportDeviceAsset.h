/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportDeviceAsset : PHImportAsset {
    ICCameraFile * _cameraFile;
}

@property (nonatomic, readonly) NSArray *cameraFiles;

+ (id)UTIForCameraFile:(id)arg1;
+ (id)assetFileForFile:(id)arg1;
+ (void)validateCameraFile:(id)arg1;

- (void).cxx_destruct;
- (void)_loadSidecarFiles;
- (id)assetId;
- (int)burstPickType;
- (id)burstUUID;
- (id)cameraFiles;
- (bool)canDelete;
- (bool)canPreserveFolderStructure;
- (bool)canReference;
- (bool)containsDateKey:(id)arg1;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4;
- (void)downloadToPathAsync:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)duration;
- (id)exifImageDate;
- (void)fetchMetadataAsync:(id /* block */)arg1;
- (id)fetchMetadataSync;
- (bool)hasAdjustments;
- (bool)hasAudioAttachment;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithCameraFile:(id)arg1 uti:(id)arg2 supportedType:(unsigned char)arg3;
- (bool)isLivePhoto;
- (bool)isRAW;
- (bool)isRendered;
- (bool)isSloMo;
- (bool)isTagged;
- (bool)isViewable;
- (id)makeImportErrorforPath:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3 file:(char *)arg4 line:(unsigned long long)arg5;
- (id)mediaGroupId;
- (id)originatingAssetID;
- (id)parentFolderPath;
- (bool)performAdditionalLivePhotoChecksWithImageAsset:(id)arg1;
- (id)representedObject;
- (id)source;
- (void)thumbnailForSize:(unsigned long long)arg1 usingRequest:(id)arg2 atEnd:(id /* block */)arg3;

@end
