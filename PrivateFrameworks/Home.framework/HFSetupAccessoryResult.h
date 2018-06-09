/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSetupAccessoryResult : NSObject {
    NSError * _error;
    HMSetupAccessoryPayload * _setupPayload;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) HMSetupAccessoryPayload *setupPayload;

+ (bool)isHomeKitURL:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithPayload:(id)arg1;
- (id)initWithPayload:(id)arg1 error:(id)arg2;
- (id)initWithSetupCode:(id)arg1;
- (id)initWithSetupURL:(id)arg1;
- (bool)isAllZerosCode;
- (id)setupPayload;

@end
