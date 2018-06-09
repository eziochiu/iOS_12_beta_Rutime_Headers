/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface DCIMImageWriter : NSObject

+ (id)defaultFileExtensionForAssetType:(short)arg1;
+ (id)filteredVideoPathForRecordedLivePhotoVideoPath:(id)arg1;
+ (id)incomingDirectoryPath;
+ (id)incomingDirectoryPathForPhotoStream;
+ (bool)isLivePhotoFilteredVideoPath:(id)arg1;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)recordedVideoPathForFilteredLivePhotoVideoPath:(id)arg1;
+ (id)sharedDCIMWriter;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(bool)arg3;
+ (void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(struct __CFString { }*)arg4 exifProperties:(id)arg5 imageOrientation:(long long)arg6 thumbnailDataOut:(id*)arg7 imageUTITypeOut:(id*)arg8 exifPropertiesOut:(id*)arg9 isJPEGOut:(bool*)arg10 imageDataOut:(id*)arg11;
+ (void)writeableDataForImageData:(id)arg1 imageUTIType:(struct __CFString { }*)arg2 thumbnailDataOut:(id*)arg3 imageUTITypeOut:(id*)arg4 exifPropertiesOut:(id*)arg5 isJPEGOut:(bool*)arg6 imageDataOut:(id*)arg7;

- (id)_cameraAssetExtensionForType:(short)arg1;
- (void)_writeJPEGFromIOSurface:(struct __IOSurface { }*)arg1 toPath:(id)arg2 orientation:(int)arg3;
- (bool)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(bool)arg5;
- (int)copyPrimaryFormatImageData:(id)arg1 toURL:(id)arg2 properties:(id)arg3;
- (bool)saveImageJobToDisk:(id)arg1;
- (bool)writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4;

@end
