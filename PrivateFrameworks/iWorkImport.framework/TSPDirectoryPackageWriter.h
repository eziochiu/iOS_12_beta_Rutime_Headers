/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageWriter : TSPPackageWriter {
    TSPDirectoryPackageDataWriter * _dataWriter;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(long long)arg7 apfsMode:(bool)arg8 encryptionKey:(id)arg9 originalDocumentPackage:(id)arg10 originalSuppportPackage:(id)arg11 fileCoordinatorDelegate:(id)arg12 progress:(id)arg13 error:(id*)arg14;
- (id)linkOrCopyData:(id)arg1 fromURL:(id)arg2 decryptionInfo:(id)arg3 preferredFilename:(id)arg4 error:(id*)arg5;
- (struct CGDataConsumer { }*)newCGDataConsumerAtRelativePath:(id)arg1;
- (id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5;
- (id)newRawComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(bool)arg2;
- (id)newRawDataWriteChannelForRelativePath:(id)arg1 originalLastModificationDate:(id)arg2 originalSize:(unsigned long long)arg3 originalCRC:(unsigned int)arg4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(bool)arg5;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2 packageURL:(id)arg3;
- (id)targetDataURLForPath:(id)arg1;
- (bool)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(bool)arg3 error:(id*)arg4;

@end
