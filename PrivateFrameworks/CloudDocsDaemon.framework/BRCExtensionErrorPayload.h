/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCExtensionErrorPayload : PBCodable <NSCopying> {
    NSString * _minimumOSName;
}

@property (nonatomic, readonly) bool hasMinimumOSName;
@property (nonatomic, retain) NSString *minimumOSName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinimumOSName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minimumOSName;
- (bool)readFrom:(id)arg1;
- (void)setMinimumOSName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
