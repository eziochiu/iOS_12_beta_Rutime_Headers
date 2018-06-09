/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFacePropertySet : NSObject <PHFacePropertySet> {
    PHFace * _face;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PHFace *face;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)entityName;
+ (bool)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertiesToPrefetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)face;
- (id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(bool)arg3;

@end
