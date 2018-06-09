/* made by EzioChiu.
 */

@protocol _NCWidgetViewController_Service_IPC

@required

- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(NSUUID *)arg2;
- (void)__performUpdateWithReplyHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, bool, void*
- (void)__requestEncodedLayerTreeToURL:(void *)arg1 withCodingImageFormat:(void *)arg2 withReplyHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)__updateVisibilityState:(long long)arg1;
- (void)__updateVisibleFrame:(void *)arg1 withReplyHandler:(void *)arg2; // needs 2 arg types, found 7: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)__setActiveDisplayMode:(long long)arg1;
- (void)__setMaximumSize:(struct CGSize { double x1; double x2; })arg1 forDisplayMode:(long long)arg2;

@end
