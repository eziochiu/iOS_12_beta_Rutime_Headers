/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASDatabaseJournal : NSObject {
    _PASDatabaseJournalFile * _currentFile;
    NSString * _directoryPath;
    bool  _inMemory;
    bool  _journaling;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _serialNumber;
    NSString * _uuid;
}

@property (nonatomic, readonly) bool journaling;

+ (id /* block */)_binderForDictionary:(id)arg1;
+ (id)_journalPathForDbPath:(id)arg1;
+ (id)journalForInMemoryDb;
+ (id)journalWithDbPath:(id)arg1;

- (void).cxx_destruct;
- (void)_addCurrentFileToLog;
- (void)_clearCurrentFile;
- (void)_closeCurrentFile;
- (bool)_executeFile:(id)arg1 onDb:(id)arg2 becameLocked:(bool*)arg3;
- (bool)_executeNextRecordFromFile:(id)arg1 onDb:(id)arg2 becameLocked:(bool*)arg3 deleteFile:(bool*)arg4;
- (id)_getCurrentFile;
- (bool)deleteAllJournaledQueries;
- (id)description;
- (id)directoryPath;
- (bool)executeQueriesOnDatabase:(id)arg1;
- (bool)journaling;
- (void)runQuery:(id)arg1 values:(id)arg2 onDb:(id)arg3;
- (bool)startJournaling;
- (bool)stopJournaling;

@end
