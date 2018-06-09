/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVInteractionContextFactory : NSObject <SVInteractionContextFactory> {
    <UICoordinateSpace> * _coordinateSpace;
}

@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coordinateSpace;
- (id)createInteractionContextWithView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithCoordinateSpace:(id)arg1;

@end
