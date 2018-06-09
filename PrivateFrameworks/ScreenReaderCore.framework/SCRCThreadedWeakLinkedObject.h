/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCThreadedWeakLinkedObject : NSObject {
    bool  _calledDealloc;
    int  _referenceCount;
    NSLock * _releaseLock;
}

- (void).cxx_destruct;
- (id)init;

@end
