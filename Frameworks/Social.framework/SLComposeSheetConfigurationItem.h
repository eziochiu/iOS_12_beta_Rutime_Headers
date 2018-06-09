/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLComposeSheetConfigurationItem : NSObject {
    <SLComposeSheetConfigurationItemObserving> * _changeObserver;
    id /* block */  _tapHandler;
    NSString * _title;
    NSString * _value;
    bool  _valuePending;
}

@property (nonatomic, copy) id /* block */ tapHandler;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *value;
@property (nonatomic) bool valuePending;

- (void).cxx_destruct;
- (id)changeObserver;
- (id)init;
- (void)setChangeObserver:(id)arg1;
- (void)setTapHandler:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValuePending:(bool)arg1;
- (id /* block */)tapHandler;
- (id)title;
- (id)value;
- (bool)valuePending;

@end
