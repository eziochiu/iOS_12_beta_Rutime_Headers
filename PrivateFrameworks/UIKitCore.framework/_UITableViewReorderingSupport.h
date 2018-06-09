/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewReorderingSupport : NSObject {
    NSTimer * _autoscrollTimer;
    UIShadowView * _bottomShadowView;
    NSIndexPath * _initialIndexPath;
    unsigned int  _oldShowHorizontalScrollIndicator;
    unsigned int  _oldShowVerticalScrollIndicator;
    unsigned int  _reloadDataCalled;
    UITableViewCell * _reorderedCell;
    unsigned int  _reorderingCancelled;
    unsigned int  _reserved;
    NSIndexPath * _targetIndexPath;
    UIShadowView * _topShadowView;
    bool  _wasScrollingEnabled;
}

- (void).cxx_destruct;

@end