/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataProvenanceKey : NSObject <NSCopying> {
    HDDataOriginProvenance * _dataProvenance;
    unsigned long long  _hash;
    NSString * _localProductType;
    NSString * _localSystemBuild;
}

@property (nonatomic, readonly, copy) HDDataOriginProvenance *dataProvenance;
@property (nonatomic, readonly, copy) NSString *localProductType;
@property (nonatomic, readonly, copy) NSString *localSystemBuild;

+ (id)provenanceKeyForProvenance:(id)arg1 localProductType:(id)arg2 localSystemBuild:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataProvenance;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localProductType;
- (id)localSystemBuild;

@end
