/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDiagnostics : NSObject

+ (id)_memoriesRelatedOutputPathBaseDirectory;
+ (unsigned long long)addOSStateHandlerWithTitle:(id)arg1 queue:(id)arg2 propertyListHandler:(id /* block */)arg3;
+ (void)collectCollectionsStatWithLibraryContext:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)collectMomentsStatWithLibraryContext:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)collectYearsStatWithLibraryContext:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolder;
+ (id)diagnosticsURLs;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)arg1 handler:(id /* block */)arg2;
+ (id)excludingNameExpression;
+ (id)logDirectoryURL;
+ (id)matchingNameExpression;
+ (id)memoriesAndRelatedDiagnosticsOutputURL;

@end
