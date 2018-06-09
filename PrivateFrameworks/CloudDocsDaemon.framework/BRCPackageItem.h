/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPackageItem : NSObject {
    long long  _assetRank;
    NSData * _contentSignature;
    unsigned long long  _fileID;
    BRCGenerationID * _generationID;
    bool  _isDirty;
    BOOL  _mode;
    long long  _mtime;
    unsigned long long  _packageID;
    NSString * _pathInPackage;
    NSData * _quarantineInfo;
    long long  _size;
    NSString * _symlinkContent;
    int  _type;
    NSData * _xattrs;
}

@property (nonatomic, readonly) long long assetRank;
@property (nonatomic, readonly) NSData *contentSignature;
@property (nonatomic, readonly) unsigned long long fileID;
@property (nonatomic, readonly) BRCGenerationID *generationID;
@property (nonatomic, readonly) bool isDirectory;
@property (nonatomic, readonly) bool isFile;
@property (nonatomic, readonly) bool isSymLink;
@property (nonatomic, readonly) BOOL mode;
@property (nonatomic, readonly) long long mtime;
@property (nonatomic, readonly) unsigned long long packageDocumentID;
@property (nonatomic, readonly) NSString *pathInPackage;
@property (nonatomic, readonly) NSData *quarantineInfo;
@property (nonatomic, readonly) long long size;
@property (nonatomic, readonly) NSString *symlinkContent;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSData *xattrs;

+ (bool)_deleteSnapshotAtPath:(id)arg1 error:(id*)arg2;
+ (bool)_rescanDirectoryInPackage:(id)arg1 error:(id*)arg2;
+ (long long)aggregatePackageSizeForPackageID:(unsigned int)arg1 session:(id)arg2;
+ (bool)dumpSession:(id)arg1 toContext:(id)arg2 db:(id)arg3 error:(id*)arg4;
+ (long long)largestPackageItemSizeInDocumentID:(unsigned int)arg1 session:(id)arg2;
+ (bool)packageChangedAtRelativePath:(id)arg1;
+ (id)packageItemForRelpath:(id)arg1;
+ (id)packageItemWithDocumentID:(unsigned int)arg1 relativePath:(id)arg2 session:(id)arg3;
+ (struct PQLResultSet { Class x1; }*)packageItemsForDocumentID:(unsigned int)arg1 order:(unsigned long long)arg2 session:(id)arg3;
+ (struct PQLResultSet { Class x1; }*)packageItemsForItem:(id)arg1 order:(unsigned long long)arg2;
+ (bool)updateSignaturesForFilesInItem:(id)arg1 fromCKPackage:(id)arg2 error:(id*)arg3;
+ (bool)updateSnapshotAtPath:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (long long)assetRank;
- (bool)changedAtRelpath:(id)arg1;
- (id)contentSignature;
- (id)description;
- (unsigned long long)fileID;
- (id)generationID;
- (id)initFromPQLResultSet:(id)arg1 session:(id)arg2 error:(id*)arg3;
- (id)initWithPBItem:(id)arg1 forLocalItem:(id)arg2;
- (id)initWithRelativePath:(id)arg1 markDirty:(bool)arg2;
- (bool)isDirectory;
- (bool)isFile;
- (bool)isSymLink;
- (BOOL)mode;
- (long long)mtime;
- (unsigned long long)packageDocumentID;
- (id)pathInPackage;
- (id)quarantineInfo;
- (bool)saveToDBWithSession:(id)arg1;
- (bool)setDirty:(bool)arg1 session:(id)arg2;
- (long long)size;
- (id)symlinkContent;
- (int)type;
- (id)xattrs;

@end
