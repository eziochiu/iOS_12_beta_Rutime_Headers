/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDBudget : NSObject {
    unsigned long long  _integerId;
    NSString * _name;
    CDSession * _session;
    long long  _type;
}

@property (readonly) unsigned long long integerId;
@property (readonly) NSString *name;
@property (readonly) CDSession *session;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 error:(id*)arg4;
- (id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id*)arg5;
- (bool)compareValueTo:(long long)arg1 swapOnMatchWithValue:(long long)arg2 error:(id*)arg3;
- (long long)creditsRemainingWithError:(id*)arg1;
- (bool)decrementByValue:(long long)arg1 error:(id*)arg2;
- (bool)deleteWithError:(id*)arg1;
- (id)forecastEffectiveOnDate:(id)arg1 error:(id*)arg2;
- (bool)incrementByValue:(long long)arg1 error:(id*)arg2;
- (id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5;
- (unsigned long long)integerId;
- (id)name;
- (id)session;
- (long long)type;

@end
