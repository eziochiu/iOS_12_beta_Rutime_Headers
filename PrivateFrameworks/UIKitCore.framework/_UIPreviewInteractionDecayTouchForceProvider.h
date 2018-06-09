/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewInteractionDecayTouchForceProvider : NSObject <_UIPreviewInteractionTouchForceProviding> {
    bool  _active;
    <UICoordinateSpace> * _coordinateSpace;
    double  _initialTouchForce;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    <_UIPreviewInteractionTouchForceProviding> * _touchForceProvider;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchForce;

- (void).cxx_destruct;
- (void)cancelInteraction;
- (id)initWithTouchForceProvider:(id)arg1;
- (bool)isActive;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (void)setActive:(bool)arg1;
- (double)touchForce;

@end
