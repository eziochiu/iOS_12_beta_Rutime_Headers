/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseArchiveManager : NSObject

+ (bool)_processDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3 error:(id*)arg4;
+ (bool)_processGetRelationships:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)_processLoad:(id)arg1 classType:(int*)arg2 database:(id)arg3 fileManager:(id)arg4 error:(id*)arg5;
+ (bool)populateDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3;

@end
