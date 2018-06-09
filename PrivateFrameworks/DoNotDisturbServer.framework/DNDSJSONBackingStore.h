/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSJSONBackingStore : NSObject <DNDSBackingStore> {
    NSURL * _fileURL;
    Class  _recordClass;
    unsigned long long  _versionNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRecordClass:(Class)arg1 fileURL:(id)arg2 versionNumber:(unsigned long long)arg3;
- (id)readAllRecordsWithError:(id*)arg1;
- (bool)writeAllRecords:(id)arg1 withError:(id*)arg2;

@end
