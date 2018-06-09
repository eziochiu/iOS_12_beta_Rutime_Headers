/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)_numberPadButtonOuterCircleDiameter;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;
+ (bool)usesTelephonyGlyphsWhereAvailable;

- (int)characterType;
- (id)initForCharacter:(unsigned int)arg1;
- (id)stringCharacter;

@end