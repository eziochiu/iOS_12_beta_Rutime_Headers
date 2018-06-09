/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFRequestQueue : NSObject {
    NSConditionLock * _condition;
    NSMutableArray * _consumers;
    NSMutableArray * _requests;
    unsigned int  _waitingInside;
    unsigned int  _waitingOutside;
}

- (void)_processRequests:(id)arg1 consumers:(id)arg2;
- (void)addRequest:(id)arg1 consumer:(id)arg2;
- (void)addRequests:(id)arg1 consumers:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)processRequest:(id)arg1 consumer:(id)arg2;
- (void)processRequests:(id)arg1 consumers:(id)arg2;
- (void)willAddRequests:(id)arg1 consumers:(id)arg2;

@end
