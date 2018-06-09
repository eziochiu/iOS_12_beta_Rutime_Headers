/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSymlinkItem : BRCLocalItem {
    NSString * _symlinkTarget;
}

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property (nonatomic, readonly) NSString *symlinkTarget;

- (void).cxx_destruct;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id*)arg4;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)asSymlink;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (bool)isSymLink;
- (void)readTargetFromRelativePathAndSyncUp:(id)arg1;
- (id)symlinkTarget;

@end
