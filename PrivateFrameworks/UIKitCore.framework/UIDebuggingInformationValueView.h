/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingInformationValueView : UIView {
    UIView * _contentView;
    UIDebuggingInformationValue * _value;
    <UIDebuggingInformationValueViewObserver> * _valueObserver;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIDebuggingInformationValue *value;
@property (nonatomic) <UIDebuggingInformationValueViewObserver> *valueObserver;

+ (Class)_viewClassForValueType:(long long)arg1;
+ (id)viewWithValue:(id)arg1;

- (void).cxx_destruct;
- (void)_prepareConstraints;
- (void)addViewsToContentView;
- (id)contentView;
- (id)initWithValue:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueObserver:(id)arg1;
- (id)value;
- (void)valueChangedToValue:(id)arg1;
- (id)valueObserver;

@end
