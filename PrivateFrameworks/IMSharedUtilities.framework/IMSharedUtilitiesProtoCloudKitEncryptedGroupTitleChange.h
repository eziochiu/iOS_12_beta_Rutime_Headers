/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMSharedUtilitiesProtoCloudKitEncryptedGroupTitleChange : PBCodable <NSCopying> {
    NSString * _groupTitle;
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSString * _otherHandle;
    NSData * _padding;
    unsigned int  _version;
}

@property (nonatomic, retain) NSString *groupTitle;
@property (nonatomic, readonly) bool hasGroupTitle;
@property (nonatomic, readonly) bool hasOtherHandle;
@property (nonatomic, readonly) bool hasPadding;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *otherHandle;
@property (nonatomic, retain) NSData *padding;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupTitle;
- (bool)hasGroupTitle;
- (bool)hasOtherHandle;
- (bool)hasPadding;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)otherHandle;
- (id)padding;
- (bool)readFrom:(id)arg1;
- (void)setGroupTitle:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setPadding:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
