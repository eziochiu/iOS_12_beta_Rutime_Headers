/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentContentDataItem : PKPaymentDataItem {
    PKPaymentContentItem * _contentItem;
}

@property (nonatomic, readonly) PKPaymentContentItem *contentItem;

+ (long long)dataType;
+ (bool)supportsMultipleItems;

- (void).cxx_destruct;
- (id)contentItem;
- (id)initWithContentItem:(id)arg1;
- (bool)isValidWithError:(id*)arg1;

@end
