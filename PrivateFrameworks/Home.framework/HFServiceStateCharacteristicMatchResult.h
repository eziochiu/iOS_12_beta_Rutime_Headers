/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceStateCharacteristicMatchResult : NSObject <NAIdentifiable> {
    NSSet * _allCharacteristics;
    NSDictionary * _characteristicsByServiceUUID;
    NSSet * _services;
    NSDictionary * _servicesByUUID;
}

@property (nonatomic, readonly, copy) NSSet *allCharacteristics;
@property (nonatomic, readonly, copy) NSDictionary *characteristicsByServiceUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *services;
@property (nonatomic, readonly, copy) NSDictionary *servicesByUUID;
@property (readonly) Class superclass;

+ (id)matchResultByMergingResults:(id)arg1;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)allCharacteristics;
- (id)characteristicsByServiceUUID;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2;
- (id)initWithServices:(id)arg1 characteristicsByServiceUUID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)services;
- (id)servicesByUUID;

@end
