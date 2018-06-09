/* made by EzioChiu
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface _NCWidgetExtensionContext : NSExtensionContext {
    long long  _activeDisplayMode;
    _NCWidgetViewController * _hostViewController;
    long long  _largestAvailableDisplayMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxCompactSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxExpandedSize;
}

@property (getter=_activeDisplayMode, setter=_setActiveDisplayMode:, nonatomic) long long activeDisplayMode;
@property (getter=_hostViewController, setter=_setHostViewController:, nonatomic) _NCWidgetViewController *hostViewController;
@property (getter=_largestAvailableDisplayMode, setter=_setLargestAvailableDisplayMode:, nonatomic) long long largestAvailableDisplayMode;

- (void).cxx_destruct;
- (long long)_activeDisplayMode;
- (id)_hostViewController;
- (long long)_largestAvailableDisplayMode;
- (struct CGSize { double x1; double x2; })_maximumSizeForDisplayMode:(long long)arg1;
- (void)_setActiveDisplayMode:(long long)arg1;
- (void)_setHostViewController:(id)arg1;
- (void)_setLargestAvailableDisplayMode:(long long)arg1;
- (void)_setMaximumSize:(struct CGSize { double x1; double x2; })arg1 forDisplayMode:(long long)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)openURL:(id)arg1 completion:(id /* block */)arg2;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setWidgetLargestAvailableDisplayMode:(long long)arg1;
- (long long)widgetActiveDisplayMode;
- (bool)widgetIsForeground;
- (long long)widgetLargestAvailableDisplayMode;
- (struct CGSize { double x1; double x2; })widgetMaximumSizeForDisplayMode:(long long)arg1;

@end
