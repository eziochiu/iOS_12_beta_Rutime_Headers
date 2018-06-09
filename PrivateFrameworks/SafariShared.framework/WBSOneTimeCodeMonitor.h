/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSOneTimeCodeMonitor : NSObject {
    NSArray * _codes;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSHashTable * _observers;
    IMOneTimeCodeAccelerator * _oneTimeCodeAccelerator;
}

@property (nonatomic, readonly, copy) NSArray *codes;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)codes;
- (void)consumeCode:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
