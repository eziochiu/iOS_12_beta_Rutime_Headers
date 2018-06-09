/* made by EzioChiu.
 */

@protocol PLPTPTransferableAsset <NSObject>

@required

- (int)avalanchePickType;
- (NSString *)avalancheUUID;
- (NSDate *)dateCreated;
- (double)duration;
- (int)embeddedThumbnailOffset;
- (NSString *)filename;
- (long long)height;
- (bool)isAudio;
- (bool)isAvalanchePhoto;
- (bool)isInFlight;
- (bool)isPhoto;
- (bool)isPhotoIris;
- (bool)isVideo;
- (short)kindSubtype;
- (CLLocation *)location;
- (NSURL *)mainFileURL;
- (NSString *)mediaGroupUUID;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (NSString *)originalFilename;
- (unsigned long long)originalFilesize;
- (long long)originalHeight;
- (short)originalOrientation;
- (long long)originalWidth;
- (NSString *)pathForAdjustmentFile;
- (NSString *)pathForDiagnosticFile;
- (NSString *)pathForFullsizeRenderImageFile;
- (NSString *)pathForFullsizeRenderVideoFile;
- (NSString *)pathForOriginalFile;
- (<PLPTPTransferableAdditionalAssetAttributes> *)ptpAdditionalAttributes;
- (unsigned long long)ptpCloudMasterOriginalFileSize;
- (<PLPTPTransferableSidecarFile> *)ptpPhotoIrisSidecar;
- (NSSet *)ptpSidecarFiles;
- (short)savedAssetType;
- (id)uuid;
- (long long)width;

@end