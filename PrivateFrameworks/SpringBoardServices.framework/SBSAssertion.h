/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAssertion : NSObject {
    NSString * _assertionName;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    unsigned int  _port;
    NSString * _reason;
}

@property (nonatomic, readonly, copy) NSString *assertionName;
@property (nonatomic, readonly, copy) NSString *reason;

- (void).cxx_destruct;
- (id)assertionName;
- (void)dealloc;
- (id)init;
- (id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned int)arg3;
- (void)invalidate;
- (id)reason;

@end
