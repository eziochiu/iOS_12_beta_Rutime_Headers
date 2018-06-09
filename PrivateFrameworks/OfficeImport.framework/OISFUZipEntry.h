/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipEntry : OISFUDataRepresentation {
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> * mArchiveDataRepresentation;
    unsigned long long  mCompressedSize;
    int  mCompressionMethod;
    unsigned int  mCrc;
    OISFUCryptoKey * mCryptoKey;
    unsigned long long  mDataOffset;
    unsigned long long  mEncodedLength;
    bool  mHasDataOffset;
    bool  mHasEncodedLength;
    unsigned long long  mOffset;
    unsigned long long  mUncompressedSize;
}

- (unsigned long long)backingFileDataOffset;
- (id)backingFilePath;
- (unsigned long long)calculateEncodedLength;
- (void)copyToFile:(id)arg1;
- (unsigned int)crc;
- (id)data;
- (long long)dataLength;
- (unsigned long long)dataOffset;
- (void)dealloc;
- (long long)encodedLength;
- (id)initFromCentralFileHeader:(const char *)arg1 dataRepresentation:(id)arg2;
- (id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned int)arg6;
- (id)inputStream;
- (bool)isBackedByFile;
- (bool)isCompressed;
- (bool)isEncrypted;
- (bool)isReadable;
- (void)readZip64ExtraField:(const char *)arg1 size:(unsigned long long)arg2;
- (void)setCompressionFlags:(unsigned short)arg1;
- (void)setCryptoKey:(id)arg1;
- (void)setDataLength:(long long)arg1;

@end
