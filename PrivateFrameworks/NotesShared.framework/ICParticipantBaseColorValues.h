/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICParticipantBaseColorValues : NSObject {
    double  _alphaValue;
    double  _blueValue;
    double  _greenValue;
    double  _redValue;
}

@property (nonatomic) double alphaValue;
@property (nonatomic) double blueValue;
@property (nonatomic) double greenValue;
@property (nonatomic) double redValue;

- (double)alphaValue;
- (double)blueValue;
- (double)greenValue;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (double)redValue;
- (void)setAlphaValue:(double)arg1;
- (void)setBlueValue:(double)arg1;
- (void)setGreenValue:(double)arg1;
- (void)setRedValue:(double)arg1;

@end
