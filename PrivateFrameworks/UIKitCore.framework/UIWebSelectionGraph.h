/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebSelectionGraph : NSObject {
    NSMutableArray * _selectionNodes;
}

- (id)addNodeFromSelection:(id)arg1;
- (void)clearNodes;
- (void)dealloc;
- (void)exploreFromNode:(id)arg1;
- (void)exploreFromNode:(id)arg1 outwards:(bool)arg2 maxDepth:(int)arg3;
- (id)init;

@end
