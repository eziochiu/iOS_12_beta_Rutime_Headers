/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDPDate : PBCodable <NSCopying> {
    struct { 
        unsigned int time : 1; 
    }  _has;
    double  _time;
}

@property (nonatomic) bool hasTime;
@property (nonatomic) double time;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTime:(bool)arg1;
- (void)setTime:(double)arg1;
- (double)time;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end
