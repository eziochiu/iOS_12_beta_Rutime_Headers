/* made by EzioChiu.
 */

@protocol CNPropertyGroupItemDelegate <NSObject>

@optional

- (CNContactViewCache *)contactViewCache;
- (void)propertyItem:(CNPropertyGroupItem *)arg1 willChangeValue:(id)arg2;

@end
