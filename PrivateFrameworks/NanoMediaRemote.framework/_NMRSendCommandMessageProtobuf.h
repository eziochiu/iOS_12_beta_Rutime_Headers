/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRSendCommandMessageProtobuf : PBCodable <NSCopying> {
    NSString * _bundleID;
    int  _command;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int command : 1; 
        unsigned int originIdentifier : 1; 
    }  _has;
    _NMRCommandOptionsProtobuf * _options;
    int  _originIdentifier;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) int command;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasCommand;
@property (nonatomic, readonly) bool hasOptions;
@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) _NMRCommandOptionsProtobuf *options;
@property (nonatomic) int originIdentifier;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (int)StringAsCommand:(id)arg1;
- (id)bundleID;
- (int)command;
- (id)commandAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleID;
- (bool)hasCommand;
- (bool)hasOptions;
- (bool)hasOriginIdentifier;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)options;
- (int)originIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCommand:(int)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
