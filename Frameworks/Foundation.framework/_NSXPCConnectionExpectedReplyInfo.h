/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionExpectedReplyInfo : NSObject {
    id /* block */  _cleanupBlock;
    id /* block */  _errorBlock;
    NSXPCInterface * _interface;
    unsigned long long  _proxyNumber;
    NSBlock * _replyBlock;
    SEL  _selector;
    NSDictionary * _userInfo;
}

@property (copy) id /* block */ cleanupBlock;
@property (copy) id /* block */ errorBlock;
@property (retain) NSXPCInterface *interface;
@property unsigned long long proxyNumber;
@property (copy) NSBlock *replyBlock;
@property SEL selector;
@property (retain) NSDictionary *userInfo;

- (id /* block */)cleanupBlock;
- (void)dealloc;
- (id /* block */)errorBlock;
- (id)interface;
- (unsigned long long)proxyNumber;
- (id)replyBlock;
- (SEL)selector;
- (void)setCleanupBlock:(id /* block */)arg1;
- (void)setErrorBlock:(id /* block */)arg1;
- (void)setInterface:(id)arg1;
- (void)setProxyNumber:(unsigned long long)arg1;
- (void)setReplyBlock:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
