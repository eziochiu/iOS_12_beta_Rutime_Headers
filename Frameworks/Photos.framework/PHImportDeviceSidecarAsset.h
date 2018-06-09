/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportDeviceSidecarAsset : PHImportDeviceAsset <PHImportSidecarAsset> {
    unsigned long long  _sidecarType;
}

@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) unsigned long long sidecarType;

- (id)getMetadataForImportRecord:(id)arg1 fileData:(id)arg2;
- (id)initWithSidecarFile:(id)arg1;
- (bool)isValid;
- (bool)loadMetadataSync;
- (unsigned long long)sidecarType;
- (id)thumbnailForSize:(unsigned long long)arg1 atEnd:(id /* block */)arg2;

@end
