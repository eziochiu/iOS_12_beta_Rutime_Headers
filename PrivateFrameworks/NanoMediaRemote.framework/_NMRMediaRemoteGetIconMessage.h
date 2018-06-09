/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRMediaRemoteGetIconMessage : PBCodable <NSCopying> {
    NSString * _bundleID;
    struct { 
        unsigned int height : 1; 
        unsigned int timestamp : 1; 
        unsigned int width : 1; 
        unsigned int originIdentifier : 1; 
    }  _has;
    double  _height;
    int  _originIdentifier;
    double  _timestamp;
    double  _width;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasHeight;
@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWidth;
@property (nonatomic) double height;
@property (nonatomic) int originIdentifier;
@property (nonatomic) double timestamp;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleID;
- (bool)hasHeight;
- (bool)hasOriginIdentifier;
- (bool)hasTimestamp;
- (bool)hasWidth;
- (unsigned long long)hash;
- (double)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)originIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)timestamp;
- (double)width;
- (void)writeTo:(id)arg1;

@end
