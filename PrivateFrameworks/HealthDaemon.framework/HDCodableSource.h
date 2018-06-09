/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableSource : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    bool  _deleted;
    struct { 
        unsigned int modificationDate : 1; 
        unsigned int options : 1; 
        unsigned int deleted : 1; 
    }  _has;
    double  _modificationDate;
    NSString * _name;
    long long  _options;
    NSString * _productType;
    NSData * _uuid;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) bool deleted;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic) bool hasDeleted;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasOptions;
@property (nonatomic, readonly) bool hasProductType;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) double modificationDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long options;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedModificationDate;
- (id)decodedUUID;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasDeleted;
- (bool)hasModificationDate;
- (bool)hasName;
- (bool)hasOptions;
- (bool)hasProductType;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (id)name;
- (long long)options;
- (id)productType;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setHasOptions:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setProductType:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
