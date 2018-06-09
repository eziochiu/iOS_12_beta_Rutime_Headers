/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMHistoryAnalyzer : NSObject {
    NSPersistentHistoryToken * _finalToken;
}

@property (nonatomic, readonly) NSPersistentHistoryToken *finalToken;

- (void).cxx_destruct;
- (id)changesForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 error:(id*)arg4;
- (id)finalToken;

@end
