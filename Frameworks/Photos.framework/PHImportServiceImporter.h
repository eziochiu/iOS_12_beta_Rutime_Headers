/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportServiceImporter : NSObject {
    id /* block */  _completionHandler;
    <PHImportServiceImporterDelegate> * _delegate;
    NSMutableArray * _downloadedRecords;
    PLImportFileManager * _importFileManager;
    NSObject<OS_dispatch_queue> * _importQueue;
    NSString * _importSessionID;
    unsigned char  _importState;
    NSMutableSet * _importedBurstUUIDs;
    bool  _isCanceled;
    PHPhotoLibrary * _library;
    PHImportOptions * _options;
    NSMutableDictionary * _parentFolderMapping;
    NSProgress * _progress;
    PHImportResults * _results;
    PHImportSource * _source;
}

@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic, retain) NSMutableSet *importedBurstUUIDs;
@property (nonatomic, retain) PHPhotoLibrary *library;
@property (nonatomic, retain) PHImportOptions *options;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) PHImportResults *results;
@property (nonatomic, retain) PHImportSource *source;

+ (void)dumpImageData:(id)arg1;
+ (void)dumpMetadataForData:(id)arg1;
+ (id)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5 atEnd:(id /* block */)arg6;

- (void).cxx_destruct;
- (void)_addRecordToResults:(id)arg1;
- (unsigned long long)_approximateBytesRequiredToImportAsset:(id)arg1;
- (void)_downloadAssetsForRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_downloadNextAssetWithRecordEnumerator:(id)arg1 forRecord:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_finishImport;
- (void)_importNextAssetWithAssetEnumerator:(id)arg1;
- (void)_importNextRecord:(id)arg1;
- (void)_importWithRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)beginWork:(id)arg1;
- (void)cancellationHandler;
- (void)endWork;
- (bool)handleErrorsForRecord:(id)arg1 batch:(id)arg2 file:(char *)arg3 line:(int)arg4;
- (id)importSessionID;
- (void)importedBurstAsset:(id)arg1;
- (id)importedBurstUUIDs;
- (id)initWithLibrary:(id)arg1 options:(id)arg2;
- (id)initWithLibrary:(id)arg1 options:(id)arg2 source:(id)arg3 delegate:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)library;
- (id)options;
- (id)progress;
- (id)results;
- (void)setImportSessionID:(id)arg1;
- (void)setImportedBurstUUIDs:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (void)validateSourceForAsset:(id)arg1;

@end
