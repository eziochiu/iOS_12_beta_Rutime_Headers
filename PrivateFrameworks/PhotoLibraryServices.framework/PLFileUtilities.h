/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFileUtilities : NSObject

+ (bool)_isFileExistsError:(id)arg1;
+ (id)_mobileOwnerAttributes;
+ (bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2;
+ (bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3;
+ (bool)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
+ (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (bool)createDirectoryAtPath:(id)arg1 error:(id*)arg2;
+ (bool)createDirectoryAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3;
+ (id)descriptionForFileIngestionType:(long long)arg1;
+ (id)fileManager;
+ (bool)filePath:(id)arg1 hasPrefix:(id)arg2;
+ (bool)hasDiskSpaceToCopyFileAtURL:(id)arg1;
+ (bool)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
+ (id)realPathForPath:(id)arg1 error:(id*)arg2;
+ (bool)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (bool)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3;
+ (bool)supportsClone;

@end
