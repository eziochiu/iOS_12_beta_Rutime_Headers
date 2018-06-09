/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)mediaQueryResultChanged;
- (void)styleSheetAddedWithHeader:(id)arg1;
- (void)styleSheetChangedWithStyleSheetId:(id)arg1;
- (void)styleSheetRemovedWithStyleSheetId:(id)arg1;

@end
