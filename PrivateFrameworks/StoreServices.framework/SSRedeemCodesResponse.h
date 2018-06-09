/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {
    NSDictionary * _errors;
    NSDictionary * _redeemedCodes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *failedCodes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *redeemedCodes;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)dictionaryForCode:(id)arg1;
- (id)errorForCode:(id)arg1;
- (id)failedCodes;
- (id)initWithXPCEncoding:(id)arg1;
- (id)redeemedCodes;
- (void)setFailedCodes:(id)arg1;
- (void)setRedeemedCodes:(id)arg1;

@end
