/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIScoreboardLayout : NSObject {
    struct TVCornerRadii { 
        double topLeft; 
        double topRight; 
        double bottomLeft; 
        double bottomRight; 
    }  _borderRadii;
    VUIScoreboardRowLayout * _bottomRowLayout;
    double  _padding;
    VUITextLayout * _textLayout;
    VUIScoreboardRowLayout * _topRowLayout;
}

@property (nonatomic) struct TVCornerRadii { double x1; double x2; double x3; double x4; } borderRadii;
@property (nonatomic, retain) VUIScoreboardRowLayout *bottomRowLayout;
@property (nonatomic) double padding;
@property (nonatomic, retain) VUITextLayout *textLayout;
@property (nonatomic, retain) VUIScoreboardRowLayout *topRowLayout;

+ (id)scoreboardALayout;
+ (id)scoreboardBLayout;
+ (id)scoreboardCLayoutWithInnerMargin:(double)arg1;

- (void).cxx_destruct;
- (struct TVCornerRadii { double x1; double x2; double x3; double x4; })borderRadii;
- (id)bottomRowLayout;
- (double)padding;
- (void)setBorderRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setBottomRowLayout:(id)arg1;
- (void)setPadding:(double)arg1;
- (void)setTextLayout:(id)arg1;
- (void)setTopRowLayout:(id)arg1;
- (id)textLayout;
- (id)topRowLayout;

@end
