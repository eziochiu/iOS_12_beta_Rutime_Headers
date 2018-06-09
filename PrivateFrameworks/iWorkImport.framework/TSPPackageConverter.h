/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageConverter : NSObject {
    NSURL * _URL;
    TSUExtendedAttributeCollection * _extendedAttributeCollection;
    <TSPFileCoordinatorDelegate> * _fileCoordinatorDelegate;
    bool  _isCancelled;
    TSPPackage * _package;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool isPasswordProtected;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) TSPPackage *package;
@property (nonatomic, readonly) long long packageType;

+ (bool)convertDocumentAtURL:(id)arg1 toPackageType:(long long)arg2 error:(id*)arg3;
+ (id)newPackageConverterWithURL:(id)arg1 error:(id*)arg2;
+ (id)newPackageConverterWithURL:(id)arg1 preserveExtendedAttributes:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)URL;
- (bool)checkPassword:(id)arg1;
- (bool)enumeratePackageEntriesWithZipArchive:(id)arg1 accessor:(id /* block */)arg2;
- (id)init;
- (id)initWithURL:(id)arg1 package:(id)arg2 fileCoordinatorDelegate:(id)arg3 preserveExtendedAttributes:(bool)arg4 error:(id*)arg5;
- (bool)isCancelled;
- (bool)isDocumentPropertiesPath:(id)arg1;
- (bool)isObjectArchivePath:(id)arg1;
- (bool)isPasswordProtected;
- (bool)isValid;
- (id)newWriteChannelAtPath:(id)arg1 lastModificationDate:(id)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4 packageWriter:(id)arg5 error:(id*)arg6;
- (id)package;
- (long long)packageType;
- (unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1;
- (bool)writeToURL:(id)arg1 packageType:(long long)arg2 error:(id*)arg3;

@end
