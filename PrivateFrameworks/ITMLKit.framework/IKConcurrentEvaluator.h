/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKConcurrentEvaluator : NSObject {
    <_IKConcurrentlyEvaluating> * _evaluator;
    NSMutableDictionary * _getters;
}

@property (nonatomic, readonly) <_IKConcurrentlyEvaluating> *evaluator;
@property (nonatomic, retain) NSMutableDictionary *getters;

- (void).cxx_destruct;
- (void)addEvaluationBlock:(id /* block */)arg1 forKey:(id)arg2;
- (id)evaluator;
- (id)getters;
- (id)initWithQueue:(id)arg1;
- (id)initWithRunLoop:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setGetters:(id)arg1;

@end
