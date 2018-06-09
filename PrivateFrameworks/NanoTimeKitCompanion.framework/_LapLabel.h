/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _LapLabel : UILabel {
    unsigned long long  _lap;
    bool  _split;
}

@property (nonatomic) unsigned long long lap;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)lap;
- (void)setLap:(unsigned long long)arg1;
- (void)split;

@end
