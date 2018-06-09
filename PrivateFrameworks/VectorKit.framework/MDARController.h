/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MDARController : NSObject <ARSessionDelegate> {
    <MDARControllerDelegate> * _delegate;
    ARSession * _session;
    ARWorldTrackingConfiguration * _sessionConfiguration;
    unsigned long long  _sessionInterruptedReason;
    unsigned long long  _trackingState;
    unsigned long long  _trackingStateReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MDARControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ARSession *session;
@property (nonatomic, readonly) unsigned long long sessionInterruptedReason;
@property (readonly) Class superclass;

+ (bool)isSupported;
+ (unsigned long long)vkARTrackingStateFromARTrackingState:(long long)arg1;
+ (unsigned long long)vkARTrackingStateReasonFromARTrackingStateReason:(long long)arg1;

- (void)_avCaptureSessionWasInterrupted:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)pause;
- (void)run:(bool)arg1;
- (id)session;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (unsigned long long)sessionInterruptedReason;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
