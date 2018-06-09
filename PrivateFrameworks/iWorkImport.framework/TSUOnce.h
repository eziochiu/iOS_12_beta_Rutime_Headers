/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUOnce : NSObject <NSCopying> {
    bool  _didPerformOnce;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)performBlockOnce:(id /* block */)arg1;

@end
