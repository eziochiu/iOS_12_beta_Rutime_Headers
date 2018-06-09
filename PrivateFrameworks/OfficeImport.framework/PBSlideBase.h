/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBSlideBase : NSObject

+ (unsigned long long)authorIdForName:(id)arg1 state:(id)arg2;
+ (unsigned char)mapDirection:(id)arg1;
+ (void)mapSlideNumberPlaceholder:(id)arg1 tgtSlideBase:(id)arg2 state:(id)arg3;
+ (id)newOptions:(long long)arg1 transType:(int)arg2;
+ (id)nonPlaceholderDrawablesAmongDrawables:(id)arg1;
+ (void)parseSlideShowInfo:(struct PptSSSlideInfoAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; int x7; int x8; unsigned char x9; int x10; unsigned short x11; int x12; }*)arg1 slideBase:(id)arg2 state:(id)arg3;
+ (int)parseTransType:(int)arg1 direction:(long long)arg2;
+ (bool)readColorScheme:(id)arg1 colorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;
+ (void)readComments:(id)arg1 slide:(id)arg2 state:(id)arg3;
+ (void)readDrawingGroup:(id)arg1 slide:(id)arg2 state:(id)arg3;
+ (bool)slideFollowsMasterBackground:(id)arg1;

@end
