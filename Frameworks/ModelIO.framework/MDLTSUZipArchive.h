/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTSUZipArchive : NSObject {
    long long  _endOfLastEntry;
    NSMutableOrderedSet * _entries;
    NSMutableDictionary * _entriesMap;
    unsigned long long  _options;
}

@property (nonatomic, readonly) unsigned long long archiveLength;
@property (nonatomic, readonly) long long endOfLastEntry;
@property (nonatomic, readonly) unsigned long long entriesCount;
@property (nonatomic, readonly) bool hasNonEmptyEntries;
@property (nonatomic, readonly) bool isValid;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (unsigned long long)archiveLength;
- (void)collapseCommonRootDirectory;
- (id)containedZipArchiveForEntry:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (long long)endOfLastEntry;
- (unsigned long long)entriesCount;
- (id)entryForName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (bool)hasNonEmptyEntries;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (bool)isValid;
- (id)newArchiveReadChannel;
- (id)normalizeEntryName:(id)arg1;
- (void)readArchiveWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(unsigned long long)arg3 channel:(id)arg4 completion:(id /* block */)arg5;
- (bool)readCentralFileHeaderWithBuffer:(const void**)arg1 dataSize:(unsigned long long*)arg2 error:(id*)arg3;
- (id)readChannelForEntry:(id)arg1;
- (id)readChannelForEntry:(id)arg1 validateCRC:(bool)arg2;
- (void)readEndOfCentralDirectoryData:(id)arg1 eocdOffset:(long long)arg2 channel:(id)arg3 completion:(id /* block */)arg4;
- (bool)readExtraFieldsFromBuffer:(const void**)arg1 extraFieldsLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)readFileCommentFromBuffer:(const void**)arg1 fileCommentLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)readFilenameFromBuffer:(const void**)arg1 nameLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5;
- (void)readLocalFileHeaderData:(id)arg1 atOffset:(long long)arg2 channel:(id)arg3 completion:(id /* block */)arg4;
- (void)readLocalFileHeaderEntriesFromChannel:(id)arg1 offset:(long long)arg2 previousEntry:(id)arg3 seekAttempts:(unsigned int)arg4 seekForward:(bool)arg5 completion:(id /* block */)arg6;
- (bool)readLocalFileHeaderFilenameAndExtraFieldsData:(id)arg1 forEntry:(id)arg2 error:(id*)arg3;
- (void)readZip64EndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 completion:(id /* block */)arg3;
- (void)readZip64EndOfCentralDirectoryLocatorData:(id)arg1 channel:(id)arg2 completion:(id /* block */)arg3;
- (void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg1 eocdOffset:(long long)arg2 completion:(id /* block */)arg3;
- (void)readZip64EndOfCentralDirectoryWithChannel:(id)arg1 offset:(long long)arg2 completion:(id /* block */)arg3;
- (bool)readZip64ExtraFieldFromBuffer:(const void*)arg1 dataLength:(unsigned short)arg2 entry:(id)arg3 error:(id*)arg4;
- (id)streamReadChannelForEntry:(id)arg1;
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(bool)arg2;

@end
