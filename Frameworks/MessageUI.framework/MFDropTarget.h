/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFDropTarget : NSObject <UIDropInteractionDelegate_Private> {
    NSSet * _acceptableUTIs;
    <MFDropTargetDelegate> * _delegate;
    struct { 
        unsigned int respondsToCanDropDraggedItemsAtPoint; 
        unsigned int respondsToDragEntered; 
        unsigned int respondsToDragExited; 
        unsigned int respondsToDragDidMoveToPoint; 
        unsigned int respondsToDidDropItemsAtPoint; 
        unsigned int respondsToDataOwner; 
    }  _delegateFlags;
    UIDropInteraction * _dropInteraction;
    UIView * _targetView;
}

@property (nonatomic, copy) NSSet *acceptableUTIs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFDropTargetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDropInteraction *dropInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *targetView;

- (void).cxx_destruct;
- (bool)_delegateCanDropItemsWithDropSession:(id)arg1;
- (void)_delegateDidDropItemsWithDropSession:(id)arg1;
- (bool)_delegateHandlesDrops;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_dropSessionEnded;
- (bool)_sessionContainsOnlyAcceptableTypeIdentifiers:(id)arg1;
- (void)_updateDelegateFlags;
- (id)acceptableUTIs;
- (id)delegate;
- (id)dropInteraction;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)initWithView:(id)arg1 delegate:(id)arg2;
- (void)setAcceptableUTIs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDropInteraction:(id)arg1;
- (void)setTargetView:(id)arg1;
- (id)targetView;

@end
