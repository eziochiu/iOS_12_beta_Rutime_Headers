/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableFHIRResourceForAPI : PBCodable <NSCopying> {
    NSData * _data;
    struct { 
        unsigned int lastUpdatedDate : 1; 
    }  _has;
    NSString * _identifier;
    double  _lastUpdatedDate;
    NSString * _resourceType;
    NSString * _sourceURL;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasLastUpdatedDate;
@property (nonatomic, readonly) bool hasResourceType;
@property (nonatomic, readonly) bool hasSourceURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double lastUpdatedDate;
@property (nonatomic, retain) NSString *resourceType;
@property (nonatomic, retain) NSString *sourceURL;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasData;
- (bool)hasIdentifier;
- (bool)hasLastUpdatedDate;
- (bool)hasResourceType;
- (bool)hasSourceURL;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (double)lastUpdatedDate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resourceType;
- (void)setData:(id)arg1;
- (void)setHasLastUpdatedDate:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastUpdatedDate:(double)arg1;
- (void)setResourceType:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;
- (void)writeTo:(id)arg1;

@end
