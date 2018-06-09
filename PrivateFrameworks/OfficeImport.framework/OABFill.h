/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABFill : NSObject

+ (void)addStopsFromArray:(const struct OABGradientStop { id x1; }*)arg1 stopCount:(int)arg2 inverted:(bool)arg3 startPos:(float)arg4 endPos:(float)arg5 toStopArray:(id)arg6 fillPropertiesManager:(id)arg7;
+ (id)patternFromBlipId:(unsigned int)arg1 blipName:(id)arg2 blipDataReference:(struct EshBlip { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct UID { unsigned char x_4_1_1[16]; } x4; }*)arg3 state:(id)arg4;
+ (id)readFillFromFillPropertiesManager:(id)arg1 state:(id)arg2;
+ (void)readGradientFill:(id)arg1 fromFillPropertiesManager:(id)arg2 state:(id)arg3;
+ (void)readImageFill:(id)arg1 fromFillPropertiesManager:(id)arg2 state:(id)arg3;

@end
