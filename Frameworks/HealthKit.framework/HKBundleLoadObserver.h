/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKBundleLoadObserver : NSObject {
    <HKBundleLoadObserverDelegate> * _delegate;
    NSSet * _pathPrefixes;
    Protocol * _protocol;
}

@property (nonatomic, readonly) <HKBundleLoadObserverDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleBundleLoaded:(id)arg1;
- (id)delegate;
- (id)initForClassesConformingToProtocol:(id)arg1 pathPrefixes:(id)arg2 delegate:(id)arg3;

@end
