/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NURAWCameraSpaceProperties : NSObject {
    double  _whiteFactor;
    double  _whiteValue;
    NSArray * _xyzToCamera1;
    NSArray * _xyzToCamera2;
}

@property double whiteFactor;
@property double whiteValue;
@property (retain) NSArray *xyzToCamera1;
@property (retain) NSArray *xyzToCamera2;

- (void).cxx_destruct;
- (id)description;
- (void)setWhiteFactor:(double)arg1;
- (void)setWhiteValue:(double)arg1;
- (void)setXyzToCamera1:(id)arg1;
- (void)setXyzToCamera2:(id)arg1;
- (double)whiteFactor;
- (double)whiteValue;
- (id)xyzToCamera1;
- (id)xyzToCamera2;

@end
