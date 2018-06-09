/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportOptions : NSObject {
    PHAssetCollection * _destinationAlbum;
    PHImportSource * _importSource;
    PHPhotoLibrary * _library;
    struct options_bits { 
        unsigned int preserveFolderStructure : 1; 
        unsigned int hideProgress : 1; 
        unsigned int skipAlertWhenFinished : 1; 
        unsigned int referencedImport : 1; 
        unsigned int allowDuplicates : 1; 
        unsigned int skipDiskSpaceCheck : 1; 
        unsigned int deleteAfterImport : 1; 
        unsigned int metadataAddMode : 1; 
        unsigned int omitImportComplete : 1; 
        unsigned int allowUnsupported : 1; 
        unsigned int fileOperation : 3; 
        unsigned int importedBy : 8; 
    }  _options_bits;
    NSString * _personId;
    NSString * _rootSourcePath;
    NSSortDescriptor * _sortDescriptor;
}

@property (nonatomic) bool allowDuplicates;
@property (nonatomic) bool deleteAfterImport;
@property (nonatomic, retain) PHAssetCollection *destinationAlbum;
@property (nonatomic) unsigned long long fileOperation;
@property (nonatomic) bool hideProgress;
@property (nonatomic, retain) PHImportSource *importSource;
@property (nonatomic, retain) PHPhotoLibrary *library;
@property (nonatomic, retain) NSString *personId;
@property (nonatomic) bool preserveFolderStructure;
@property (nonatomic) bool referencedImport;
@property (nonatomic, retain) NSString *rootSourcePath;
@property (nonatomic) bool skipAlertWhenFinished;
@property (nonatomic) bool skipDiskSpaceCheck;
@property (nonatomic, retain) NSSortDescriptor *sortDescriptor;

- (void).cxx_destruct;
- (bool)allowDuplicates;
- (bool)allowUnsupported;
- (bool)deleteAfterImport;
- (id)destinationAlbum;
- (unsigned long long)fileOperation;
- (bool)hideProgress;
- (id)importSource;
- (short)importedBy;
- (id)init;
- (id)initWithLibrary:(id)arg1 importSource:(id)arg2;
- (id)library;
- (unsigned long long)metadataAddMode;
- (bool)omitImportComplete;
- (id)personId;
- (bool)preserveFolderStructure;
- (bool)referencedImport;
- (id)rootSourcePath;
- (void)setAllowDuplicates:(bool)arg1;
- (void)setAllowUnsupported:(bool)arg1;
- (void)setDeleteAfterImport:(bool)arg1;
- (void)setDestinationAlbum:(id)arg1;
- (void)setFileOperation:(unsigned long long)arg1;
- (void)setHideProgress:(bool)arg1;
- (void)setImportSource:(id)arg1;
- (void)setImportedBy:(short)arg1;
- (void)setLibrary:(id)arg1;
- (void)setMetadataAddMode:(unsigned long long)arg1;
- (void)setOmitImportComplete:(bool)arg1;
- (void)setPersonId:(id)arg1;
- (void)setPreserveFolderStructure:(bool)arg1;
- (void)setReferencedImport:(bool)arg1;
- (void)setRootSourcePath:(id)arg1;
- (void)setSkipAlertWhenFinished:(bool)arg1;
- (void)setSkipDiskSpaceCheck:(bool)arg1;
- (void)setSortDescriptor:(id)arg1;
- (bool)skipAlertWhenFinished;
- (bool)skipDiskSpaceCheck;
- (id)sortDescriptor;

@end
