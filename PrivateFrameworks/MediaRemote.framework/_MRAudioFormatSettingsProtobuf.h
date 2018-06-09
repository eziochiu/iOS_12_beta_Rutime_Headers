/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAudioFormatSettingsProtobuf : PBCodable <NSCopying> {
    NSData * _formatSettingsPlistData;
}

@property (nonatomic, retain) NSData *formatSettingsPlistData;
@property (nonatomic, readonly) bool hasFormatSettingsPlistData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formatSettingsPlistData;
- (bool)hasFormatSettingsPlistData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFormatSettingsPlistData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
