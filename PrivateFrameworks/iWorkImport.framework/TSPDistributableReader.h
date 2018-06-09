/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableReader : NSObject <TSPStreamingDistributableUnarchiver> {
    TSPDatabase * _database;
    TSPDistributableFileManager * _fileManager;
    bool  _hasReadTangierVersionRoot;
    bool  _isCancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)readCheckCrcFromArchiveInputStream:(id)arg1 crc:(unsigned int*)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)_initializeNewDocumentDirectory:(id)arg1;
- (void)cancel;
- (bool)handleArchivedVersions:(struct { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (bool)handleClassInfoWithClassType:(int)arg1 className:(id)arg2 isProtobufClass:(bool)arg3 error:(id*)arg4;
- (bool)handleFileDescriptorProtoWithInputStream:(id)arg1 length:(unsigned int)arg2 error:(id*)arg3;
- (bool)handleObjectWithIdentifier:(long long)arg1 fileStateIdentifier:(id)arg2 version:(unsigned int)arg3 classType:(int)arg4 stream:(id)arg5 length:(long long)arg6 relationshipTargets:(long long*)arg7 relationshipCount:(unsigned int)arg8 error:(id*)arg9;
- (id)initWithDestinationPath:(id)arg1;
- (bool)readFromDistributableArchiveStream:(id)arg1 estimatedDataLength:(long long)arg2 supplementalDataBundle:(id)arg3 error:(id*)arg4;

@end
