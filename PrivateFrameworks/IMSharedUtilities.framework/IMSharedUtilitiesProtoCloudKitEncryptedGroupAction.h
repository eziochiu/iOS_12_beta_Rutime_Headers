/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMSharedUtilitiesProtoCloudKitEncryptedGroupAction : PBCodable <NSCopying> {
    long long  _groupActionType;
    struct { 
        unsigned int groupActionType : 1; 
        unsigned int version : 1; 
    }  _has;
    NSString * _otherHandle;
    NSData * _padding;
    unsigned int  _version;
}

@property (nonatomic) long long groupActionType;
@property (nonatomic) bool hasGroupActionType;
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
- (long long)groupActionType;
- (bool)hasGroupActionType;
- (bool)hasOtherHandle;
- (bool)hasPadding;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)otherHandle;
- (id)padding;
- (bool)readFrom:(id)arg1;
- (void)setGroupActionType:(long long)arg1;
- (void)setHasGroupActionType:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setPadding:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
