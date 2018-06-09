/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DATransaction : NSObject {
    NSString * _transactionId;
}

@property (nonatomic, readonly) NSString *transactionId;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)transactionId;

@end
