/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKThrowBalloonViewAttributes : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startFrame;
    NSDictionary * _supplementaryViews;
    CKBalloonView * _throwBalloonView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startFrame;
@property (nonatomic, retain) NSDictionary *supplementaryViews;
@property (nonatomic, retain) CKBalloonView *throwBalloonView;

- (void).cxx_destruct;
- (void)setStartFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSupplementaryViews:(id)arg1;
- (void)setThrowBalloonView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startFrame;
- (id)supplementaryViews;
- (id)throwBalloonView;

@end
