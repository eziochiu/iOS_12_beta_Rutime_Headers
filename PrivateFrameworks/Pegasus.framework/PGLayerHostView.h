/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGLayerHostView : UIView {
    _UIRemoteView * _remoteView;
    BKSTouchDeliveryPolicyAssertion * _touchDeliveryPolicyAssertion;
}

@property (nonatomic, retain) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } layerHostTransform;

- (void).cxx_destruct;
- (void)_manageSharingOfTouchesBetweenClientAndHostContext;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)hostedWindowHostingHandle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layerHostTransform;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setLayerHostTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
