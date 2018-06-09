/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface RoundProgressView : UIView {
    double  _progress;
}

@property (nonatomic, readonly) double displayedProgress;
@property (nonatomic) double progress;

+ (Class)layerClass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (double)displayedProgress;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)progress;
- (void)setProgress:(double)arg1;

@end
