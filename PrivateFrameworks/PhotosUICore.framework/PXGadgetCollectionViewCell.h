/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGadgetCollectionViewCell : UICollectionViewCell {
    <PXGadget> * _gadget;
}

@property (nonatomic, retain) <PXGadget> *gadget;
@property (nonatomic, readonly) UIView *gadgetContentView;

- (void).cxx_destruct;
- (id)gadget;
- (id)gadgetContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setGadget:(id)arg1;

@end
