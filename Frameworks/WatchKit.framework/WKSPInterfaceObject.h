/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKSPInterfaceObject : NSObject {
    NSString * _interfaceProperty;
    NSString * _propertyIndex;
    long long  _rowIndex;
    long long  _tableIndex;
    NSString * _viewControllerID;
}

@property (nonatomic, copy) NSString *interfaceProperty;
@property (nonatomic, copy) NSString *propertyIndex;
@property (nonatomic) long long rowIndex;
@property (nonatomic) long long tableIndex;
@property (nonatomic, copy) NSString *viewControllerID;

- (void).cxx_destruct;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5;
- (void)_sendValueChanged:(id)arg1;
- (void)_sendValueChanged:(id)arg1 forProperty:(id)arg2;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (id)init;
- (id)interfaceProperty;
- (id)propertyIndex;
- (long long)rowIndex;
- (void)setInterfaceProperty:(id)arg1;
- (void)setPropertyIndex:(id)arg1;
- (void)setRowIndex:(long long)arg1;
- (void)setTableIndex:(long long)arg1;
- (void)setViewControllerID:(id)arg1;
- (long long)tableIndex;
- (id)viewControllerID;

@end
