/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAudioTimeProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int sampleRate : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    double  _sampleRate;
    double  _timestamp;
}

@property (nonatomic) bool hasSampleRate;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double sampleRate;
@property (nonatomic) double timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSampleRate;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)sampleRate;
- (void)setHasSampleRate:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSampleRate:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
