/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUTemporaryDocumentCacheManager : TSUTemporaryDirectoryManager

+ (id)baseDirectoryURL;
+ (id)sharedManager;

- (id)newDirectoryForDocumentUUID:(id)arg1;

@end
