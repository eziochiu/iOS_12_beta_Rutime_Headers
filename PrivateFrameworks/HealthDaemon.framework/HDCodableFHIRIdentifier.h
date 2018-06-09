/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableFHIRIdentifier : PBCodable <NSCopying> {
    NSString * _identifier;
    NSString * _resourceType;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasResourceType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *resourceType;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasResourceType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resourceType;
- (void)setIdentifier:(id)arg1;
- (void)setResourceType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
