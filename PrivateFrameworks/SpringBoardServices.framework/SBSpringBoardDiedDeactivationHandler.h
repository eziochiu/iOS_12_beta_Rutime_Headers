/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSpringBoardDiedDeactivationHandler : NSObject {
    NSMutableArray * _handlerBlockArray;
    NSLock * _lock;
    BSPortDeathSentinel * _portDeathSentinel;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addDeactivationBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)init;

@end
