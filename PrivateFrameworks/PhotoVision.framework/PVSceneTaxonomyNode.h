/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVSceneTaxonomyNode : NSObject {
    NSMutableSet * _childNodes;
    double  _highPrecisionThreshold;
    double  _highRecallThreshold;
    bool  _indexed;
    NSString * _name;
    NSMutableSet * _parentNodes;
    unsigned int  _sceneClassId;
    PVSceneTaxonomy * _taxonomy;
    double  _threshold;
}

@property (retain) NSMutableSet *childNodes;
@property (readonly, copy) NSSet *children;
@property (readonly) double highPrecisionThreshold;
@property (readonly) double highRecallThreshold;
@property (getter=isIndexed, readonly) bool indexed;
@property (readonly, copy) NSString *name;
@property (retain) NSMutableSet *parentNodes;
@property (readonly, copy) NSSet *parents;
@property (getter=isRoot, readonly) bool root;
@property (readonly) unsigned int sceneClassId;
@property (readonly) PVSceneTaxonomy *taxonomy;
@property (readonly) double threshold;

+ (id)localizedStringForKey:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3;

- (void).cxx_destruct;
- (void)addChildNode:(id)arg1;
- (id)childNodes;
- (id)children;
- (id)description;
- (unsigned long long)hash;
- (double)highPrecisionThreshold;
- (double)highRecallThreshold;
- (id)initWithSceneClassId:(unsigned int)arg1 name:(id)arg2 indexed:(bool)arg3 threshold:(double)arg4 highRecallThreshold:(double)arg5 highPrecisionThreshold:(double)arg6 taxonomy:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNode:(id)arg1;
- (bool)isIndexed;
- (bool)isRoot;
- (id)localizedLabel;
- (id)localizedSynonyms;
- (id)name;
- (id)parentNodes;
- (id)parents;
- (unsigned int)sceneClassId;
- (void)setChildNodes:(id)arg1;
- (void)setParentNodes:(id)arg1;
- (id)taxonomy;
- (double)threshold;
- (void)traverse:(long long)arg1 visitor:(id /* block */)arg2;

@end
