/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIObjectReferenceCounter : NSObject {
    NSCountedSet * _objectReferences;
}

- (void).cxx_destruct;
- (id)allObjects;
- (void)decrementReferenceForObject:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (void)incrementReferenceForObject:(id)arg1;
- (id)init;

@end
