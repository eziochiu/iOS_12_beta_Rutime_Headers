/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceHMCamera : WKInterfaceObject {
    UIView * _cameraView;
    UIView * _containerView;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerViewSize;
    CAContext * _context;
}

@property (nonatomic, retain) UIView *cameraView;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) struct CGSize { double x1; double x2; } containerViewSize;
@property (nonatomic, retain) CAContext *context;

- (void).cxx_destruct;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5;
- (id)cameraView;
- (id)containerView;
- (struct CGSize { double x1; double x2; })containerViewSize;
- (id)context;
- (void)remoteSetHeight:(double)arg1;
- (void)remoteSetWidth:(double)arg1;
- (void)setCameraSource:(id)arg1;
- (void)setCameraView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setContainerViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)updateContainerViewSize;

@end
