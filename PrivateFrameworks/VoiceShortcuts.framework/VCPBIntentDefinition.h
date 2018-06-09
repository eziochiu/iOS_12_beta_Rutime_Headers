/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCPBIntentDefinition : PBCodable <NSCopying> {
    NSString * _associatedBundleID;
    NSMutableArray * _files;
}

@property (nonatomic, retain) NSString *associatedBundleID;
@property (nonatomic, retain) NSMutableArray *files;

+ (Class)filesType;

- (void).cxx_destruct;
- (void)addFiles:(id)arg1;
- (double)associatedAppRegistrationDate;
- (id)associatedBundleID;
- (id)checksum;
- (void)clearFiles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)files;
- (id)filesAtIndex:(unsigned long long)arg1;
- (unsigned long long)filesCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedBundleID:(id)arg1;
- (void)setFiles:(id)arg1;
- (id)syncStateObject;
- (void)writeTo:(id)arg1;

@end
