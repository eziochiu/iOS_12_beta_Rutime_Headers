/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUTDSSession : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CUTDSEndpoint * _endpoint;
    bool  _invalidateCalled;
    NSString * _label;
    unsigned long long  _tdsHashActivate;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) CUTDSEndpoint *endpoint;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long tdsHashActivate;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)endpoint;
- (id)init;
- (void)invalidate;
- (id)label;
- (void)setDispatchQueue:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTdsHashActivate:(unsigned long long)arg1;
- (unsigned long long)tdsHashActivate;

@end
