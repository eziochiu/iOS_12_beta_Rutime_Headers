/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITextInputViewElement : SKUIInputViewElement {
    long long  _keyboardType;
    long long  _maximumLength;
    NSString * _placeholderText;
    bool  _secure;
}

@property (nonatomic, readonly) SKUIAnimatorDOMFeature *animationInterface;
@property (nonatomic, readonly) long long keyboardType;
@property (nonatomic, readonly) long long maximumLength;
@property (nonatomic, readonly) NSString *placeholderText;
@property (getter=isSecure, nonatomic, readonly) bool secure;

+ (bool)isTextInputType:(id)arg1;
+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)animationInterface;
- (id)applyUpdatesWithElement:(id)arg1;
- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isSecure;
- (long long)keyboardType;
- (long long)maximumLength;
- (id)placeholderText;

@end
