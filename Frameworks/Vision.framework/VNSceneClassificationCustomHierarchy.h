/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSceneClassificationCustomHierarchy : NSObject <NSCopying, NSSecureCoding, VNObservationsCacheKeyProviding, VNRequestRevisionProviding> {
    NSDictionary * _additionalRelationships;
    struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { 
        struct ImageClassifier_HierarchicalModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _hierarchicalModel_DO_NOT_ACCESS_DIRECTLY;
    unsigned long long  _sceneClassificationRequestDetectionLevel;
    unsigned long long  _sceneClassificationRequestRevision;
}

@property (nonatomic, readonly, copy) NSDictionary *relationships;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (id)customHierarchyForSceneClassificationRequest:(id)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_addRelationships:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customHierarchyWithAdditionalParent:(id)arg1 children:(id)arg2 error:(id*)arg3;
- (id)customHierarchyWithAdditionalRelationships:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel {} *x1; struct __shared_weak_count {} *x2; })hierarchicalModelAndReturnError:(id*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneClassificationRequestRevision:(unsigned long long)arg1 detectionLevel:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel {} *x1; struct __shared_weak_count {} *x2; })newHierarchicalModelAndReturnError:(id*)arg1;
- (id)observationsCacheKey;
- (id)relationships;
- (unsigned long long)requestDetectionLevel;
- (unsigned long long)requestRevision;

@end
