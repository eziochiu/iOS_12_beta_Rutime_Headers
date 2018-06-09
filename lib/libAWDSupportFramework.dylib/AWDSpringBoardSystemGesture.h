/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardSystemGesture : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
    NSString * _type;
    NSString * _userInfo;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, readonly) bool hasUserInfo;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *userInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasUserInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)timestamp;
- (id)type;
- (id)userInfo;
- (void)writeTo:(id)arg1;

@end
