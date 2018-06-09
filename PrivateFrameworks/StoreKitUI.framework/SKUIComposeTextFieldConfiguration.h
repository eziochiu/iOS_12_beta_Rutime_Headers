/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIComposeTextFieldConfiguration : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _borderInsets;
    long long  _columnIndex;
    bool  _isRequired;
    NSString * _label;
    unsigned long long  _maxLength;
    NSString * _placeholder;
    NSString * _value;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderInsets;
@property (nonatomic) long long columnIndex;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic, copy) NSString *placeholder;
@property (getter=isRequired, nonatomic) bool required;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderInsets;
- (long long)columnIndex;
- (bool)isRequired;
- (id)label;
- (unsigned long long)maxLength;
- (id)placeholder;
- (void)setBorderInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setColumnIndex:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRequired:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
