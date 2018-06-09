/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabaseOperation : CKOperation {
    CKDatabase * _database;
}

@property (nonatomic, retain) CKDatabase *database;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (id)database;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)flowControlKey;
- (void)setDatabase:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)ic_loggingValues;

@end
