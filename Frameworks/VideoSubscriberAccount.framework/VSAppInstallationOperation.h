/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAppInstallationOperation : VSAsyncOperation {
    NSString * _buyParams;
    VSOptional * _result;
}

@property (nonatomic, copy) NSString *buyParams;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (id)buyParams;
- (void)executionDidBegin;
- (id)init;
- (id)result;
- (void)setBuyParams:(id)arg1;
- (void)setResult:(id)arg1;

@end
