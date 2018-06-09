/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseArchiverWriter : NSObject {
    long long  _dataStateIdentifier;
    TSPDatabase * _database;
    TSPDistributableFileManager * _fileManager;
    NSString * _fileStateIdentifier;
    NSString * _filenameHint;
    bool  _forceFileStorage;
    bool  _hasDataState;
    bool  _hasFileState;
}

@property (nonatomic) long long dataStateIdentifier;
@property (nonatomic, retain) NSString *fileStateIdentifier;
@property (nonatomic, retain) NSString *filenameHint;
@property (nonatomic) bool forceFileStorage;
@property (nonatomic, readonly) bool hasDataState;
@property (nonatomic, readonly) bool hasFileState;

- (void).cxx_destruct;
- (struct sqlite3_blob { }*)_openDatabaseBlobWithSize:(int)arg1;
- (void)_writeDataFromInputStreamToDatabase:(id)arg1 length:(int)arg2;
- (void)_writeDataFromInputStreamToFile:(id)arg1 length:(long long)arg2;
- (long long)dataStateIdentifier;
- (id)fileStateIdentifier;
- (id)filenameHint;
- (bool)forceFileStorage;
- (bool)hasDataState;
- (bool)hasFileState;
- (id)initWithDatabase:(id)arg1 fileManager:(id)arg2;
- (bool)serializeArchive:(const struct Message { int (**x1)(); }*)arg1;
- (void)serializeDataFromStream:(id)arg1 length:(long long)arg2;
- (void)setDataStateIdentifier:(long long)arg1;
- (void)setFileStateIdentifier:(id)arg1;
- (void)setFilenameHint:(id)arg1;
- (void)setForceFileStorage:(bool)arg1;

@end
