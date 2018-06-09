/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAlertControllerDescriptor : NSObject {
    bool  _applicationIsFullscreen;
    bool  _hasContentViewController;
    bool  _hasHeaderContentViewController;
    bool  _hasMessage;
    bool  _hasTitle;
    long long  _numberOfActions;
}

@property bool applicationIsFullscreen;
@property bool hasContentViewController;
@property bool hasHeaderContentViewController;
@property bool hasMessage;
@property bool hasTitle;
@property long long numberOfActions;

- (bool)applicationIsFullscreen;
- (bool)hasContentViewController;
- (bool)hasHeaderContentViewController;
- (bool)hasMessage;
- (bool)hasTitle;
- (bool)isEqual:(id)arg1;
- (long long)numberOfActions;
- (void)setApplicationIsFullscreen:(bool)arg1;
- (void)setHasContentViewController:(bool)arg1;
- (void)setHasHeaderContentViewController:(bool)arg1;
- (void)setHasMessage:(bool)arg1;
- (void)setHasTitle:(bool)arg1;
- (void)setNumberOfActions:(long long)arg1;

@end
