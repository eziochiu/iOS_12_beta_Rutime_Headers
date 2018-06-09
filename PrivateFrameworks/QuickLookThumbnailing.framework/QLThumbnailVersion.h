/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailVersion : NSObject <NSSecureCoding> {
    unsigned long long  _fileSize;
    NSString * _generatorID;
    NSString * _generatorVersion;
    NSDate * _modificationDate;
    NSData * _versionIdentifier;
}

@property (getter=isAutomaticallyGenerated, readonly) bool automaticallyGenerated;
@property (getter=isDefaultVersion, readonly) bool defaultVersion;
@property unsigned long long fileSize;
@property (copy) NSString *generatorID;
@property (copy) NSString *generatorVersion;
@property (copy) NSDate *modificationDate;
@property (copy) NSData *versionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileSize;
- (id)generatorID;
- (id)generatorVersion;
- (void)getGeneratorID:(id*)arg1 version:(id*)arg2 forContentType:(id)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFPItem:(id)arg1 automaticallyGenerated:(bool)arg2;
- (id)initWithFPItem:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (id)initWithFileURL:(id)arg1 automaticallyGenerated:(bool)arg2;
- (id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 versionIdentifier:(id)arg3 generatorID:(id)arg4 generatorVersion:(id)arg5;
- (bool)isAutomaticallyGenerated;
- (bool)isDefaultVersion;
- (bool)isEqual:(id)arg1;
- (id)modificationDate;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setGeneratorID:(id)arg1;
- (void)setGeneratorVersion:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (bool)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1;
- (id)versionIdentifier;

@end
