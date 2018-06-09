/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportOneUpTransitionItem : NSObject {
    PUImportItemViewModel * _importItem;
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _indexPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    UIImage * _snapshotImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
    UIView * _transitionView;
}

@property (nonatomic, readonly) PUImportItemViewModel *importItem;
@property (nonatomic, readonly) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } indexPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrame;
@property (nonatomic, retain) UIImage *snapshotImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;
@property (nonatomic, retain) UIView *transitionView;

- (void).cxx_destruct;
- (id)importItem;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPath;
- (id)initWithInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 snapshotImage:(id)arg2 importItem:(id)arg3 indexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrame;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSnapshotImage:(id)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionView:(id)arg1;
- (id)snapshotImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;
- (id)transitionView;

@end
