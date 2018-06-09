/* made by EzioChiu.
 */

@protocol UIStatusBarServerClient

@required

- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveDoubleHeightStatusString:(NSString *)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveGlowAnimationState:(bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveStatusBarData:(const struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)arg2 withActions:(int)arg3;
- (void)statusBarServer:(UIStatusBarServer *)arg1 didReceiveStyleOverrides:(int)arg2;

@end
