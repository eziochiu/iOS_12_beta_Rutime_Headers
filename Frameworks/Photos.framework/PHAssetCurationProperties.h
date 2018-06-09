/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCurationProperties : PHAssetPropertySet {
    NSDate * _addedDate;
    float  _interestingSubjectScore;
}

@property (nonatomic, readonly) NSDate *addedDate;
@property (nonatomic, readonly) float interestingSubjectScore;

+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)addedDate;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (float)interestingSubjectScore;

@end
