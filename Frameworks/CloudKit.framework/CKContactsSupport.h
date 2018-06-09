/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContactsSupport : NSObject

@property (nonatomic, readonly) Class CKCNContact;
@property (nonatomic, readonly) Class CKCNContactFetchRequest;
@property (nonatomic, readonly) Class CKCNContactStore;
@property (nonatomic, readonly) Class CKCNMutableContact;
@property (nonatomic, readonly) Class CKCNPhoneNumber;

+ (id)sharedInstance;

- (Class)CKCNContact;
- (Class)CKCNContactFetchRequest;
- (Class)CKCNContactStore;
- (Class)CKCNMutableContact;
- (Class)CKCNPhoneNumber;

@end
