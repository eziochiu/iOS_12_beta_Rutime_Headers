/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {
    unsigned long long  _arrowDirection;
    double  _arrowHeight;
    double  _arrowOffset;
    bool  _canOverlapSourceViewRect;
    NSMutableArray * _candidates;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containingFrame;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _containingFrameInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    double  _offset;
    bool  _preferLandscapeOrientations;
    unsigned long long  _preferredArrowDirections;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewRect;
    bool  _updatesEnabled;
}

@property (nonatomic, readonly) unsigned long long arrowDirection;
@property (nonatomic) double arrowHeight;
@property (nonatomic) double arrowOffset;
@property (nonatomic) bool canOverlapSourceViewRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containingFrame;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } containingFrameInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) double offset;
@property (nonatomic) bool preferLandscapeOrientations;
@property (nonatomic) unsigned long long preferredArrowDirections;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceViewRect;
@property (getter=_updatesEnabled, setter=_setUpdatesEnabled:, nonatomic) bool updatesEnabled;

+ (id)_observationKeys;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_popoverViewSizeForContentSize:(struct CGSize { double x1; double x2; })arg1 arrowDirection:(unsigned long long)arg2;
- (void)_setUpdatesEnabled:(bool)arg1;
- (void)_updateOutputs;
- (bool)_updatesEnabled;
- (unsigned long long)arrowDirection;
- (double)arrowHeight;
- (double)arrowOffset;
- (bool)canOverlapSourceViewRect;
- (id)candidates;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containingFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containingFrameInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)offset;
- (bool)preferLandscapeOrientations;
- (unsigned long long)preferredArrowDirections;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setArrowHeight:(double)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setCanOverlapSourceViewRect:(bool)arg1;
- (void)setContainingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContainingFrameInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferLandscapeOrientations:(bool)arg1;
- (void)setPreferredArrowDirections:(unsigned long long)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceViewRect;
- (void)updateProperties:(id /* block */)arg1;

@end
