/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleMergeContentViewController : UIViewController {
    <PXPerson> * _draggedPerson;
    <PXPerson> * _targetPerson;
}

@property (nonatomic, retain) <PXPerson> *draggedPerson;
@property (nonatomic, retain) <PXPerson> *targetPerson;

- (void).cxx_destruct;
- (id)draggedPerson;
- (id)initWithTargetPerson:(id)arg1 draggedPerson:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDraggedPerson:(id)arg1;
- (void)setTargetPerson:(id)arg1;
- (id)targetPerson;
- (void)viewDidLoad;

@end
