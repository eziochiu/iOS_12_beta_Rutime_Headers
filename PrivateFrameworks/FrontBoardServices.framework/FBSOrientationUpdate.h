/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSOrientationUpdate : NSObject {
    double  _duration;
    long long  _orientation;
    long long  _rotationDirection;
}

@property (nonatomic) double duration;
@property (nonatomic) long long orientation;
@property (nonatomic) long long rotationDirection;

- (id)description;
- (double)duration;
- (id)init;
- (id)initWithOrientation:(long long)arg1 duration:(double)arg2 rotationDirection:(long long)arg3;
- (long long)orientation;
- (long long)rotationDirection;
- (void)setDuration:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setRotationDirection:(long long)arg1;

@end
