/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreLogUpdateOperation : HMDBackingStoreOperation {
    long long  _maskValue;
    long long  _setValue;
    NSArray * _values;
}

@property (nonatomic) long long maskValue;
@property (nonatomic) long long setValue;
@property (nonatomic, retain) NSArray *values;

- (void).cxx_destruct;
- (id)initWithRowIDs:(id)arg1 failedPushedTo:(unsigned long long)arg2;
- (id)initWithRowIDs:(id)arg1 mask:(long long)arg2 set:(long long)arg3;
- (id)initWithRowIDs:(id)arg1 successfullyPushedTo:(unsigned long long)arg2;
- (id)mainReturningError;
- (long long)maskValue;
- (void)setMaskValue:(long long)arg1;
- (void)setSetValue:(long long)arg1;
- (long long)setValue;
- (void)setValues:(id)arg1;
- (id)values;

@end
