/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageConverter : TSPPackageConverter

- (bool)enumeratePackageEntriesWithZipArchive:(id)arg1 accessor:(id /* block */)arg2;
- (bool)isValid;
- (unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1;

@end
