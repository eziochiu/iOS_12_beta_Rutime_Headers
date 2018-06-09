/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETPHeader : PBCodable <NSCopying> {
    unsigned int  _baseColor;
    struct { 
        unsigned int sendDate : 1; 
        unsigned int startDelay : 1; 
        unsigned int baseColor : 1; 
        unsigned int messageType : 1; 
        unsigned int supportsPlaybackTimeOffsets : 1; 
    }  _has;
    NSString * _identifier;
    NSData * _messageData;
    int  _messageType;
    long long  _sendDate;
    double  _startDelay;
    bool  _supportsPlaybackTimeOffsets;
}

@property (nonatomic) unsigned int baseColor;
@property (nonatomic) bool hasBaseColor;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasMessageData;
@property (nonatomic) bool hasMessageType;
@property (nonatomic) bool hasSendDate;
@property (nonatomic) bool hasStartDelay;
@property (nonatomic) bool hasSupportsPlaybackTimeOffsets;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *messageData;
@property (nonatomic) int messageType;
@property (nonatomic) long long sendDate;
@property (nonatomic) double startDelay;
@property (nonatomic) bool supportsPlaybackTimeOffsets;

- (void).cxx_destruct;
- (int)StringAsMessageType:(id)arg1;
- (unsigned int)baseColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBaseColor;
- (bool)hasIdentifier;
- (bool)hasMessageData;
- (bool)hasMessageType;
- (bool)hasSendDate;
- (bool)hasStartDelay;
- (bool)hasSupportsPlaybackTimeOffsets;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageData;
- (int)messageType;
- (id)messageTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (long long)sendDate;
- (void)setBaseColor:(unsigned int)arg1;
- (void)setHasBaseColor:(bool)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setHasSendDate:(bool)arg1;
- (void)setHasStartDelay:(bool)arg1;
- (void)setHasSupportsPlaybackTimeOffsets:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageData:(id)arg1;
- (void)setMessageType:(int)arg1;
- (void)setSendDate:(long long)arg1;
- (void)setStartDelay:(double)arg1;
- (void)setSupportsPlaybackTimeOffsets:(bool)arg1;
- (double)startDelay;
- (bool)supportsPlaybackTimeOffsets;
- (void)writeTo:(id)arg1;

@end
