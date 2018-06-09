/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeProblemCodeGenerator : NSObject {
    NSString * _advertisingName;
    NSString * _buildVersion;
    NSString * _errorCode;
    NSMutableString * _eventString;
    NSString * _payload;
}

@property (nonatomic, copy) NSString *advertisingName;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, copy) NSString *errorCode;
@property (nonatomic, retain) NSMutableString *eventString;
@property (nonatomic, copy) NSString *payload;

+ (id)sharedReportHelper;

- (void).cxx_destruct;
- (id)_generateReportCodeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forFrame:(long long)arg2 ofTotalFrames:(long long)arg3;
- (id)advertisingName;
- (void)beginInstance;
- (id)buildVersion;
- (id)errorCode;
- (id)eventString;
- (id)generateReportCode;
- (id)init;
- (id)payload;
- (void)setAdvertisingName:(id)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setEventString:(id)arg1;
- (void)setPayload:(id)arg1;

@end
