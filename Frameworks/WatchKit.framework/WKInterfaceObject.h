/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceObject : NSObject {
    NSString * _interfaceProperty;
    NSString * _propertyIndex;
    long long  _rowIndex;
    long long  _tableIndex;
    NSString * _viewControllerID;
}

@property (nonatomic, copy) NSString *interfaceProperty;
@property (nonatomic, retain) NSString *propertyIndex;
@property (nonatomic) long long rowIndex;
@property (nonatomic) long long tableIndex;
@property (nonatomic, copy) NSString *viewControllerID;

- (void).cxx_destruct;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5;
- (void)_sendValueChanged:(id)arg1;
- (void)_sendValueChanged:(id)arg1 forProperty:(id)arg2;
- (void)_setImage:(id)arg1 forProperty:(id)arg2;
- (void)_setImageData:(id)arg1 forProperty:(id)arg2;
- (void)_setImageNamed:(id)arg1 forProperty:(id)arg2;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (void)didRegisterWithRemoteInterface;
- (id)init;
- (id)interfaceProperty;
- (id)propertyIndex;
- (long long)rowIndex;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityImageRegions:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setInterfaceProperty:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setPropertyIndex:(id)arg1;
- (void)setRelativeHeight:(double)arg1 withAdjustment:(double)arg2;
- (void)setRelativeWidth:(double)arg1 withAdjustment:(double)arg2;
- (void)setRotation:(double)arg1;
- (void)setRowIndex:(long long)arg1;
- (void)setTableIndex:(long long)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setViewControllerID:(id)arg1;
- (void)setWidth:(double)arg1;
- (void)sizeToFitHeight;
- (void)sizeToFitWidth;
- (long long)tableIndex;
- (id)viewControllerID;

@end
