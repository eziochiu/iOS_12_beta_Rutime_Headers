/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthenticationResponse : NSObject {
    NSDictionary * _responseDictionary;
    long long  _urlBagType;
    NSHTTPURLResponse * _urlResponse;
}

@property long long URLBagType;
@property (readonly) NSHTTPURLResponse *URLResponse;
@property (readonly) long long accountKind;
@property (readonly) NSString *accountName;
@property (readonly) NSNumber *accountUniqueIdentifier;
@property (readonly) long long availableServiceTypes;
@property (readonly) NSString *creditsString;
@property (readonly) long long enabledServiceTypes;
@property (readonly) NSNumber *failureType;
@property (getter=isManagedStudent, readonly) bool managedStudent;
@property (getter=isNewCustomer, readonly) bool newCustomer;
@property (readonly) NSDictionary *responseDictionary;
@property (readonly) long long responseType;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) NSString *token;
@property (readonly) NSString *userMessage;

- (void).cxx_destruct;
- (long long)URLBagType;
- (id)URLResponse;
- (long long)_responseTypeForErrorNumber:(long long)arg1;
- (long long)_responseTypeForFailureType:(long long)arg1;
- (long long)_responseTypeForStatusValue:(long long)arg1;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (long long)accountKind;
- (id)accountName;
- (id)accountUniqueIdentifier;
- (id)altDSID;
- (long long)availableServiceTypes;
- (id)creditsString;
- (long long)enabledServiceTypes;
- (id)failureType;
- (id)initWithURLResponse:(id)arg1 dictionary:(id)arg2;
- (bool)isManagedStudent;
- (bool)isNewCustomer;
- (id)newAccount;
- (id)responseDictionary;
- (long long)responseType;
- (void)setURLBagType:(long long)arg1;
- (id)storeFrontIdentifier;
- (id)token;
- (id)userMessage;

@end