/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INExtensionContextGetRideStatusIntentResponseObserver : NSObject <INGetRideStatusIntentResponseObserver> {
    <INIntentResponseObserver> * _remoteObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)getRideStatusResponseDidUpdate:(id)arg1;
- (id)initWithRemoteObserver:(id)arg1;

@end
