/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitAccessoryReadWrite : PBCodable <NSCopying> {
    NSMutableArray * _characteristics;
    unsigned int  _duration;
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int errorCode : 1; 
        unsigned int source : 1; 
        unsigned int transportType : 1; 
        unsigned int isRemote : 1; 
        unsigned int isTimedWrite : 1; 
        unsigned int isWrite : 1; 
    }  _has;
    bool  _isRemote;
    bool  _isTimedWrite;
    bool  _isWrite;
    int  _source;
    unsigned long long  _timestamp;
    NSString * _transaction;
    NSString * _transportProtocolVersion;
    int  _transportType;
    AWDHomeKitVendorInformation * _vendorDetails;
}

@property (nonatomic, retain) NSMutableArray *characteristics;
@property (nonatomic) unsigned int duration;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasIsRemote;
@property (nonatomic) bool hasIsTimedWrite;
@property (nonatomic) bool hasIsWrite;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTransaction;
@property (nonatomic, readonly) bool hasTransportProtocolVersion;
@property (nonatomic) bool hasTransportType;
@property (nonatomic, readonly) bool hasVendorDetails;
@property (nonatomic) bool isRemote;
@property (nonatomic) bool isTimedWrite;
@property (nonatomic) bool isWrite;
@property (nonatomic) int source;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *transaction;
@property (nonatomic, retain) NSString *transportProtocolVersion;
@property (nonatomic) int transportType;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorDetails;

+ (Class)characteristicsType;

- (void).cxx_destruct;
- (int)StringAsSource:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)addCharacteristics:(id)arg1;
- (id)characteristics;
- (id)characteristicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)characteristicsCount;
- (void)clearCharacteristics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (int)errorCode;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasIsRemote;
- (bool)hasIsTimedWrite;
- (bool)hasIsWrite;
- (bool)hasSource;
- (bool)hasTimestamp;
- (bool)hasTransaction;
- (bool)hasTransportProtocolVersion;
- (bool)hasTransportType;
- (bool)hasVendorDetails;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isRemote;
- (bool)isTimedWrite;
- (bool)isWrite;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasIsRemote:(bool)arg1;
- (void)setHasIsTimedWrite:(bool)arg1;
- (void)setHasIsWrite:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setIsRemote:(bool)arg1;
- (void)setIsTimedWrite:(bool)arg1;
- (void)setIsWrite:(bool)arg1;
- (void)setSource:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTransportProtocolVersion:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setVendorDetails:(id)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (unsigned long long)timestamp;
- (id)transaction;
- (id)transportProtocolVersion;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)vendorDetails;
- (void)writeTo:(id)arg1;

@end
