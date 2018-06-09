/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreLogFetchOperation : HMDBackingStoreOperation {
    long long  _compareValue;
    id /* block */  _fetchBlock;
    long long  _maskValue;
    id  _sentinal;
}

@property (nonatomic) long long compareValue;
@property (nonatomic, copy) id /* block */ fetchBlock;
@property (nonatomic) long long maskValue;
@property (nonatomic, retain) id sentinal;

- (void).cxx_destruct;
- (long long)compareValue;
- (id /* block */)fetchBlock;
- (id)initWithAlreadyPushedTo:(unsigned long long)arg1 result:(id /* block */)arg2;
- (id)initWithNeedsPushTo:(unsigned long long)arg1 result:(id /* block */)arg2;
- (id)initWithSentinal:(id)arg1 alreadyPushedTo:(unsigned long long)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithSentinal:(id)arg1 mask:(long long)arg2 compare:(long long)arg3 fetchResult:(id /* block */)arg4;
- (id)initWithSentinal:(id)arg1 needsPushTo:(unsigned long long)arg2 fetchResult:(id /* block */)arg3;
- (id)mainReturningError;
- (long long)maskValue;
- (id)sentinal;
- (void)setCompareValue:(long long)arg1;
- (void)setFetchBlock:(id /* block */)arg1;
- (void)setMaskValue:(long long)arg1;
- (void)setSentinal:(id)arg1;

@end
