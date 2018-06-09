/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _collapsedRect;
    struct CGSize { 
        double width; 
        double height; 
    }  presentationSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CGSize { double x1; double x2; } presentationSize;
@property (readonly) Class superclass;

+ (double)defaultExtendedControlHeight;

- (id)_inheritedRenderConfig;
- (unsigned long long)_numberOfColumns:(bool)arg1;
- (id)activeCandidateList;
- (void)candidatesDidChange;
- (int)candidatesVisualStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })presentationSize;
- (void)setCandidateViewExtended:(bool)arg1;
- (void)setPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldUseKeyboardBackground:(id)arg1;

@end
