/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouCatchUpConditionWaiter : NSObject <FCOperationCanceling> {
    FCForYouCatchUpCondition * _condition;
    NSError * _error;
    bool  _finished;
    NSObject<OS_dispatch_group> * _group;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) FCForYouCatchUpCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_possiblyFinishWithError:(id)arg1;
- (id)_waitWithTimeoutTime:(unsigned long long)arg1;
- (void)cancel;
- (id)condition;
- (id)init;
- (void)setCondition:(id)arg1;
- (void)signalWithError:(id)arg1;
- (id)wait;
- (id)waitWithTimeoutInterval:(double)arg1;

@end
