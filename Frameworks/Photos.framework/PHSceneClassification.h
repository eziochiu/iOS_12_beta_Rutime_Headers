/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSceneClassification : NSObject {
    double  _confidence;
    unsigned int  _sceneIdentifier;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned int sceneIdentifier;

+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1;

- (double)confidence;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSceneClassification:(id)arg1;
- (unsigned int)sceneIdentifier;

@end
