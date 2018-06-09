/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProxySetupOperation : NSOperation {
    CKDClientContext * _context;
    bool  _isExecuting;
    bool  _isFinished;
    CKDClientProxy * _proxy;
}

@property (nonatomic) CKDClientContext *context;
@property (nonatomic) bool isExecuting;
@property (nonatomic) bool isFinished;
@property (nonatomic) CKDClientProxy *proxy;

+ (id)operationWithProxy:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (void)_markFinished;
- (void)_setIsExecuting:(bool)arg1;
- (void)_setIsFinished:(bool)arg1;
- (id)context;
- (id)initWithProxy:(id)arg1 context:(id)arg2;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)proxy;
- (void)setContext:(id)arg1;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setProxy:(id)arg1;
- (void)start;

@end
