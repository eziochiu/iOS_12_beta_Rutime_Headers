/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebSelectionNode : NSObject {
    UIWebSelectionNode * _fromBottomByContracting;
    UIWebSelectionNode * _fromBottomByExpanding;
    UIWebSelectionNode * _fromLeftByContracting;
    UIWebSelectionNode * _fromLeftByExpanding;
    UIWebSelectionNode * _fromRightByContracting;
    UIWebSelectionNode * _fromRightByExpanding;
    UIWebSelectionNode * _fromTopByContracting;
    UIWebSelectionNode * _fromTopByExpanding;
    bool  _invalid;
    UIWebSelection * _selection;
    UIWebSelectionGraph * _sharedGraph;
}

@property (retain) UIWebSelection *selection;

- (void)dealloc;
- (id)initWithSelection:(id)arg1 inGraph:(id)arg2;
- (void)invalidate;
- (id)nodeByMovingEdge:(int)arg1 outwards:(bool)arg2;
- (id*)nodeByReferenceFromEdge:(int)arg1 outwards:(bool)arg2;
- (int)oppositeEdge:(int)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;

@end
