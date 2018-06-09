/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetSceneprintProperties : PHAssetPropertySet {
    NSData * _sceneprint;
}

@property (nonatomic, readonly) NSData *sceneprint;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)sceneprint;

@end
