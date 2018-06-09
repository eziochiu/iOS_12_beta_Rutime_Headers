/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

- (void)domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3;
- (void)domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2;
- (void)domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)domStorageItemsClearedWithStorageId:(id)arg1;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;

@end
