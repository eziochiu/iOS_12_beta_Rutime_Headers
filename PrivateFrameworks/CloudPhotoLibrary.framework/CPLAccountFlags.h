/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLAccountFlags : PBCodable <NSCopying> {
    bool  _defaultHEVC;
    struct { 
        unsigned int version : 1; 
        unsigned int reason : 1; 
        unsigned int defaultHEVC : 1; 
    }  _has;
    int  _reason;
    long long  _version;
}

@property (nonatomic) bool defaultHEVC;
@property (nonatomic) bool hasDefaultHEVC;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasVersion;
@property (nonatomic) int reason;
@property (nonatomic) long long version;

- (int)StringAsReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultHEVC;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDefaultHEVC;
- (bool)hasReason;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setDefaultHEVC:(bool)arg1;
- (void)setHasDefaultHEVC:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
