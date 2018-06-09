/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSLayoutRectObservable : NSObservationSource {
    NSArray * _anchorObservations;
    <NSLayoutItem> * _layoutItem;
    NSLayoutRect * _rectangle;
}

+ (id)observableForRect:(id)arg1 inItem:(id)arg2;

- (void)_reflectUpdatedRect:(id)arg1;
- (void)dealloc;
- (id)initWithRect:(id)arg1 inLayoutItem:(id)arg2;

@end
