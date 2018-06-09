/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REMLWeightedModel : NSObject {
    REMLModel * _model;
    float  _weight;
}

@property (nonatomic, retain) REMLModel *model;
@property (nonatomic) float weight;

- (void).cxx_destruct;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setWeight:(float)arg1;
- (float)weight;

@end
