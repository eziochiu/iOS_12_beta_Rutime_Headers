/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface ETTaskClassifier : ETTask {
    NSArray * _class_names;
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  fwd_net;
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  net_with_bwd;
    struct options { 
        float lr; 
        float lr_decay_epoch; 
        float momentum; 
        float weight_decay; 
        bool l2_regularization; 
        int verbose; 
    }  sgd_options;
}

@property NSArray *class_names;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)class_names;
- (id)evaluate:(id)arg1;
- (float)fit:(id)arg1 numberOfBatches:(unsigned int)arg2 withProgress:(id /* block */)arg3;
- (float)fit:(id)arg1 numberOfEpochs:(int)arg2 withProgress:(id /* block */)arg3;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;
- (void)saveNetwork:(id)arg1;
- (void)setClass_names:(id)arg1;

@end
