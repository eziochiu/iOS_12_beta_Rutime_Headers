/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUScrubberTilingLayoutInvalidationContext : PUTilingLayoutInvalidationContext {
    bool  _invalidatedExpandedItem;
}

@property (nonatomic, readonly) bool invalidatedExpandedItem;

- (void)invalidateExpandedItem;
- (bool)invalidatedExpandedItem;

@end
