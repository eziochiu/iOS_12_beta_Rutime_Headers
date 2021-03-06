/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSXPCStoreUtilities : NSObject

+ (id)_decodeResultSetData:(id)arg1 forFetchRequest:(id)arg2 options:(unsigned long long)arg3 store:(id)arg4 context:(id)arg5 rowCacheRows:(id*)arg6 error:(id*)arg7;
+ (id)classesForErrorArchive;
+ (id)classesForFetchArchive;
+ (id)classesForPullChangesArchive;
+ (id)classesForSaveArchive;
+ (id)decodeSecureArchivedData:(id)arg1 usingDelegate:(id)arg2 classes:(id)arg3;
+ (id)encodableTokenForStore:(id)arg1 queryGenerationToken:(id)arg2;
+ (id)identifierForStore:(id)arg1;
+ (void)logMessage:(id)arg1 forComponent:(id)arg2;
+ (id)newSecureArchivedDataWithRootObject:(id)arg1;
+ (id)newUserInfoFromException:(id)arg1;
+ (id)updateNotificationNameForStore:(id)arg1;

@end
