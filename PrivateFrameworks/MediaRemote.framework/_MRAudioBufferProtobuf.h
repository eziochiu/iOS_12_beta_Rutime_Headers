/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying> {
    NSData * _contents;
    _MRAudioFormatSettingsProtobuf * _formatSettings;
    struct { 
        unsigned int maximumPacketSize : 1; 
        unsigned int packetCapacity : 1; 
        unsigned int packetCount : 1; 
    }  _has;
    long long  _maximumPacketSize;
    long long  _packetCapacity;
    long long  _packetCount;
    NSMutableArray * _packetDescriptions;
}

@property (nonatomic, retain) NSData *contents;
@property (nonatomic, retain) _MRAudioFormatSettingsProtobuf *formatSettings;
@property (nonatomic, readonly) bool hasContents;
@property (nonatomic, readonly) bool hasFormatSettings;
@property (nonatomic) bool hasMaximumPacketSize;
@property (nonatomic) bool hasPacketCapacity;
@property (nonatomic) bool hasPacketCount;
@property (nonatomic) long long maximumPacketSize;
@property (nonatomic) long long packetCapacity;
@property (nonatomic) long long packetCount;
@property (nonatomic, retain) NSMutableArray *packetDescriptions;

+ (Class)packetDescriptionsType;

- (void).cxx_destruct;
- (void)addPacketDescriptions:(id)arg1;
- (void)clearPacketDescriptions;
- (id)contents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formatSettings;
- (bool)hasContents;
- (bool)hasFormatSettings;
- (bool)hasMaximumPacketSize;
- (bool)hasPacketCapacity;
- (bool)hasPacketCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)maximumPacketSize;
- (void)mergeFrom:(id)arg1;
- (long long)packetCapacity;
- (long long)packetCount;
- (id)packetDescriptions;
- (id)packetDescriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)packetDescriptionsCount;
- (bool)readFrom:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setFormatSettings:(id)arg1;
- (void)setHasMaximumPacketSize:(bool)arg1;
- (void)setHasPacketCapacity:(bool)arg1;
- (void)setHasPacketCount:(bool)arg1;
- (void)setMaximumPacketSize:(long long)arg1;
- (void)setPacketCapacity:(long long)arg1;
- (void)setPacketCount:(long long)arg1;
- (void)setPacketDescriptions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
