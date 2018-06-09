/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataCollectorConfiguration : NSObject <NSCopying> {
    double  _collectionInterval;
    unsigned long long  _collectionType;
}

@property (nonatomic) double collectionInterval;
@property (nonatomic) unsigned long long collectionType;

- (double)collectionInterval;
- (unsigned long long)collectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)mergedConfiguration:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setCollectionType:(unsigned long long)arg1;

@end
