/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface _PFDQRBEThreadStack : NSObject {
    PFDispatchQueue * _activeQueues;
    unsigned long long  _currentIndex;
    _PFDQRBEThreadStack * _next;
}

+ (void)initialize;
+ (id)stackForCurrentThread;

- (void).cxx_destruct;
- (bool)containsQueue:(id)arg1;
- (bool)isEmpty;
- (void)popQueue;
- (void)pushQueue:(id)arg1;

@end
