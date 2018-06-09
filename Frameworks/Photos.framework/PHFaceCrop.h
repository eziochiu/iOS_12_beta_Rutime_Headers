/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceCrop : PHObject {
    NSData * _resourceData;
    short  _state;
    short  _type;
}

@property (nonatomic, readonly) NSData *resourceData;
@property (nonatomic, readonly) short state;
@property (nonatomic, readonly) short type;

+ (id)entityKeyMap;
+ (id)fetchFaceCropsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)arg1;
+ (id)fetchFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFaceCropsWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)resourceData;
- (short)state;
- (short)type;

@end
