/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupItemOffer : NSObject {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) NSString *offerType;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSString *subscriptionType;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)actionTextForType:(id)arg1;
- (id)buyParameters;
- (void)dealloc;
- (id)formattedPrice;
- (id)initWithLookupDictionary:(id)arg1;
- (id)lookupDictionary;
- (id)offerType;
- (id)price;
- (id)subscriptionType;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM

- (id)MCExternalVersionIdentifier;

@end
