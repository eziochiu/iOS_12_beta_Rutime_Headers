/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackage : TSPPackage

+ (id)componentFileURLForPackageURL:(id)arg1 packageLocator:(id)arg2;
+ (bool)isValidPackageAtURL:(id)arg1;
+ (id)objectArchiveURLForPackageURL:(id)arg1;
+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;

- (void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 canLink:(bool)arg6 completion:(id /* block */)arg7;
- (id)dataAtRelativePath:(id)arg1 allowDecryption:(bool)arg2 error:(id*)arg3;
- (bool)hasDataAtRelativePath:(id)arg1;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id*)arg4;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(id /* block */)arg2 error:(id*)arg3;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2;
- (id)packageEntryInfoAtRelativePath:(id)arg1 error:(id*)arg2;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2;
- (long long)packageType;
- (void)prepareForDocumentReplacementWithSuccess:(bool)arg1 forSafeSave:(bool)arg2 originalURL:(id)arg3;

@end
