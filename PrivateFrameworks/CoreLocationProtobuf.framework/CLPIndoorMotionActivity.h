/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPIndoorMotionActivity : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    CLPMotionActivity * _motionActivity;
    double  _timestamp;
}

@property (nonatomic, readonly) bool hasMotionActivity;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) CLPMotionActivity *motionActivity;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMotionActivity;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)motionActivity;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMotionActivity:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
