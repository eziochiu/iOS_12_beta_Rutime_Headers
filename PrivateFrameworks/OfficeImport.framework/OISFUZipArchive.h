/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipArchive : NSObject {
    OISFUCryptoKey * mCryptoKey;
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> * mDataRepresentation;
    NSData * mEncryptedDocumentUuid;
    NSMutableDictionary * mEntries;
    NSString * mPassphraseHint;
    NSData * mPassphraseVerifier;
}

+ (bool)isZipArchiveAtPath:(id)arg1;

- (id)allEntryNames;
- (void)collapseCommonRootDirectoryIgnoreCase:(bool)arg1;
- (id)commonRootDirectoryIgnoringCase:(bool)arg1;
- (void)dealloc;
- (bool)decompressAtPath:(id)arg1;
- (bool)decompressAtPath:(id)arg1 wasEmpty:(bool*)arg2;
- (id)encryptedDocumentUuid;
- (id)entryWithName:(id)arg1;
- (id)entryWithName:(id)arg1 dataLength:(long long)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(bool)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(bool)arg2 ignoreCase:(bool)arg3;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(bool)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(bool)arg2 ignoreCase:(bool)arg3;
- (bool)isEncrypted;
- (id)passphraseHint;
- (id)passphraseVerifier;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readEndOfCentralDirectoryFromInputStream:(id)arg1;
- (void)readEntries;
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long long)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2;
- (void)setCryptoKey:(id)arg1;

@end
