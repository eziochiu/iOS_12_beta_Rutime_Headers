/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPickerSection : NSObject {
    NSString * _footer;
    NSMutableArray * _items;
    NSString * _title;
}

@property (nonatomic, copy) NSString *footer;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, copy) NSString *title;

+ (id)sectionWithTitle:(id)arg1;
+ (id)sectionWithTitle:(id)arg1 footer:(id)arg2;

- (void).cxx_destruct;
- (id)footer;
- (id)items;
- (void)setFooter:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
