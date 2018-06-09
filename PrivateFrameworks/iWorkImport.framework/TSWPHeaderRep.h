/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPHeaderRep : TSWPRep {
    double  _leftClip;
    double  _rightClip;
}

@property (nonatomic) double leftClip;
@property (nonatomic) double rightClip;

- (double)leftClip;
- (double)rightClip;
- (void)setLeftClip:(double)arg1;
- (void)setRightClip:(double)arg1;

@end
