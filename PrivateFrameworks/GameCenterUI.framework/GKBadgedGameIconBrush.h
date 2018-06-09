/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKBadgedGameIconBrush : GKThemeBrush {
    GKThemeBrush * _badgeBrush;
}

@property (nonatomic, retain) GKThemeBrush *badgeBrush;

- (id)badgeBrush;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)init;
- (double)scaleForInput:(id)arg1;
- (void)setBadgeBrush:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;

@end
