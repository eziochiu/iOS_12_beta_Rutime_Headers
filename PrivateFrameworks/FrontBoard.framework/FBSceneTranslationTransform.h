/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneTranslationTransform : FBSceneTransform {
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } translation;

- (void)_updateTransform;
- (id)description;
- (id)initWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })translation;

@end
