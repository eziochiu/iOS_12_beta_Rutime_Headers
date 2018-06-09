/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKGreenTeaDataUsageResolver : NSObject {
    bool  _currentlyResolving;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic) bool currentlyResolving;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;

+ (void)resolveGreenTeaDataUsageIfNecessary;

- (void).cxx_destruct;
- (void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(id /* block */)arg1;
- (bool)currentlyResolving;
- (id)init;
- (id)internalQueue;
- (void)resolveGreenTeaDataUsageIfNecessary;
- (void)setCurrentlyResolving:(bool)arg1;
- (void)setInternalQueue:(id)arg1;

@end
