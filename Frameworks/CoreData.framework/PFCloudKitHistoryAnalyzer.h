/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitHistoryAnalyzer : NSObject {
    CKRecordZone * _zone;
}

+ (bool)isPrivateTransaction:(id)arg1;

- (void)dealloc;
- (id)initWithZone:(id)arg1;
- (id)newAnalyzerContextForStore:(id)arg1 sinceLastHistoryToken:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4;

@end
