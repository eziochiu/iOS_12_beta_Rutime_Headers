/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentTransactionInternal : NSObject {
    NSArray * _downloads;
    NSError * _error;
    SKPaymentTransaction * _originalTransaction;
    SKPayment * _payment;
    NSString * _temporaryIdentifier;
    NSDate * _transactionDate;
    NSString * _transactionIdentifier;
    NSData * _transactionReceipt;
    long long  _transactionState;
    NSString * _uuid;
}

- (void).cxx_destruct;
- (id)init;

@end
