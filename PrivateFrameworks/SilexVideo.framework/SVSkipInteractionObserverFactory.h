/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVSkipInteractionObserverFactory : NSObject <SVVideoInteractionObserverFactory> {
    <SVVideoEventTrackerProviding> * _eventTrackerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoEventTrackerProviding> *eventTrackerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInteractionObserverForVideo:(id)arg1;
- (id)eventTrackerProvider;
- (id)initWithVideoEventTrackerProvider:(id)arg1;

@end
