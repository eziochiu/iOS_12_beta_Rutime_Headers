/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTSUZipWriter : NSObject {
    unsigned int  _CRCToMatch;
    bool  _calculateCRC;
    bool  _calculateSize;
    NSObject<OS_dispatch_queue> * _channelQueue;
    MDLTSUZipWriterEntry * _currentEntry;
    long long  _currentOffset;
    NSMutableArray * _entries;
    NSMutableDictionary * _entriesMap;
    unsigned long long  _entryDataSize;
    NSMutableArray * _entryDatas;
    NSError * _error;
    bool  _force32BitSize;
    bool  _isClosed;
    NSDate * _lastModificationDateIfSizeAndCRCMatches;
    NSObject<OS_dispatch_data> * _localFileHeaderData;
    NSDate * _newEntryLastModificationDate;
    unsigned long long  _options;
    unsigned long long  _sizeToMatch;
    NSArray * _sortedEntries;
    <MDLTSURandomWriteChannel> * _writeChannel;
    NSObject<OS_dispatch_semaphore> * _writeChannelCompletionSemaphore;
    NSObject<OS_dispatch_queue> * _writeQueue;
    long long  _writtenOffset;
}

@property (readonly) unsigned long long archiveLength;
@property (readonly) unsigned long long entriesCount;
@property (readonly) bool isClosed;
@property (readonly) NSArray *sortedEntries;

- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)arg1;
- (void)addData:(id)arg1;
- (void)addData:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)addExistingEntry:(id)arg1;
- (void)addExistingEntryImpl:(id)arg1;
- (unsigned long long)archiveLength;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(bool)arg6;
- (void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(bool)arg6;
- (void)closeWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)entriesCount;
- (unsigned long long)entriesCountImpl;
- (id)entryWithName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (void)finishEntry;
- (void)flushCurrentEntryWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)flushEntryData;
- (void)handleWriteError:(id)arg1;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (bool)isClosed;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (id)p_writeChannel;
- (void)p_writeData:(id)arg1 offset:(long long)arg2 completion:(id /* block */)arg3;
- (id)prepareWriteChannelWithCloseCompletionHandler:(id /* block */)arg1;
- (void)setEntryInsertionOffset:(long long)arg1;
- (void)setEntryInsertionOffsetImpl:(long long)arg1;
- (id)sortedEntries;
- (id)sortedEntriesImpl;
- (void)truncateToNumberOfEntries:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)truncateToNumberOfEntriesImpl:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)truncateToOffset:(long long)arg1 completion:(id /* block */)arg2;
- (void)truncateToOffsetImpl:(long long)arg1 completion:(id /* block */)arg2;
- (void)writeCentralDirectory;
- (void)writeCentralFileHeaderDataForEntry:(id)arg1;
- (void)writeData:(id)arg1;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)writeData:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(bool)arg2 fromReadChannel:(id)arg3 completion:(id /* block */)arg4;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 completion:(id /* block */)arg7;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 writeHandler:(id /* block */)arg7;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;

@end
