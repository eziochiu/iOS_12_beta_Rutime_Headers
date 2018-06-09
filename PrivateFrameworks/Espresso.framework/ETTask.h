/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface ETTask : NSObject {
    bool  _dumpData;
    ETImageDescriptorExtractor * _extractor;
    ETModelDef * _model;
    ETOptimizerDef * _optimizer;
}

@property (nonatomic) bool dumpData;
@property (nonatomic) ETImageDescriptorExtractor *extractor;
@property (nonatomic) ETModelDef *model;
@property (nonatomic) ETOptimizerDef *optimizer;

- (bool)dumpData;
- (id)evaluate:(id)arg1;
- (id)extractor;
- (float)fit:(id)arg1 numberOfBatches:(unsigned int)arg2 withProgress:(id /* block */)arg3;
- (float)fit:(id)arg1 numberOfEpochs:(int)arg2 withProgress:(id /* block */)arg3;
- (id)init;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;
- (id)model;
- (id)optimizer;
- (void)saveNetwork:(id)arg1;
- (void)setDumpData:(bool)arg1;
- (void)setExtractor:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setOptimizer:(id)arg1;

@end
