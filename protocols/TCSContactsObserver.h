/* made by EzioChiu.
 */

@protocol TCSContactsObserver <NSObject>

@optional

- (void)destinationsDidChange:(TCSContacts *)arg1;
- (void)recencyDidChange:(TCSContacts *)arg1;

@end
