/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUTraceableResource : NSObject {
    NSHashTable * _monitoredTokens;
    NSString * _name;
    bool  _printTimeoutAsError;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _timeoutBlocks;
    NSMutableArray * _tokens;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool printTimeoutAsError;

- (void).cxx_destruct;
- (void)addToken:(id)arg1 isForTemporaryRelinquish:(bool)arg2;
- (id)description;
- (void)didRelinquishResourceWithToken:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)p_tokenSerializationDescriptionFromQueueWithIndentLevel:(unsigned long long)arg1;
- (bool)printTimeoutAsError;
- (void)removeToken:(id)arg1 isForTemporaryRelinquish:(bool)arg2;
- (void)scheduleRelinquishTimeoutForToken:(id)arg1 isForTemporaryRelinquish:(bool)arg2;
- (void)setPrintTimeoutAsError:(bool)arg1;
- (void)temporarilyRelinquishForToken:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)tokenSerializationDescription;
- (id)tokenSerializationDescriptionWithIndentLevel:(unsigned long long)arg1;
- (id)willAcquireResourceWithIntent:(id)arg1 timeout:(double)arg2;
- (id)willAcquireResourceWithIntent:(id)arg1 timeout:(double)arg2 context:(id)arg3;

@end
