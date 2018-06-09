/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseObjectWithFileState : TSPDatabaseObject {
    NSString * _fileState;
    NSURL * _packageURL;
}

- (void).cxx_destruct;
- (long long)dataState;
- (id)fileState;
- (id)fileURL;
- (bool)hasDataState;
- (bool)hasFileState;
- (id)initWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4;

@end
