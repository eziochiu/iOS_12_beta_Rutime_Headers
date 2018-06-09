/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIImageDeckViewElement : SKUIViewElement {
    double  _additionalDragLeft;
    double  _additionalDragRight;
    double  _initialDragLeft;
    double  _initialDragRight;
}

@property (nonatomic, readonly) double additionalDragLeft;
@property (nonatomic, readonly) double additionalDragRight;
@property (nonatomic, readonly) double initialDragLeft;
@property (nonatomic, readonly) double initialDragRight;

- (double)additionalDragLeft;
- (double)additionalDragRight;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (double)initialDragLeft;
- (double)initialDragRight;

@end
