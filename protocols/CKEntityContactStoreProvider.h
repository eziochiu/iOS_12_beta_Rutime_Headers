/* made by EzioChiu.
 */

@protocol CKEntityContactStoreProvider <NSObject>

@required

- (void*)addressBook;
- (CNContactStore *)contactStore;

@end
