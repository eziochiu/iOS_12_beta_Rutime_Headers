/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentProperties : NSObject <NSCopying> {
    NSDictionary * _additionalProperties;
    NSUUID * _documentUUID;
    unsigned long long  _fileFormatVersion;
    TSPDocumentRevision * _revision;
    NSUUID * _shareUUID;
    NSUUID * _versionUUID;
}

@property (nonatomic, copy) NSDictionary *additionalProperties;
@property (nonatomic, copy) NSUUID *documentUUID;
@property (nonatomic) unsigned long long fileFormatVersion;
@property (nonatomic, copy) TSPDocumentRevision *revision;
@property (nonatomic, readonly) NSUUID *shareUUID;
@property (nonatomic, readonly) NSUUID *versionUUID;

+ (bool)documentIsEncryptedAtURL:(id)arg1;
+ (id)documentPropertiesRelativePath;
+ (id)documentRevisionAtURL:(id)arg1;
+ (id)documentUUIDAtURL:(id)arg1;
+ (id)keychainGenericItemForDocumentUUID:(id)arg1;
+ (id)shareIdentifierRelativePath;

- (void).cxx_destruct;
- (id)UUIDFromDocumentProperties:(id)arg1 key:(id)arg2;
- (id)additionalProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)documentUUID;
- (id)encodedPropertyListWithError:(id*)arg1;
- (unsigned long long)fileFormatVersion;
- (id)init;
- (id)initWithDocumentBundleURL:(id)arg1 allowMissingPropertyList:(bool)arg2 error:(id*)arg3;
- (id)initWithDocumentFileURL:(id)arg1 allowMissingPropertyList:(bool)arg2 error:(id*)arg3;
- (id)initWithDocumentURL:(id)arg1 allowMissingPropertyList:(bool)arg2 error:(id*)arg3;
- (id)initWithDocumentURL:(id)arg1 error:(id*)arg2;
- (id)initWithFilePackageURL:(id)arg1 zipArchive:(id)arg2 allowMissingPropertyList:(bool)arg3 error:(id*)arg4;
- (id)initWithPropertiesURL:(id)arg1 error:(id*)arg2;
- (void)readDocumentPropertiesFromDictionary:(id)arg1;
- (id)revision;
- (void)setAdditionalProperties:(id)arg1;
- (void)setDocumentUUID:(id)arg1;
- (void)setFileFormatVersion:(unsigned long long)arg1;
- (void)setRevision:(id)arg1;
- (id)shareUUID;
- (void)updateDocumentAndShareUUID;
- (void)updateDocumentUUID;
- (void)updateVersionUUID;
- (id)versionUUID;
- (bool)writeToDocumentBundleURL:(id)arg1 error:(id*)arg2;
- (bool)writeToDocumentURL:(id)arg1 writerBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)writeToPackageWriter:(id)arg1 error:(id*)arg2;
- (bool)writeToPropertiesURL:(id)arg1 error:(id*)arg2;

@end
