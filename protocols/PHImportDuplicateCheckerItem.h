/* made by EzioChiu.
 */

@protocol PHImportDuplicateCheckerItem <NSObject>

@required

- (id)assetId;
- (id)avchdAssetId;
- (NSDate *)dateKey;
- (NSSet *)duplicateAssetsForLibrary:(NSString *)arg1;
- (unsigned char)duplicateStateConfidence;
- (NSMutableDictionary *)duplicates;
- (NSDate *)exifImageDate;
- (NSDate *)fileCreationDate;
- (NSString *)fileName;
- (bool)isDuplicate;
- (bool)isLivePhoto;
- (NSDate *)lastDuplicateCheck;
- (bool)loadMetadataSync;
- (IPAMetadata *)metadata;
- (id)nameKey;
- (id)originatingAssetID;
- (void)setDuplicateStateConfidence:(unsigned char)arg1;
- (void)setDuplicates:(NSMutableDictionary *)arg1;
- (void)setDuplicates:(NSSet *)arg1 forLibrary:(NSString *)arg2;
- (void)setIsDuplicate:(bool)arg1;
- (void)setLastDuplicateCheck:(NSDate *)arg1;
- (id)sizeKey;
- (NSURL *)url;
- (id)uuid;
- (<PHImportDuplicateCheckerItem> *)videoComplement;

@end
