/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportRecord : PHImportExceptionRecorder {
    NSString * _assetIdentifier;
    NSString * _destinationPath;
    PHImportAsset * _importAsset;
    unsigned long long  _importFileOperation;
    unsigned char  _importType;
    bool  _isDownloaded;
    NSString * _rawAssetIdentifier;
    bool  _referencedImport;
    NSMutableArray * _relatedRecords;
    NSString * _sourcePath;
    PHImportTimerCollection * _timers;
}

@property (nonatomic, retain) NSString *assetIdentifier;
@property (nonatomic, retain) NSString *destinationPath;
@property (nonatomic, retain) PHImportAsset *importAsset;
@property (nonatomic) unsigned long long importFileOperation;
@property (nonatomic) unsigned char importType;
@property (nonatomic) bool isDownloaded;
@property (nonatomic, readonly) bool isReferenced;
@property (nonatomic, readonly) NSString *rawAssetIdentifier;
@property (nonatomic) bool referencedImport;
@property (nonatomic, retain) NSMutableArray *relatedRecords;
@property (nonatomic, retain) NSString *sourcePath;
@property (nonatomic, retain) PHImportTimerCollection *timers;

- (void).cxx_destruct;
- (void)addRelatedRecord:(id)arg1;
- (id)allAssetIdentifiers;
- (id)allImportAssets;
- (id)allImportRecords;
- (id)assetIdentifier;
- (void)cleanupAfterFailure;
- (id)description;
- (id)destinationPath;
- (id)importAsset;
- (unsigned long long)importFileOperation;
- (unsigned char)importType;
- (id)initWithImportAsset:(id)arg1;
- (bool)isDownloaded;
- (bool)isReferenced;
- (bool)needsDownload;
- (id)rawAssetIdentifier;
- (id)recordForAsset:(id)arg1;
- (bool)referencedImport;
- (id)relatedRecords;
- (void)setAssetIdentifier:(id)arg1;
- (void)setDestinationPath:(id)arg1;
- (void)setDownloadedAtPath:(id)arg1;
- (void)setImportAsset:(id)arg1;
- (void)setImportFileOperation:(unsigned long long)arg1;
- (void)setImportType:(unsigned char)arg1;
- (void)setIsDownloaded:(bool)arg1;
- (void)setReferencedImport:(bool)arg1;
- (void)setRelatedRecords:(id)arg1;
- (void)setSourcePath:(id)arg1;
- (void)setTimers:(id)arg1;
- (id)sourcePath;
- (id)timers;
- (void)updateImportType;

@end
