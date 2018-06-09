/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLLocalStreamTaskWorkBlockOp : __NSCFURLLocalStreamTaskWork {
    id /* block */  _block;
    bool  _shouldWaitForTls;
}

+ (id)opWithBlock:(id /* block */)arg1 description:(const char *)arg2;

- (void)dealloc;
- (void)executeBlock;
- (void)markBlockAsWaitingOnTls:(bool)arg1;
- (bool)shouldWaitForTLS;

@end
