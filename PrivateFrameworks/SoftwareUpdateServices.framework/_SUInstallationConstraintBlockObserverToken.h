/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface _SUInstallationConstraintBlockObserverToken : NSObject <SUInvalidatable> {
    bool  _invalidated;
    SUInstallationConstraintObserver * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;
- (void)invalidate;

@end
