/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapDotsLayout : PXPlacesMapLayout {
    bool  _initialLayoutReturned;
}

@property bool initialLayoutReturned;

- (bool)initialLayoutReturned;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (void)reset;
- (void)setInitialLayoutReturned:(bool)arg1;

@end
